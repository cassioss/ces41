%{
/* Inclusao de arquivos da biblioteca de C */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Definicao dos atributos dos atomos operadores */

#define 	LT 	    	1
#define 	LE 	    	2
#define		GT			3
#define		GE			4
#define		EQ			5
#define		NE			6
#define		MAIS        7
#define		MENOS       8
#define		MULT    	9
#define		DIV   	    10
#define		RESTO   	11

/*   Definicao dos tipos de identificadores   */

#define 	IDPROG		1
#define 	IDVAR		2

/*  Definicao dos tipos de variaveis   */

#define 	NAOVAR		0
#define 	INTEIRO		1
#define 	LOGICO		2
#define 	REAL		3
#define 	CARACTERE	4

/*   Definicao de outras constantes   */

#define	NCLASSHASH	23
#define	VERDADE		1
#define	FALSO		0
#define MAXDIMS     10

/*  Strings para nomes dos tipos de identificadores  */

char *nometipid[3] = {" ", "IDPROG", "IDVAR"};

/*  Strings para nomes dos tipos de variaveis  */

char *nometipvar[5] = {"NAOVAR",
	"INTEIRO", "LOGICO", "REAL", "CARACTERE"
};

/*    Declaracoes para a tabela de simbolos     */

typedef struct celsimb celsimb;
typedef celsimb *simbolo;
struct celsimb {
	char *cadeia;
	int tid, tvar, ndims, dims[MAXDIMS+1];
	char inic, ref, array;
	simbolo prox;
};

/*  Variaveis globais para a tabela de simbolos e analise semantica */

simbolo tabsimb[NCLASSHASH];
simbolo simb;
int tipocorrente;

/*
	Prototipos das funcoes para a tabela de simbolos e analise semantica
 */

void InicTabSimb (void);
void ImprimeTabSimb (void);
simbolo InsereSimb (char *, int, int);
int hash (char *);
simbolo ProcuraSimb (char *);
void DeclaracaoRepetida (char *);
void TipoInadequado (char *);
void NaoDeclarado (char *);
void VerificaInicRef (void);
void Incompatibilidade (char *);
void Esperado(char*);
void NaoEsperado(char*);

%}

/* Definicao do tipo de yylval e dos atributos dos nao terminais */

%union {
	char cadeia[50];
	int atr, valint;
	float valreal;
	char carac;
	simbolo simb;
	int tipoexpr;
    int nsubscr;
}

/* Declaracao dos atributos dos tokens e dos nao-terminais */

%type	    <simb>	        Variable
%type 	    <tipoexpr> 	    Expression  AuxExpr1  AuxExpr2
                            AuxExpr3   AuxExpr4   Term   Factor
%type       <nsubscr>       SubscrList
%token		<cadeia>		ID
%token		<carac>		    CHARCT
%token		<valint>		INTCT
%token		<valreal>	    FLOATCT
%token		<cadeia>		STRING
%token		OR
%token		AND
%token		NOT
%token		<atr>			RELOP
%token		<atr>			ADOP
%token		<atr>			MULTOP
%token		NEG
%token		OPPAR
%token		CLPAR
%token		OPBRAK
%token		CLBRAK
%token		OPBRACE
%token		CLBRACE
%token		COMMA
%token		SCOLON
%token		ASSIGN
%token      CHAR
%token      DO
%token      ELSE
%token      FALSE
%token      FLOAT
%token      IF
%token      INT
%token      LOCAL
%token      LOGIC
%token      PROGRAM
%token      READ
%token      STATEMENTS
%token      THEN
%token      TRUE
%token      WHILE
%token      WRITE
%token		<carac>         INVAL
%%
/* Producoes da gramatica:

	Os terminais sao escritos e, depois de alguns,
	para alguma estetica, ha mudanca de linha       */

Prog		:	{InicTabSimb ();}  PROGRAM  ID  {
                    printf ("program %s\n", $3); InsereSimb ($3, IDPROG, NAOVAR);
                }
				LocDecls  Stats {
                    VerificaInicRef ();
                    ImprimeTabSimb ();
                }
            ;
LocDecls 	:
			|	LOCAL  OPBRACE  {printf ("local {\n");}
                DeclList  CLBRACE  {printf ("}\n");}
            ;
DeclList	:	Declaration  |  DeclList  Declaration
            ;
Declaration :	Type  ElemList  SCOLON  {printf (";\n");}
            ;
