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



/* To help indent */
int tab = 0; // NOTE bota num lugar melhor

/*   Definicao dos tipos de identificadores   */

#define     IDGLOB      1
#define     IDVAR       2
#define     IDFUNC      3
#define     IDPROC      4
#define     IDPROG      5

/*  Definicao dos tipos de variaveis   */

#define     NAOVAR      0
#define     INTEIRO     1
#define     LOGICO      2
#define     REAL        3
#define     CARACTERE   4

/* Definicao de constantes para os operadores de quadruplas */

#define     OPOR            1
#define     OPAND           2
#define     OPLT            3
#define     OPLE            4
#define     OPGT            5
#define     OPGE            6
#define     OPEQ            7
#define     OPNE            8
#define     OPMAIS          9
#define     OPMENOS         10
#define     OPMULTIP        11
#define     OPDIV           12
#define     OPRESTO         13
#define     OPMENUN         14
#define     OPNOT           15
#define     OPATRIB         16
#define     OPENMOD         17
#define     NOP             18
#define     OPJUMP          19
#define     OPJF            20
#define     OPREAD          21
#define     OPWRITE         22
#define     PARAM           23

/* Definicao de constantes para os tipos de operandos de quadruplas */

#define     IDLEOPND        0
#define     VAROPND         1
#define     INTOPND         2
#define     REALOPND        3
#define     CHAROPND        4
#define     LOGICOPND       5
#define     CADOPND         6
#define     ROTOPND         7
#define     MODOPND         8

/*   Definicao de outras constantes   */

#define NCLASSHASH  23
#define VERDADE     1
#define FALSO       0
#define MAXDIMS     10

/*  Strings para nomes dos tipos de identificadores  */

char *nometipid[6] = {" ", "IDGLOB", "IDVAR", "IDFUNC", "IDPROC", "IDPROG"};

/*  Strings para nomes dos tipos de variaveis  */

char *nometipvar[5] = {"NAOVAR",
    "INTEIRO", "LOGICO", "REAL", "CARACTERE"
};

/* Strings para operadores de quadruplas */

char *nomeoperquad[21] = {"",
    "OR", "AND", "LT", "LE", "GT", "GE", "EQ", "NE", "MAIS",
    "MENOS", "MULT", "DIV", "RESTO", "MENUN", "NOT", "ATRIB",
    "OPENMOD", "NOP", "JUMP", "JF"
};

/*
    Strings para tipos de operandos de quadruplas
 */

char *nometipoopndquad[9] = {"IDLE",
    "VAR", "INT", "REAL", "CARAC", "LOGIC", "CADEIA", "ROTULO", "MODULO"
};

/*    Declaracoes para a tabela de simbolos     */

typedef struct celsimb celsimb;
typedef celsimb *simbolo;
typedef struct elemlistsimb elemlistsimb;
typedef elemlistsimb *pontelemlistsimb;
typedef elemlistsimb *listsimb;

struct celsimb {
    char *cadeia;
    int tid, tvar, tparam, ndims, dims[MAXDIMS+1], param, nparam;
    char inic, ref, array, parametro;
    listsimb listvardecl, listparam, listfunc;
    simbolo escopo, prox;
};

/*  Lista de simbolos    */

struct elemlistsimb {
    simbolo simb;
    pontelemlistsimb prox;
};

/*  Variaveis globais para a tabela de simbolos e analise semantica */

simbolo tabsimb[NCLASSHASH];
simbolo simb;
int tipocorrente;
simbolo escopo, escaux;
int declparam = FALSO;
listsimb pontvardecl, pontparam, pontfunc;

/*
    Prototipos das funcoes para a tabela de simbolos e analise semantica
 */

void InicTabSimb (void);
void ImprimeTabSimb (void);
simbolo InsereSimb (char *, int, int, simbolo);
int hash (char *);
simbolo ProcuraSimbParaInstanciar (char *, simbolo);
simbolo ProcuraSimbParaUsar (char *, simbolo);
void DeclaracaoRepetida (char *);
void TipoInadequado (char *);
void NaoDeclarado (char *);
void VerificaInicRef (void);
void Incompatibilidade (char *);
void Esperado(char*);
void NaoEsperado(char*);
void InsereListSimb(simbolo, listsimb);

/* Declaracoes para a estrutura do codigo intermediario */

typedef union atribopnd atribopnd;
typedef struct operando operando;
typedef struct celquad celquad;
typedef celquad *quadrupla;
typedef struct celmodhead celmodhead;
typedef celmodhead *modhead;

