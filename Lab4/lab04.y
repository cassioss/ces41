%{
/* Inclusao de arquivos da biblioteca de C */

#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

/* Definicao dos atributos dos atomos operadores */

#define     LT      1
#define     LE      2
#define     GT      3
#define     GE      4
#define     EQ      5
#define     NE      6

#define     PLUS    1
#define     MINUS   2

#define     TIMES   1
#define     DIVIDE  2
#define     MODULE  3

int tab = 0;

/*   Definicao dos tipos de identificadores   */

#define     IDPROG      1
#define     IDVAR       2

/*  Definicao dos tipos de variaveis   */

#define     NAOVAR      0
#define     INTEIRO     1
#define     LOGICO      2
#define     REAL        3
#define     CARACTERE   4

/*   Definicao de outras constantes   */

#define NCLASSHASH  23
#define VERDADE     1
#define FALSO       0
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
    char string[50];
    int atr, valor;
    float valreal;
    char carac;
    simbolo simb;
    int tipoexpr;
    int nsubscr;    
}

/* Declaracao dos atributos dos tokens e dos nao-terminais */

%token  CALL
%token  CHAR
%token  DO
%token  ELSE
%token  FALSE
%token  FLOAT
%token  FOR
%token  FUNCTION
%token  GLOBAL
%token  IF
%token  INIT
%token  INT
%token  LOCAL
%token  LOGIC
%token  MAIN
%token  NEW
%token  PROCEDURE
%token  PROGRAM
%token  READ
%token  REPEAT
%token  RETURN
%token  STATEMENTS
%token  THEN
%token  TRUE
%token  WHILE
%token  WRITE

%type       <simb>          Variable
%type       <tipoexpr>      Expression  AuxExpr1  AuxExpr2
                            AuxExpr3   AuxExpr4   Term   Factor
%type       <nsubscr>       SubscrList
%token  <string>    ID
%token  <valor>     INTCT
%token  <valreal>   FLOATCT
%token  <carac>    CHARCT
%token  <string>    STRING

%token  OR
%token  AND
%token  NOT

%token  <atr>       RELOP
%token  <atr>       ADOP
%token  <atr>       MULTOP

%token  NEG
%token  OPPAR
%token  CLPAR
%token  OPBRAK
%token  CLBRAK
%token  OPBRACE
%token  CLBRACE

%token  OPTRIP
%token  CLTRIP
%token  SCOLON
%token  COMMA
%token  ASSIGN

%token  <carac>     INVAL

%%
/* Producoes da gramatica:

    Os terminais sao escritos e, depois de alguns,
    para alguma estetica, ha mudanca de linha       */

Prog        :	PROGRAM     {printf ("program ");}
                ID          {printf ("%s ", $3); }
                OPTRIP      {printf ("{{{\n\n");}
                GlobDecls
                ModList
                MainMod
                CLTRIP      {printf ("}}}\n"); }
            ;
GlobDecls 	:   /* Empty */
            | 	GLOBAL      {printf ("global ");}
                OPBRACE     {printf ("{\n"); tab++; tabular();}
                DeclList
                CLBRACE     {tab--; tabular (); printf ("}\n\n"); }
            ;
DeclList	:	Declaration
            |	DeclList    {tabular();}  Declaration
            ;
Declaration :	Type  ElemList  SCOLON {printf (";\n");}
            ;
Type		: 	INT     {printf ("int ");}
            |	FLOAT   {printf ("float ");}
            |	CHAR    {printf ("char ");}
            |	LOGIC   {printf ("logic ");}
            ;
ElemList    :	Elem
            |	ElemList
                COMMA   {printf (", "); }
                Elem
            ;
Elem        :	ID      {printf ("%s", $1); }
            |	ID      {printf ("%s", $1); }
                OPBRAK  {printf ("["); }
                DimList
                CLBRAK  {printf ("]"); }
            ;
DimList	    : 	INTCT   {printf ("%d", $1);}
            |	DimList
                COMMA   {printf (", "); }
                INTCT   {printf ("%d", $4);}
            ;
ModList	    :   /* Empty */
            |	ModList     Module
            ;