Type		: 	INT  {printf ("int "); tipocorrente = INTEIRO;}
			|	FLOAT  {printf ("float "); tipocorrente = REAL;}
            | 	CHAR  {printf ("char "); tipocorrente = CARACTERE;}
            |   LOGIC  {printf ("logic "); tipocorrente = LOGICO;}
            ;
ElemList    :	Elem
			|	ElemList  COMMA  {printf (", ");}  Elem
            ;
Elem        :   ID  { printf ("%s ", $1);
                    if  (ProcuraSimb ($1)  !=  NULL) DeclaracaoRepetida ($1);
                    else  { simb = InsereSimb ($1,  IDVAR,  tipocorrente);
                            simb->array = FALSO; }
                }
            |   ID   OPBRAK  { printf ("%s [ ", $1);
                    if  (ProcuraSimb ($1)  !=  NULL) DeclaracaoRepetida ($1);
                    else  { simb = InsereSimb ($1,  IDVAR,  tipocorrente);
                            simb->array = VERDADE; simb->ndims = 0; }
                }  DimList  CLBRAK  {printf ("] ");}
            ;
DimList     :  INTCT   { printf ("%d ", $1);
                    if ($1 <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = $1;}
            |  DimList   COMMA   INTCT   { printf (", %d ", $3);
                    if ($3 <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = $3;}
            ;
Stats       :   STATEMENTS  {printf ("statements ");}  CompStat
            ;
CompStat	:   OPBRACE  {printf ("{\n");}  StatList  CLBRACE  {printf ("}\n");}
            ;
StatList	:
			|   StatList  Statement
            ;
Statement   :   CompStat
			|   IfStat
            |   WhileStat
			|   ReadStat
            |   WriteStat
            |   AssignStat
            ;
IfStat		:   IF  {printf ("if ");}  Expression  THEN
				{printf ("then\n");}  Statement  ElseStat
            ;
ElseStat	:
			|   ELSE  {printf ("else\n");}  Statement
            ;
WhileStat   :	WHILE  {printf ("while ");}  Expression   // TODO testar tipo de Expression (slide 68)
				DO  {printf ("do\n");}  Statement
            ;
ReadStat   	:   READ  OPPAR  {printf ("read ( ");}  ReadList
				CLPAR  SCOLON  {printf (") ;\n");}
            ;
ReadList	:   Variable
			|   ReadList  COMMA  {printf (", ");}  Variable
            ;
WriteStat   :	WRITE  OPPAR  {printf ("write ( ");}  WriteList
				CLPAR  SCOLON  {printf (") ;\n");}
            ;
WriteList	:	WriteElem
			|   WriteList  COMMA  {printf (", ");}  WriteElem
            ;
WriteElem	:   STRING  {printf ("\"%s\" ", $1);}
			|   Expression
            ;
AssignStat  :   Variable  {
                    if  ($1 != NULL) $1->inic = $1->ref = VERDADE;
                }
                ASSIGN  {printf ("= ");}  Expression
				SCOLON  {
                    printf (";\n");
                    if ($1 != NULL)
                        if ((($1->tvar == INTEIRO || $1->tvar == CARACTERE) &&
                            ($5 == REAL || $5 == LOGICO)) ||
                            ($1->tvar == REAL && $5 == LOGICO) ||
                            ($1->tvar == LOGICO && $5 != LOGICO))
                            Incompatibilidade ("Lado direito de comando de atribuicao improprio");
                }
            ;
Expression  :   AuxExpr1
			|   Expression  OR  {printf ("|| ");}   AuxExpr1  {
                    if ($1 != LOGICO || $4 != LOGICO)
                        Incompatibilidade ("Operando improprio para operador or");
                    $$ = LOGICO;
                }
            ;
AuxExpr1    :   AuxExpr2
			|   AuxExpr1  AND  {printf ("&& ");}  AuxExpr2  {
                    if ($1 != LOGICO || $4 != LOGICO)
                        Incompatibilidade ("Operando improprio para operador and");
                    $$ = LOGICO;
                }
            ;
AuxExpr2    :   AuxExpr3
			|   NOT  {printf ("! ");}  AuxExpr3  {
                    if ($3 != LOGICO)
                        Incompatibilidade ("Operando improprio para operador not");
                    $$ = LOGICO;
                }
            ;
AuxExpr3    :   AuxExpr4
			|   AuxExpr4  RELOP  {
                    switch ($2) {
                        case LT: printf ("< "); break;
                        case LE: printf ("<= "); break;
                        case EQ: printf ("== "); break;
                        case NE: printf ("!= "); break;
                        case GT: printf ("> "); break;
                        case GE: printf (">= "); break;
                    }
                }  AuxExpr4  {
                    switch ($2) {
                        case LT: case LE: case GT: case GE:
                            if ($1 != INTEIRO && $1 != REAL && $1 != CARACTERE || $4 != INTEIRO && $4 != REAL && $4 != CARACTERE)
                                Incompatibilidade	("Operando improprio para operador relacional");
                            break;
                        case EQ: case NE:
                            if (($1 == LOGICO || $4 == LOGICO) && $1 != $4)
                                Incompatibilidade ("Operando improprio para operador relacional");
                            break;
                    }
                    $$ = LOGICO;
                }
            ;
AuxExpr4    :	Term
			|   AuxExpr4  ADOP  {
                    switch ($2) {
                        case MAIS: printf ("+ "); break;
                        case MENOS: printf ("- "); break;
                    }
                }  Term  {
                        if ($1 != INTEIRO && $1 != REAL && $1 != CARACTERE || $4 != INTEIRO && $4!=REAL && $4!=CARACTERE)
                            Incompatibilidade ("Operando improprio para operador aritmetico");
                        if ($1 == REAL || $4 == REAL) $$ = REAL;
                        else $$ = INTEIRO;
                }
            ;
Term  	    :   Factor
			|   Term  MULTOP   {
                    switch ($2) {
                        case MULT: printf ("* "); break;
                        case DIV: printf ("/ "); break;
                        case RESTO: printf ("%% "); break;
                    }
                }  Factor  {
                    switch ($2) {
                        case MULT: case DIV:
                            if ($1 != INTEIRO && $1 != REAL && $1 != CARACTERE || $4 != INTEIRO && $4!=REAL && $4!=CARACTERE)
                                Incompatibilidade ("Operando improprio para operador aritmetico");
                            if ($1 == REAL || $4 == REAL) $$ = REAL;
                            else $$ = INTEIRO;
                            break;
                        case RESTO:
                            if ($1 != INTEIRO && $1 != CARACTERE  ||  $4 != INTEIRO && $4 != CARACTERE)
                                Incompatibilidade ("Operando improprio para operador resto");
                            $$ = INTEIRO;
                            break;
                    }
                }
            ;
Factor		:   Variable  {
                    if  ($1 != NULL)  {
                        $1->ref  =  VERDADE;
                        $$ = $1->tvar;
                    }
                }
			|   INTCT  {printf ("%d ", $1); $$ = INTEIRO;}
            |   FLOATCT  {printf ("%g ", $1); $$ = REAL;}
            |   CHARCT  {printf ("\'%c\' ", $1); $$ = CARACTERE;}
            |   TRUE  {printf ("true "); $$ = LOGICO;}
            |   FALSE  {printf ("false "); $$ = LOGICO;}
			|	NEG  {printf ("~ ");}  Factor {
                    if ($3 != INTEIRO && $3 != REAL && $3 != CARACTERE)
                        Incompatibilidade  ("Operando improprio para menos unario");
                    if ($3 == REAL) $$ = REAL;
                    else $$ = INTEIRO;
                }
            |   OPPAR   {printf ("( ");}  Expression  CLPAR
                {printf (") "); $$ = $3;}
            ;
Variable	:   ID  {
                    printf ("%s ", $1);
                    simb = ProcuraSimb ($1);
                    if (simb == NULL) NaoDeclarado ($1);
                    else if (simb->tid != IDVAR) TipoInadequado ($1);
                    $$ = simb;
                    if ($$ != NULL)
                        if ($$->array == VERDADE)
                            Esperado ("Subscrito\(s)");

                }
            |   ID  OPBRAK  {
                    printf ("%s [ ", $1);
                    simb = ProcuraSimb ($1);
                    if (simb == NULL) NaoDeclarado ($1);
                    else if (simb->tid != IDVAR) TipoInadequado ($1);
                    $<simb>$ = simb;
            }  SubscrList  CLBRAK  {
                    printf ("] "); $$ = $<simb>3;
                    if ($$ != NULL)
                        if ($$->array == FALSO)
                            NaoEsperado ("Subscrito\(s)");
                        else if ($$->ndims != $4)
                            Incompatibilidade 
                        ("Numero de subscritos incompativel com declaracao");
                    }
            ;
SubscrList:     AuxExpr4    {
                    if ($1 != INTEIRO && $1 != CARACTERE)
                        Incompatibilidade ("Tipo inadequado para subscrito");
                    $$ = 1;
                }
            |  SubscrList   COMMA  {printf (", ");}   AuxExpr4  {
                if ($4 != INTEIRO && $4 != CARACTERE)
                    Incompatibilidade ("Tipo inadequado para subscrito");
                $$ = $1 + 1;
               }
            ;
%%

/* Inclusao do analisador lexico  */

#include "lex.yy.c"

/*  InicTabSimb: Inicializa a tabela de simbolos   */

void InicTabSimb () {
	int i;
	for (i = 0; i < NCLASSHASH; i++)
		tabsimb[i] = NULL;
}

/*
	ProcuraSimb (cadeia): Procura cadeia na tabela de simbolos;
	Caso ela ali esteja, retorna um ponteiro para sua celula;
	Caso contrario, retorna NULL.
 */

simbolo ProcuraSimb (char *cadeia) {
	simbolo s; int i;
	i = hash (cadeia);
	for (s = tabsimb[i]; (s!=NULL) && strcmp(cadeia, s->cadeia);
		s = s->prox);
	return s;
}

/*
	InsereSimb (cadeia, tid, tvar): Insere cadeia na tabela de
	simbolos, com tid como tipo de identificador e com tvar como
	tipo de variavel; Retorna um ponteiro para a celula inserida
 */

simbolo InsereSimb (char *cadeia, int tid, int tvar) {
	int i; simbolo aux, s;
	i = hash (cadeia); aux = tabsimb[i];
	s = tabsimb[i] = (simbolo) malloc (sizeof (celsimb));
	s->cadeia = (char*) malloc ((strlen(cadeia)+1) * sizeof(char));
	strcpy (s->cadeia, cadeia);
	s->tid = tid;		s->tvar = tvar;
	s->inic = FALSO;	s->ref = FALSO;
	s->prox = aux;	return s;
}

/*
	hash (cadeia): funcao que determina e retorna a classe
	de cadeia na tabela de simbolos implementada por hashing
 */

int hash (char *cadeia) {
	int i, h;
	for (h = i = 0; cadeia[i]; i++) {h += cadeia[i];}
	h = h % NCLASSHASH;
	return h;
}

/* ImprimeTabSimb: Imprime todo o conteudo da tabela de simbolos  */

void ImprimeTabSimb () {
	int i; simbolo s;
	printf ("\n\n   TABELA  DE  SIMBOLOS:\n\n");
	for (i = 0; i < NCLASSHASH; i++)
		if (tabsimb[i]) {
			printf ("Classe %d:\n", i);
			for (s = tabsimb[i]; s!=NULL; s = s->prox){
				printf ("  (%s, %s", s->cadeia,  nometipid[s->tid]);
				if (s->tid == IDVAR){
					printf (", %s, %d, %d",
						nometipvar[s->tvar], s->inic, s->ref);
                    if (s->array == VERDADE) {
                        int j;
                        printf (", EH ARRAY\n\tndims = %d, dimensoes:", s->ndims);
                        for (j = 1; j <= s->ndims; j++)
                            printf ("  %d", s->dims[j]);
                    }
                }
				printf(")\n");
			}
		}
}

/*  Mensagens de erros semanticos  */

void DeclaracaoRepetida (char *s) {
	printf ("\n\n***** Declaracao Repetida: %s *****\n\n", s);
}

void NaoDeclarado (char *s) {
    printf ("\n\n***** Identificador Nao Declarado: %s *****\n\n", s);
}

void TipoInadequado (char *s) {
    printf ("\n\n***** Identificador de Tipo Inadequado: %s *****\n\n", s);
}

void Incompatibilidade (char *s) {
    printf ("\n\n***** Incompatibilidade: %s *****\n\n", s);
}

void VerificaInicRef () {
	int i; simbolo s;

	printf ("\n");
	for (i = 0; i < NCLASSHASH; i++)
		if (tabsimb[i])
			for (s = tabsimb[i]; s!=NULL; s = s->prox)
				if (s->tid == IDVAR) {
					if (s->inic == FALSO)
						printf ("%s: Nao Inicializada\n", s->cadeia);
					if (s->ref == FALSO)
						printf ("%s: Nao Referenciada\n", s->cadeia);
				}
}

void Esperado (char *s) {
    printf ("\n\n***** Esperado: %s *****\n\n", s);
}

void NaoEsperado (char *s) {
    printf ("\n\n***** Nao Esperado: %s *****\n\n", s);
}