union atribopnd {
    simbolo simb; int valint; float valfloat;
    char valchar; char vallogic; char *valcad;
    quadrupla rotulo; modhead modulo;
};

struct operando {
    int tipo; atribopnd atr;
};

struct celquad {
    int num, oper; operando opnd1, opnd2, result;
    quadrupla prox;
};

struct celmodhead {
    simbolo modname; modhead prox;
    int modtip;
    quadrupla listquad;
};

/* Variaveis globais para o codigo intermediario */

quadrupla quadcorrente, quadaux;
modhead codintermed, modcorrente;
int oper, numquadcorrente;
operando opnd1, opnd2, result, opndaux;
int numtemp;
const operando opndidle = {IDLEOPND, 0};

/* Prototipos das funcoes para o codigo intermediario */

void InicCodIntermed (void);
void InicCodIntermMod (simbolo);
void ImprimeQuadruplas (void);
quadrupla GeraQuadrupla (int, operando, operando, operando);
simbolo NovaTemp (int);
void RenumQuadruplas (quadrupla, quadrupla);

/* Declaracoes para atributos das expressoes e variaveis */

typedef struct infoexpressao infoexpressao;
struct infoexpressao {
    int tipo;
    operando opnd;
};

typedef struct infovariavel infovariavel;
struct infovariavel {
    simbolo simb;
    operando opnd;
};

%}

/* Definicao do tipo de yylval e dos atributos dos nao terminais */