Module      :	ModHeader   ModBody
            ;
ModHeader   :   FuncHeader
            |   ProcHeader
            ;
FuncHeader	:   Type
                FUNCTION    {printf ("function ");}
                ID          {printf ("%s ", $4);}
                OPPAR       {printf ("\(");}
                FuncHd
            ;
FuncHd      :   CLPAR                   {printf (")\n"); }
            |   ParamList   CLPAR       {printf (")"); }
            ;
ProcHeader  :   PROCEDURE   {printf ("procedure ");}
                ID          {printf ("%s ", $3);}
                OPPAR       {printf ("\(");}
                ProcEnd
            ;
ProcEnd     :   CLPAR               {printf (")\n"); }
            |   ParamList  CLPAR    {printf (")\n"); }
            ;
ParamList   :   Parameter
            |   ParamList
                COMMA       {printf (", ");}
                Parameter
            ;
Parameter   :   Type
                ID          {printf ("%s", $2);}
            ;
ModBody     :	LocDecls
                Stats
            ;
LocDecls 	:   /* Empty */
            |   LOCAL       {printf ("local "); }
                OPBRACE     {printf("{\n"); tab++; tabular();}
                DeclList
                CLBRACE     {tab--; tabular (); printf ("}\n\n"); }
            ;
MainMod     :   MAIN        {printf ("main\n");}
                ModBody
            ;
Stats       :   STATEMENTS  {printf ("statements ");}
                CompStat    {printf ("\n");}
            ;
CompStat	:   OPBRACE     {printf("{\n"); tab++;}
                StatList
                CLBRACE     {tab--; tabular (); printf ("}\n"); }
            ;
StatList	:   /* Empty */
            |	StatList    {tabular(); }     Statement
            ;
Statement   :   CompStat
            |	IfStat
            |	WhileStat
            |	RepeatStat
            |   ForStat
            |	ReadStat
            |   WriteStat
            |	AssignStat
            |   CallStat
            |   ReturnStat
            |	SCOLON      {printf (";\n");}
            ;
IfStat		:   IF          {printf ("if ");}
                Expression
                THEN        {printf (" then\n"); tab++; tabular();}
                Statement   {tab--;}
                ElseStat
            ;
ElseStat	:   /* Empty */
            |	ELSE        {tabular(); printf ("else ");}
                Statement
            ;
WhileStat   :	WHILE       {printf ("while ");}
                Expression
                DO          {printf (" do ");}
                Statement
            ;
RepeatStat  :	REPEAT      {printf ("repeat ");}
                Statement
                WHILE       {printf ("while ");}
                Expression
                SCOLON      {printf (";\n");}
            ;
ForStat	    :	FOR         {printf ("for ");}
                Variable
                INIT        {printf (" init ");}
                Expression
                WHILE       {printf (" while ");}
                Expression
                NEW         {printf (" new ");}
                Expression
                DO          {printf (" do ");}
                Statement
            ;
ReadStat   	:   READ        {printf ("read ");}
                OPPAR       {printf ("\(");}
                ReadList
                CLPAR       {printf (")"); }
                SCOLON      {printf (";\n");}
            ;
ReadList	:   Variable
            |	ReadList
                COMMA       {printf (", ");}
                Variable
            ;
WriteStat   :	WRITE       {printf ("write ");}
                OPPAR       {printf ("\(");}
                WriteList
                CLPAR       {printf (")"); }
                SCOLON      {printf (";\n");}
            ;
WriteList	:	WriteElem
            |	WriteList
                COMMA       {printf (", "); }
                WriteElem
            ;
WriteElem	:   STRING      {printf ("%s", $1);}
            |	Expression
            ;
CallStat    :   CALL        {printf ("call ");}
                ID          {printf ("%s ", $3);}
                OPPAR       {printf ("\(");}
                CallCompl
            ;
CallCompl   :   ExprList    CallFinish
            |   CallFinish
            ;
CallFinish  :   CLPAR       {printf (")");}
                SCOLON      {printf (";\n");}
            ;
ReturnStat  :	RETURN      {printf ("return");}
                SCOLON      {printf(";\n");}
            |	RETURN      {printf ("return ");}
                Expression
                SCOLON      {printf(";\n");}
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
ExprList	:	Expression
            |	ExprList
                COMMA                   {printf (", "); }
                Expression
            ;
Expression  :	AuxExpr1
            |	Expression
                OR  {printf (" or "); }  AuxExpr1
            ;
AuxExpr1    :	AuxExpr2
            |	AuxExpr1
                AND  {printf (" and "); } AuxExpr2
            ;
AuxExpr2    :	AuxExpr3
            |	NOT  {printf ("!"); } AuxExpr3
            ;
AuxExpr3    :	AuxExpr4
            |	AuxExpr4  RELOP {
                    switch($2){
                        case LT:    printf(" < ");  break;
                        case LE:    printf(" <= "); break;
                        case GT:    printf(" > ");  break;
                        case GE:    printf(" >= "); break;
                        case EQ:    printf(" == "); break;
                        case NE:    printf(" != "); break;
                    }
                }   AuxExpr4
            ;
AuxExpr4    :	Term
            |	AuxExpr4  ADOP {
                    if ($2 == PLUS) printf (" + ");
                    else            printf (" - ");
                }  Term
            ;
Term        :   Factor
            |   Term  MULTOP   {
                    switch ($2) {
                        case TIMES: printf ("* "); break;
                        case DIVIDE: printf ("/ "); break;
                        case MODULE: printf ("%% "); break;
                    }
                }  Factor  {
                    switch ($2) {
                        case TIMES: case DIVIDE:
                            if ($1 != INTEIRO && $1 != REAL && $1 != CARACTERE || $4 != INTEIRO && $4!=REAL && $4!=CARACTERE)
                                Incompatibilidade ("Operando improprio para operador aritmetico");
                            if ($1 == REAL || $4 == REAL) $$ = REAL;
                            else $$ = INTEIRO;
                            break;
                        case MODULE:
                            if ($1 != INTEIRO && $1 != CARACTERE  ||  $4 != INTEIRO && $4 != CARACTERE)
                                Incompatibilidade ("Operando improprio para operador resto");
                            $$ = INTEIRO;
                            break;
                    }
                }
            ;
Factor		:	Variable  {
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
            |   NEG  {printf ("~ ");}  Factor {
                    if ($3 != INTEIRO && $3 != REAL && $3 != CARACTERE)
                        Incompatibilidade  ("Operando improprio para menos unario");
                    if ($3 == REAL) $$ = REAL;
                    else $$ = INTEIRO;
                }
            |   OPPAR   {printf ("( ");}  Expression  CLPAR
                {printf (") "); $$ = $3;}
            |	FuncCall
            ;
Variable	:   ID  {  //NOTE refactor (Shift-reduce)
                    printf ("%s ", $1);
                    simb = ProcuraSimb ($1);
                    if (simb == NULL)   NaoDeclarado ($1);
                    else if (simb->tid != IDVAR)   
                        TipoInadequado ($1);
                    $$ = simb;
               }
            |	ID  {
                    printf ("%s ", $1);
                    simb = ProcuraSimb ($1);
                    if (simb == NULL)   NaoDeclarado ($1);
                    else if (simb->tid != IDVAR)   
                        TipoInadequado ($1);
                    $$ = simb;
               }
                OPBRAK      {printf ("["); }
                SubscrList  // TODO analise semantica
                CLBRAK      {printf ("]"); }
            ;
SubscrList  :   AuxExpr4
            |	SubscrList  COMMA  {printf (",");}  AuxExpr4
            ;
FuncCall    :   ID          {printf ("%s", $1); }
                OPPAR       {printf ("\(");}
                FuncTerm
            ;
FuncTerm    :   CLPAR                   {printf (")"); }
            |	ExprList    CLPAR       {printf (")"); }
            ;
%%

/* Inclusao do analisador lexico  */

#include "lex.yy.c"

tabular () {
    int i;
    for (i = 1; i <= tab; i++)
        printf ("\t");
}

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
    s->tid = tid;       s->tvar = tvar;
    s->inic = FALSO;    s->ref = FALSO;
    s->prox = aux;  return s;
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