%union {
    char string[50];
    int atr, valor;
    float valreal;
    char carac;
    simbolo simb;
    infoexpressao infoexpr;
    infovariavel infovar;
    int nsubscr, nargs;
    quadrupla quad;
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

%type   <infovar>   Variable
%type   <infoexpr>  Expression  AuxExpr1  AuxExpr2
                    AuxExpr3    AuxExpr4   Term
                    Factor    FuncCall   WriteElem
%type   <nsubscr>   SubscrList
%type   <nargs>     ReadList   WriteList
%token  <string>    ID
%token  <valor>     INTCT
%token  <valreal>   FLOATCT
%token  <carac>     CHARCT
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

Prog        :	PROGRAM
                ID
                OPTRIP      {
                    printf ("program %s {{{\n\n", $2);
                    InicTabSimb();
                    InicCodIntermed();
                    numtemp = 0;
                    declparam = FALSO;
                    escopo = simb = InsereSimb ("##global", IDGLOB, NAOVAR, NULL);
                    InicCodIntermMod(simb);
                    pontvardecl = simb->listvardecl;
                    pontfunc = simb->listfunc;
                    opnd1.tipo = MODOPND;
                    opnd1.atr.modulo = modcorrente;
                    GeraQuadrupla (OPENMOD, opnd1, opndidle, opndidle);
                    
                }
                GlobDecls
                ModList
                MainMod
                CLTRIP      {
                    printf ("}}}\n");
                    VerificaInicRef ();
                    ImprimeTabSimb();
                    ImprimeQuadruplas();
                }
            ;
GlobDecls 	:   /* Empty */
            | 	GLOBAL
                OPBRACE     {printf ("global {\n"); tab++; tabular();}
                DeclList
                CLBRACE     {tab--; tabular (); printf ("}\n\n"); }
            ;
DeclList	:	Declaration
            |	DeclList    {tabular();}  Declaration
            ;
Declaration :	Type  ElemList  SCOLON {printf (";\n");}
            ;
Type		: 	INT     {printf ("int ");   tipocorrente = INTEIRO;}
            |	FLOAT   {printf ("float "); tipocorrente = REAL;}
            |	CHAR    {printf ("char ");  tipocorrente = CARACTERE;}
            |	LOGIC   {printf ("logic "); tipocorrente = LOGICO;}
            ;
ElemList    :	Elem
            |	ElemList
                COMMA   {printf (", "); }
                Elem
            ;
Elem        :   ID  { printf ("%s", $1);
                    if  (ProcuraSimbParaInstanciar ($1, escopo)  !=  NULL) DeclaracaoRepetida ($1);
                    else  { simb = InsereSimb ($1,  IDVAR,  tipocorrente, escopo);
                            simb->array = FALSO; }
                }
            |   ID   OPBRAK  { printf ("%s[", $1);
                    if  (ProcuraSimbParaInstanciar ($1, escopo)  !=  NULL) DeclaracaoRepetida ($1);
                    else  { simb = InsereSimb ($1,  IDVAR,  tipocorrente, escopo);
                            simb->array = VERDADE; simb->ndims = 0; }
                }  DimList  CLBRAK  {printf ("]");}
            ;
DimList     :  INTCT   { printf ("%d", $1);
                    if ($1 <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = $1;}
            |  DimList   COMMA   INTCT   { printf (", %d", $3);
                    if ($3 <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = $3;}
            ;
ModList	    :   /* Empty */
            |	ModList     Module
            ;
Module      :	ModHeader   ModBody { escopo = escopo->escopo; }
            ;
ModHeader   :   FuncHeader
            |   ProcHeader
            ;
FuncHeader	:   Type
                FUNCTION    {printf ("function ");}
                ID          {
                    printf ("%s", $4);
                    if  (ProcuraSimbParaInstanciar ($4, escopo)  !=  NULL) DeclaracaoRepetida ($4);
                    escopo = simb = InsereSimb ($4, IDFUNC, tipocorrente, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
                OPPAR       {printf ("\(");}
                FuncHd
            ;
FuncHd      :   CLPAR   {printf (")\n");}
            |   {declparam = VERDADE;}  ParamList   CLPAR   {printf (")\n"); declparam = FALSO;}
            ;
ProcHeader  :   PROCEDURE   {printf ("procedure ");}
                ID          {
                    printf ("%s", $3);
                    if  (ProcuraSimbParaInstanciar ($3, escopo)  !=  NULL) DeclaracaoRepetida ($3);
                    escopo = simb = InsereSimb ($3, IDPROC, NAOVAR, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
                OPPAR       {printf ("\(");}
                ProcEnd
            ;
ProcEnd     :   CLPAR       {printf (")\n"); }
            |   {declparam = VERDADE;}  ParamList   CLPAR   {printf (")\n"); declparam = FALSO;}
            ;
ParamList   :   Parameter
            |   ParamList
                COMMA       {printf (", ");}
                Parameter
            ;
Parameter   :   Type
                ID   {
                    printf ("%s", $2);
                    if  (ProcuraSimbParaInstanciar ($2, escopo)  !=  NULL) DeclaracaoRepetida ($2);
                    else  { simb = InsereSimb ($2,  IDVAR,  tipocorrente, escopo);
                        simb->array = FALSO; }
                }
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
MainMod     :   MAIN        {
                    printf ("main\n");
                    escopo = simb = InsereSimb("##main", IDPROG, NAOVAR, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
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
                Expression  {
                    if ($3.tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para comando if");
                    opndaux.tipo = ROTOPND;
                    $<quad>$ = 
                        GeraQuadrupla (OPJF, $3.opnd, opndidle, opndaux);
                }
                THEN        {printf (" then ");}
                Statement   {
                    $<quad>$ = quadcorrente;
                    $<quad>4->result.atr.rotulo =
                        GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
                }
                ElseStat    {
                    if ($<quad>8->prox != quadcorrente) {
                        quadaux = $<quad>8->prox;
                        $<quad>8->prox = quadaux->prox;
                        quadaux->prox = $<quad>8->prox->prox;
                        $<quad>8->prox->prox = quadaux;
                        RenumQuadruplas ($<quad>8, quadcorrente);
                    }
                }
            ;
ElseStat	:   /* Empty */
            |	ELSE  {
                    tabular(); printf ("else ");
                    opndaux.tipo = ROTOPND;
                    $<quad>$ =
                        GeraQuadrupla (OPJUMP, opndidle, opndidle, opndaux);
                }
                Statement   {
                    $<quad>2->result.atr.rotulo =
                    GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
                }
            ;
WhileStat   :	WHILE       {printf ("while ");}
                Expression  {
                    if ($3.tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para comando while");
                }
                DO          {printf (" do ");}
                Statement
            ;
RepeatStat  :	REPEAT      {printf ("repeat {\n"); tab++; tabular(); }
                Statement
                WHILE       {tab--; tabular(); printf ("} while ");}
                Expression  {
                    if ($6.tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para comando repeat");
                }
                SCOLON      {printf (";\n");}
            ;
ForStat	    :	FOR         {printf ("for ");}
                Variable    {
                    if ($3.simb->tvar != INTEIRO)
                        Incompatibilidade ("Cabecalho de tipo improprio para comando for");
                }
                INIT        {printf (" init ");}
                Expression   {
                    if ($7.tipo != INTEIRO)
                        Incompatibilidade ("Inicializacao impropria para cabecalho de comando for");
                    $3.simb->inic = $3.simb->ref = VERDADE;
                }
                WHILE       {printf (" while ");}
                Expression  {
                    if ($11.tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para comando while");
                }
                NEW         {printf (" new ");}
                Expression  {
                    if ($15.tipo != INTEIRO)
                        Incompatibilidade ("Atribuicao de tipo improprio para comando new");
                }
                DO          {printf (" do ");}
                Statement
            ;
ReadStat   	:   READ
                OPPAR       {printf ("read "); printf ("\(");}
                ReadList    {
                    opnd1.tipo = INTOPND;
                    opnd1.atr.valint = $4;
                    GeraQuadrupla (OPREAD, opnd1, opndidle, opndidle);
                } 
                CLPAR       {printf (")"); }
                SCOLON      {printf (";\n");}
            ;
ReadList    :   Variable  {
                    if  ($1.simb != NULL) $1.simb->inic = $1.simb->ref = VERDADE;
                    $$ = 1;
                    GeraQuadrupla (PARAM, $1.opnd, opndidle, opndidle);
                }
            |   ReadList  COMMA  {printf (", ");}  Variable  {
                    if  ($4.simb != NULL) $4.simb->inic = $4.simb->ref = VERDADE;
                        $$ = $1 + 1;
                        GeraQuadrupla (PARAM, $4.opnd, opndidle, opndidle);
                }
            ;
WriteStat   :	WRITE
                OPPAR       {printf ("write "); printf ("\(");}
                WriteList   {
                    opnd1.tipo = INTOPND;
                    opnd1.atr.valint = $4;
                    GeraQuadrupla (OPWRITE, opnd1, opndidle, opndidle);
                } 
                CLPAR       {printf (")"); }
                SCOLON      {printf (";\n");}
            ;
WriteList	:	WriteElem   {
                    $$ = 1;
                    GeraQuadrupla (PARAM, $1.opnd, opndidle, opndidle);
                }
            |	WriteList
                COMMA       {printf (", "); }
                WriteElem   {
                    $$ = $1 + 1;
                    GeraQuadrupla (PARAM, $4.opnd, opndidle, opndidle);
                }
            ;
WriteElem	:   STRING      {
                    printf ("%s", $1);
                    $$.opnd.tipo = CADOPND;
                    $$.opnd.atr.valcad = malloc (strlen($1) + 1);
                    strcpy ($$.opnd.atr.valcad, $1);
                }
            |	Expression
            ;
CallStat    :   CALL        {printf ("call ");}
                ID          {printf ("%s", $3);}
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
                SCOLON      {printf(";\n");
                    if(escopo->tid == IDFUNC)
                        Incompatibilidade("Funcao deveria retornar um valor");
                }
            |	RETURN      {printf ("return ");}
                Expression  {
                    if(escopo->tid == IDFUNC){
                        if($3.tipo != escopo->tvar)
                            Incompatibilidade ("Tipo retornado diferente do tipo esperado");
                    } else {
                        Incompatibilidade ("Retorno inesperado de um valor");
                    }
                }
                SCOLON      {printf(";\n");}
            ;
AssignStat  :   Variable  {
                    if  ($1.simb != NULL) $1.simb->inic = $1.simb->ref = VERDADE;
                }
                ASSIGN  {printf ("= ");}  Expression
                SCOLON  {
                    printf (";\n");
                    if ($1.simb != NULL){
                        if ((($1.simb->tvar == INTEIRO || $1.simb->tvar == CARACTERE) &&
                            ($5.tipo == REAL || $5.tipo == LOGICO)) ||
                            ($1.simb->tvar == REAL && $5.tipo == LOGICO) ||
                            ($1.simb->tvar == LOGICO && $5.tipo != LOGICO))
                            Incompatibilidade ("Lado direito de comando de atribuicao improprio");
                        GeraQuadrupla (OPATRIB, $5.opnd, opndidle, $1.opnd);
                    }
                }
            ;
ExprList	:	Expression
            |	ExprList
                COMMA                   {printf (", "); }
                Expression
            ;
Expression  :   AuxExpr1
            |   Expression  OR  {printf ("|| ");}   AuxExpr1  {
                    if ($1.tipo != LOGICO || $4.tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para operador or");
                    $$.tipo = LOGICO;
                    $$.opnd.tipo = VAROPND;
                    $$.opnd.atr.simb = NovaTemp ($$.tipo);
                    GeraQuadrupla (OPOR, $1.opnd, $4.opnd, $$.opnd);
                }
            ;
AuxExpr1    :   AuxExpr2
            |   AuxExpr1  AND  {printf ("&& ");}  AuxExpr2  {
                    if ($1.tipo != LOGICO || $4.tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para operador and");
                    $$.tipo = LOGICO;
                    $$.opnd.tipo = VAROPND;
                    $$.opnd.atr.simb = NovaTemp ($$.tipo);
                    GeraQuadrupla (OPAND, $1.opnd, $4.opnd, $$.opnd);
                }
            ;
AuxExpr2    :   AuxExpr3
            |   NOT  {printf ("! ");}  AuxExpr3  {
                    if ($3.tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para operador not");
                    $$.tipo = LOGICO;
                    $$.opnd.tipo = VAROPND;
                    $$.opnd.atr.simb = NovaTemp ($3.tipo);
                    GeraQuadrupla (OPNOT, $3.opnd, opndidle, $$.opnd);
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
                            if ($1.tipo != INTEIRO && $1.tipo != REAL && $1.tipo != CARACTERE || $4.tipo != INTEIRO && $4.tipo != REAL && $4.tipo != CARACTERE)
                                Incompatibilidade   ("Operando improprio para operador relacional");
                            break;
                        case EQ: case NE:
                            if (($1.tipo == LOGICO || $4.tipo == LOGICO) && $1.tipo != $4.tipo)
                                Incompatibilidade ("Operando improprio para operador relacional");
                            break;
                    }
                    $$.tipo = LOGICO;
                    $$.opnd.tipo = VAROPND;
                    $$.opnd.atr.simb = NovaTemp ($$.tipo);
                    switch ($2) {
                        case LT:
                            GeraQuadrupla (OPLT, $1.opnd, $4.opnd, $$.opnd);
                            break;
                        case LE:
                            GeraQuadrupla (OPLE, $1.opnd, $4.opnd, $$.opnd);
                            break;
                        case GT:
                            GeraQuadrupla (OPGT, $1.opnd, $4.opnd, $$.opnd);
                            break;
                        case GE:
                            GeraQuadrupla (OPGE, $1.opnd, $4.opnd, $$.opnd);
                            break;
                        case EQ:
                            GeraQuadrupla (OPEQ, $1.opnd, $4.opnd, $$.opnd);
                            break;
                        case NE:
                            GeraQuadrupla (OPNE, $1.opnd, $4.opnd, $$.opnd);
                            break;
                    }
                }
            ;
AuxExpr4    :   Term
            |   AuxExpr4  ADOP  {
                    switch ($2) {
                        case PLUS: printf ("+ "); break;
                        case MINUS: printf ("- "); break;
                    }
                }  Term  {
                        if ($1.tipo != INTEIRO && $1.tipo != REAL && $1.tipo != CARACTERE || $4.tipo != INTEIRO && $4.tipo!=REAL && $4.tipo!=CARACTERE)
                            Incompatibilidade ("Operando improprio para operador aritmetico");
                        if ($1.tipo == REAL || $4.tipo == REAL) $$.tipo = REAL;
                        else $$.tipo = INTEIRO;
                        $$.opnd.tipo = VAROPND;
                        $$.opnd.atr.simb = NovaTemp ($$.tipo);
                        if ($2 == PLUS)
                            GeraQuadrupla (OPMAIS, $1.opnd, $4.opnd, $$.opnd);
                        else  GeraQuadrupla (OPMENOS, $1.opnd, $4.opnd, $$.opnd);
                }
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
                            if ($1.tipo != INTEIRO && $1.tipo != REAL && $1.tipo != CARACTERE || $4.tipo != INTEIRO && $4.tipo!=REAL && $4.tipo!=CARACTERE)
                                Incompatibilidade ("Operando improprio para operador aritmetico");
                            if ($1.tipo == REAL || $4.tipo == REAL) $$.tipo = REAL;
                            else $$.tipo = INTEIRO;
                            $$.opnd.tipo = VAROPND;
                            $$.opnd.atr.simb = NovaTemp ($$.tipo);
                            if ($2 == TIMES)
                                GeraQuadrupla   (OPMULTIP, $1.opnd, $4.opnd, $$.opnd);
                            else  GeraQuadrupla  (OPDIV, $1.opnd, $4.opnd, $$.opnd);
                            break;
                        case MODULE:
                            if ($1.tipo != INTEIRO && $1.tipo != CARACTERE  ||  $4.tipo != INTEIRO && $4.tipo != CARACTERE)
                                Incompatibilidade ("Operando improprio para operador resto");
                            $$.tipo = INTEIRO;
                            $$.opnd.tipo = VAROPND;
                            $$.opnd.atr.simb = NovaTemp ($$.tipo);
                            GeraQuadrupla (OPRESTO, $1.opnd, $4.opnd, $$.opnd);
                            break;
                    }
                }
            ;
Factor      :   Variable  {
                    if  ($1.simb != NULL)  {
                        $1.simb->ref  =  VERDADE;
                        $$.tipo = $1.simb->tvar;
                        $$.opnd = $1.opnd;
                    }
                }
            |   INTCT  {
                    printf ("%d ", $1); $$.tipo = INTEIRO;
                    $$.opnd.tipo = INTOPND;
                    $$.opnd.atr.valint = $1;
                }
            |   FLOATCT  {
                    printf ("%g ", $1); $$.tipo = REAL;
                    $$.opnd.tipo = REALOPND;
                    $$.opnd.atr.valfloat = $1;
                }
            |   CHARCT  {
                    printf ("\'%c\' ", $1); $$.tipo = CARACTERE;
                    $$.opnd.tipo = CHAROPND;
                    $$.opnd.atr.valchar = $1;
                }
            |   TRUE  {
                    printf ("true "); $$.tipo = LOGICO;
                    $$.opnd.tipo = LOGICOPND;
                    $$.opnd.atr.vallogic = 1;
                }
            |   FALSE  {
                    printf ("false "); $$.tipo = LOGICO;
                    $$.opnd.tipo = LOGICOPND;
                    $$.opnd.atr.vallogic = 0;
                }
            |   NEG  {printf ("~ ");}  Factor {
                    if ($3.tipo != INTEIRO && $3.tipo != REAL && $3.tipo != CARACTERE)
                        Incompatibilidade  ("Operando improprio para menos unario");
                    if ($3.tipo == REAL) $$.tipo = REAL;
                    else $$.tipo = INTEIRO;
                    $$.opnd.tipo = VAROPND;
                    $$.opnd.atr.simb = NovaTemp ($$.tipo);
                    GeraQuadrupla  (OPMENUN, $3.opnd, opndidle, $$.opnd);
                }
            |   OPPAR   {printf ("( ");}  Expression  CLPAR {
                    printf (") "); $$.tipo = $3.tipo;
                    $$.opnd = $3.opnd;
                }
            |   FuncCall
            ;
Variable    :   ID  {
                    printf ("%s ", $1);
                    simb = ProcuraSimbParaUsar ($1, escopo);
                    if (simb == NULL)
                        NaoDeclarado ($1);
                    else if (simb->tid != IDVAR)
                        TipoInadequado ($1);
                    $$.simb = simb;
                    if ($$.simb != NULL)
                        if ($$.simb->array == VERDADE)
                            Esperado ("Subscrito\(s)");
                        $$.opnd.tipo = VAROPND;
                        $$.opnd.atr.simb = $$.simb;
                }
            |   ID  OPBRAK  {
                    printf ("%s [ ", $1);
                    simb = ProcuraSimbParaUsar ($1, escopo);
                    if (simb == NULL)
                        NaoDeclarado ($1);
                    else if (simb->tid != IDVAR)
                        TipoInadequado ($1);
                    $<simb>$ = simb;
                }  SubscrList
                CLBRAK  {
                    printf ("] "); $$.simb = $<simb>3;
                    if ($$.simb != NULL)
                        if ($$.simb->array == FALSO)
                            NaoEsperado ("Subscrito\(s)");
                        else if ($$.simb->ndims != $4)
                            Incompatibilidade ("Numero de subscritos incompativel com declaracao");
                }
            ;
SubscrList  :   AuxExpr4  {
                    if ($1.tipo != INTEIRO && $1.tipo != CARACTERE)
                        Incompatibilidade ("Tipo inadequado para subscrito");
                    $$ = 1;
                }
            |   SubscrList  COMMA  {printf (", ");}  AuxExpr4  {
                    if ($4.tipo != INTEIRO && $4.tipo != CARACTERE)
                        Incompatibilidade ("Tipo inadequado para subscrito");
                    $$ = $1 + 1;
                }
            ;
FuncCall    :   ID  {
                    printf ("%s", $1);
                    simb = ProcuraSimbParaUsar ($1, escopo);
                    if (simb == NULL) NaoDeclarado ($1);
                    else if (simb->tid != IDFUNC) TipoInadequado ($1);
                    $<simb>$ = simb;
		        }
                OPPAR       {printf ("\(");}
                FuncTerm {
                    $$.tipo = $<simb>2->tvar;
                }
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

simbolo ProcuraSimbParaInstanciar (char *cadeia, simbolo escopo) {
    simbolo s; int i;
    i = hash (cadeia);
    for (s = tabsimb[i]; (s!=NULL) && (strcmp(cadeia, s->cadeia) || strcmp(escopo->cadeia, s->escopo->cadeia)); s = s->prox);
    return s;
}

simbolo ProcuraSimbParaUsar (char *cadeia, simbolo escopo) {
    simbolo s; int i;
    i = hash (cadeia);
    for (s = tabsimb[i]; (s!=NULL) && (strcmp(cadeia, s->cadeia) || strcmp(escopo->cadeia, s->escopo->cadeia)); s = s->prox);
    if(s == NULL && strcmp(escopo->cadeia, "##global")) return ProcuraSimbParaUsar(cadeia, escopo->escopo);
    return s;
}

/*
    InsereSimb (cadeia, tid, tvar, escopo): Insere cadeia na tabela de
    simbolos, com tid como tipo de identificador e com tvar como
    tipo de variavel; Retorna um ponteiro para a celula inserida
 */

simbolo InsereSimb (char *cadeia, int tid, int tvar, simbolo escopo) {
    int i; simbolo aux, s;
    i = hash (cadeia); aux = tabsimb[i];
    s = tabsimb[i] = (simbolo) malloc (sizeof (celsimb));
    s->cadeia = (char*) malloc ((strlen(cadeia)+1) * sizeof(char));
    strcpy (s->cadeia, cadeia);
    s->tid = tid;       s->tvar = tvar;
    s->inic = FALSO;    s->ref = FALSO;
    s->prox = aux;  s->escopo = escopo;
    if (declparam) {
        s->inic = s->ref = s->param = VERDADE;
        if (s->tid == IDVAR)
            InsereListSimb (s, &pontparam);
        s->escopo->nparam++;
    }
    else {
        s->inic = s->ref = s->param = FALSO;
        if (s->tid == IDVAR)
            InsereListSimb (s, &pontvardecl);
    }
    if (tid == IDGLOB || tid == IDFUNC) {
        s->listvardecl = (elemlistsimb *) 
            malloc  (sizeof (elemlistsimb));
        s->listvardecl->prox = NULL;
    }
    if (tid == IDGLOB) {
        s->listfunc = (elemlistsimb *) 
            malloc  (sizeof (elemlistsimb));
        s->listfunc->prox = NULL;
    }
    if (tid == IDFUNC) {
        s->listparam = (elemlistsimb *) 
            malloc  (sizeof (elemlistsimb));
        s->listparam->prox = NULL;
        s->nparam = 0;
        InsereListSimb (s, &pontfunc);
    }
    return s;
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
    printf ("\n\n  =========================\n");
    printf     ("  = TABELA  DE  SIMBOLOS: =\n");
    printf     ("  =========================\n");
    for (i = 0; i < NCLASSHASH; i++)
        if (tabsimb[i]) {
            printf ("\nClasse %d:\n", i);
            for (s = tabsimb[i]; s!=NULL; s = s->prox){
                printf ("  (%s, %s", s->cadeia,  nometipid[s->tid]);
                if (s->tid == IDVAR){
                    printf (", %s, %d, %d",
                        nometipvar[s->tvar], s->inic, s->ref);
                    if (s->escopo != NULL)
                        printf(", %s", s->escopo->cadeia);
                    if (s->array == VERDADE) {
                        int j;
                        printf (", EH ARRAY\n    ndims = %d, dimensoes:", s->ndims);
                        for (j = 1; j <= s->ndims; j++)
                            printf (" %d", s->dims[j]);
                    }
                } else {
                    printf (", %s, %d, %d",
                        nometipvar[s->tvar], s->inic, s->ref);
                    if (s->escopo != NULL)
                        printf(", %s", s->escopo->cadeia);
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

void InsereListSimb(simbolo s, listsimb p){
    // Action being done outside of its scope (NOTE: encapsulate it later)
}

/* Funcoes para o codigo intermediario */

void InicCodIntermed () {
    modcorrente = codintermed = malloc (sizeof (celmodhead));
    modcorrente->listquad = NULL;
    modcorrente->prox = NULL;
}

void InicCodIntermMod (simbolo simb) {
    modcorrente->prox = malloc (sizeof (celmodhead));
    modcorrente = modcorrente->prox;
    modcorrente->prox = NULL;
    modcorrente->modname = simb;
    modcorrente->modtip = simb->tid;
    modcorrente->listquad = malloc (sizeof (celquad));
    quadcorrente = modcorrente->listquad;
    quadcorrente->prox = NULL;
    numquadcorrente = 0;
    quadcorrente->num = numquadcorrente;
}

quadrupla GeraQuadrupla (int oper, operando opnd1, operando opnd2,
    operando result) {
    quadcorrente->prox = malloc (sizeof (celquad));
    quadcorrente = quadcorrente->prox;
    quadcorrente->oper = oper;
    quadcorrente->opnd1 = opnd1;
    quadcorrente->opnd2 = opnd2;
    quadcorrente->result = result;
    quadcorrente->prox = NULL;
    numquadcorrente ++;
    quadcorrente->num = numquadcorrente;
    return quadcorrente;
}

simbolo NovaTemp (int tip) {
    simbolo simb; int temp, i, j;
    char nometemp[10] = "##", s[10] = {0};

    numtemp ++; temp = numtemp;
    for (i = 0; temp > 0; temp /= 10, i++)
        s[i] = temp % 10 + '0';
    i --;
    for (j = 0; j <= i; j++)
        nometemp[2+i-j] = s[j];
    simb = InsereSimb (nometemp, IDVAR, tip, escopo); /* NOTE inserido escopo local */
    simb->inic = simb->ref = VERDADE;
    simb->array = FALSO;
    return simb;
}

void ImprimeQuadruplas () {
    modhead p;
    quadrupla q;
    for (p = codintermed->prox; p != NULL; p = p->prox) {
        printf ("\n\nQuadruplas do modulo %s:\n", p->modname->cadeia);
        for (q = p->listquad->prox; q != NULL; q = q->prox) {
            printf ("\n\t%4d) %s", q->num, nomeoperquad[q->oper]);
            printf (", (%s", nometipoopndquad[q->opnd1.tipo]);
            switch (q->opnd1.tipo) {
                case IDLEOPND: break;
                case VAROPND: printf (", %s", q->opnd1.atr.simb->cadeia); break;
                case INTOPND: printf (", %d", q->opnd1.atr.valint); break;
                case REALOPND: printf (", %g", q->opnd1.atr.valfloat); break;
                case CHAROPND: printf (", %c", q->opnd1.atr.valchar); break;
                case LOGICOPND: printf (", %d", q->opnd1.atr.vallogic); break;
                case CADOPND: printf (", %s", q->opnd1.atr.valcad); break;
                case ROTOPND: printf (", %d", q->opnd1.atr.rotulo->num); break;
                case MODOPND: printf(", %s", q->opnd1.atr.modulo->modname->cadeia);
                    break;
            }
            printf (")");
            printf (", (%s", nometipoopndquad[q->opnd2.tipo]);
            switch (q->opnd2.tipo) {
                case IDLEOPND: break;
                case VAROPND: printf (", %s", q->opnd2.atr.simb->cadeia); break;
                case INTOPND: printf (", %d", q->opnd2.atr.valint); break;
                case REALOPND: printf (", %g", q->opnd2.atr.valfloat); break;
                case CHAROPND: printf (", %c", q->opnd2.atr.valchar); break;
                case LOGICOPND: printf (", %d", q->opnd2.atr.vallogic); break;
                case CADOPND: printf (", %s", q->opnd2.atr.valcad); break;
                case ROTOPND: printf (", %d", q->opnd2.atr.rotulo->num); break;
                case MODOPND: printf(", %s", q->opnd2.atr.modulo->modname->cadeia);
                    break;
            }
            printf (")");
            printf (", (%s", nometipoopndquad[q->result.tipo]);
            switch (q->result.tipo) {
                case IDLEOPND: break;
                case VAROPND: printf (", %s", q->result.atr.simb->cadeia); break;
                case INTOPND: printf (", %d", q->result.atr.valint); break;
                case REALOPND: printf (", %g", q->result.atr.valfloat); break;
                case CHAROPND: printf (", %c", q->result.atr.valchar); break;
                case LOGICOPND: printf (", %d", q->result.atr.vallogic); break;
                case CADOPND: printf (", %s", q->result.atr.valcad); break;
                case ROTOPND: printf (", %d", q->result.atr.rotulo->num); break;
                case MODOPND: printf(", %s", q->result.atr.modulo->modname->cadeia);
                    break;
            }
            printf (")");
        }
    }
   printf ("\n");
}

void RenumQuadruplas (quadrupla quad1, quadrupla quad2) {
    quadrupla q; int nquad;
    for (q = quad1->prox, nquad = quad1->num; q != quad2; q = q->prox) {
      nquad++;
        q->num = nquad;
    }
}
