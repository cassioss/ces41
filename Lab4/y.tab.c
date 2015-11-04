#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif
#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING (yyerrflag!=0)
#define YYPREFIX "yy"
#line 2 "tsimb022015.y"
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

#line 90 "tsimb022015.y"
typedef union {
	char cadeia[50];
	int atr, valint;
	float valreal;
	char carac;
	simbolo simb;
	int tipoexpr;
    int nsubscr;
} YYSTYPE;
#line 107 "y.tab.c"
#define ID 257
#define CHARCT 258
#define INTCT 259
#define FLOATCT 260
#define STRING 261
#define OR 262
#define AND 263
#define NOT 264
#define RELOP 265
#define ADOP 266
#define MULTOP 267
#define NEG 268
#define OPPAR 269
#define CLPAR 270
#define OPBRAK 271
#define CLBRAK 272
#define OPBRACE 273
#define CLBRACE 274
#define COMMA 275
#define SCOLON 276
#define ASSIGN 277
#define CHAR 278
#define DO 279
#define ELSE 280
#define FALSE 281
#define FLOAT 282
#define IF 283
#define INT 284
#define LOCAL 285
#define LOGIC 286
#define PROGRAM 287
#define READ 288
#define STATEMENTS 289
#define THEN 290
#define TRUE 291
#define WHILE 292
#define WRITE 293
#define INVAL 294
#define YYERRCODE 256
short yylhs[] = {                                        -1,
   10,   12,    0,   11,   15,   11,   14,   14,   16,   17,
   17,   17,   17,   18,   20,   18,   19,   22,   19,   21,
   21,   24,   13,   26,   23,   25,   25,   27,   27,   27,
   27,   27,   27,   33,   34,   28,   35,   36,   35,   37,
   38,   29,   40,   30,   39,   41,   39,   43,   31,   42,
   45,   42,   44,   44,   46,   47,   32,    2,   48,    2,
    3,   49,    3,    4,   50,    4,    5,   51,    5,    6,
   52,    6,    7,   53,    7,    8,    8,    8,    8,    8,
    8,   54,    8,   55,    8,    1,   56,    1,    9,   57,
    9,
};
short yylen[] = {                                         2,
    0,    0,    6,    0,    0,    5,    1,    2,    3,    1,
    1,    1,    1,    1,    0,    4,    1,    0,    5,    1,
    3,    0,    3,    0,    4,    0,    2,    1,    1,    1,
    1,    1,    1,    0,    0,    7,    0,    0,    3,    0,
    0,    6,    0,    6,    1,    0,    4,    0,    6,    1,
    0,    4,    1,    1,    0,    0,    6,    1,    0,    4,
    1,    0,    4,    1,    0,    3,    1,    0,    4,    1,
    0,    4,    1,    0,    4,    1,    1,    1,    1,    1,
    1,    0,    3,    0,    4,    1,    0,    5,    1,    0,
    4,
};
short yydefred[] = {                                      1,
    0,    0,    0,    2,    0,    0,    0,    5,   22,    3,
    0,    0,   12,   11,   10,   13,    0,    7,    0,   24,
   23,    6,    8,    0,    0,   14,   26,   18,   15,    9,
    0,    0,    0,    0,   25,   34,    0,   40,    0,   55,
   28,   27,   29,   30,   31,   32,   33,   20,    0,   16,
   87,    0,   43,    0,   48,    0,   19,    0,    0,   79,
   77,   78,   65,   82,   84,   81,   80,   76,    0,    0,
   61,   64,    0,    0,   73,    0,    0,    0,   56,   21,
    0,    0,    0,    0,    0,   59,   35,   62,   68,   71,
   74,   45,    0,   41,   53,    0,    0,   50,    0,   88,
   90,   66,   83,    0,    0,    0,    0,    0,    0,    0,
    0,   46,    0,    0,   51,    0,    0,   85,    0,    0,
   63,    0,    0,   75,   44,    0,   42,   49,    0,   57,
    0,   38,   36,   47,   52,    0,   39,
};
short yydgoto[] = {                                       1,
   68,   96,   70,   71,   72,   73,   74,   75,   82,    2,
    7,    5,   10,   17,   11,   18,   19,   25,   26,   33,
   49,   32,   41,   12,   31,   27,   42,   43,   44,   45,
   46,   47,   52,  106,  133,  136,   54,  113,   93,   76,
  126,   97,   78,   98,  129,   56,   99,  105,  107,   83,
  108,  109,  110,   84,   85,   59,  117,
};
short yysindex[] = {                                      0,
    0, -261, -240,    0, -234, -243, -227,    0,    0,    0,
 -270, -202,    0,    0,    0,    0,  -72,    0, -176,    0,
    0,    0,    0, -185, -203,    0,    0,    0,    0,    0,
 -254, -167, -176, -177,    0,    0, -163,    0, -158,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -262,    0,
    0, -190,    0, -190,    0, -175,    0, -141, -161,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -247, -138,
    0,    0, -150, -146,    0, -130, -255, -204,    0,    0,
 -131, -192, -161, -161, -190,    0,    0,    0,    0,    0,
    0,    0, -242,    0,    0, -123, -212,    0, -190,    0,
    0,    0,    0, -218, -190, -246, -190, -161, -161, -161,
 -136,    0, -246, -133,    0, -253, -161,    0, -138, -128,
    0, -131, -146,    0,    0, -130,    0,    0, -204,    0,
 -131,    0,    0,    0,    0, -246,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0, -145,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -142,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -153,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -186,
    0,    0,  -97, -134,    0,    0,    0,    0,    0,    0,
 -187,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -209,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -81, -252,
    0,  -79, -115,    0,    0,    0,    0,    0,    0,    0,
 -172,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
  -31,  -50,   41,   42,   70,  -58,   45,  -78,    0,    0,
    0,    0,    0,    0,    0,  141,    0,    0,  126,    0,
    0,    0,  150,    0,    0,    0,  -88,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   34,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 214
short yytable[] = {                                      40,
   81,   69,   34,   77,   37,  103,   86,   13,   86,   57,
   34,   14,   58,   15,   86,   16,    4,  120,   20,   35,
   37,   37,  130,   94,  127,    3,   20,  111,   36,    8,
   37,  124,  112,   37,  104,   37,   36,   38,   39,   37,
   37,   37,   87,   86,   92,   38,   39,  137,  116,  122,
    6,  118,   34,   60,   61,   62,   95,  114,  131,   63,
   54,    9,  115,   64,   65,   54,   34,   60,   61,   62,
   20,   29,   30,   63,   40,   58,   66,   64,   65,  100,
   24,   40,  101,   58,   89,   28,   67,   89,   58,   58,
   66,   48,   58,   51,  134,   34,   60,   61,   62,   91,
   67,   79,   91,   58,   40,   53,   64,   65,   86,   86,
   55,   86,   86,   86,   89,   90,   86,   80,   86,   66,
   91,   86,   86,   86,   88,   86,   34,   70,   70,   67,
   70,   70,   17,   17,   90,   70,   86,   70,   86,  125,
   70,   70,  128,    4,   70,  119,   72,   72,  121,   72,
   72,  132,  102,  123,   72,   70,   72,   23,   50,   72,
   72,   21,  135,   72,   67,   67,    0,    0,    0,    0,
    0,    0,   67,    0,   72,    0,    0,   67,   67,    0,
   60,   67,   69,   69,    0,    0,    0,    0,   60,    0,
   69,    0,   67,   60,   60,   69,   69,   60,    0,   69,
    0,   22,    0,    0,    0,   13,    0,    0,   60,   14,
   69,   15,    0,   16,
};
short yycheck[] = {                                      31,
   59,   52,  257,   54,  257,   84,  262,  278,  262,  272,
  257,  282,  275,  284,  262,  286,  257,  106,  273,  274,
  273,  274,  276,  279,  113,  287,  273,  270,  283,  273,
  283,  110,  275,  288,   85,  288,  283,  292,  293,  292,
  293,  288,  290,  262,   76,  292,  293,  136,   99,  108,
  285,  270,  257,  258,  259,  260,  261,  270,  117,  264,
  270,  289,  275,  268,  269,  275,  257,  258,  259,  260,
  273,  275,  276,  264,  106,  262,  281,  268,  269,  272,
  257,  113,  275,  270,  272,  271,  291,  275,  275,  276,
  281,  259,  279,  271,  126,  257,  258,  259,  260,  272,
  291,  277,  275,  290,  136,  269,  268,  269,  262,  263,
  269,  265,  266,  267,  265,  266,  270,  259,  272,  281,
  267,  275,  276,  277,  263,  279,  257,  262,  263,  291,
  265,  266,  275,  276,  266,  270,  290,  272,  262,  276,
  275,  276,  276,  289,  279,  105,  262,  263,  107,  265,
  266,  280,   83,  109,  270,  290,  272,   17,   33,  275,
  276,   12,  129,  279,  262,  263,   -1,   -1,   -1,   -1,
   -1,   -1,  270,   -1,  290,   -1,   -1,  275,  276,   -1,
  262,  279,  262,  263,   -1,   -1,   -1,   -1,  270,   -1,
  270,   -1,  290,  275,  276,  275,  276,  279,   -1,  279,
   -1,  274,   -1,   -1,   -1,  278,   -1,   -1,  290,  282,
  290,  284,   -1,  286,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 294
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","CHARCT","INTCT","FLOATCT",
"STRING","OR","AND","NOT","RELOP","ADOP","MULTOP","NEG","OPPAR","CLPAR",
"OPBRAK","CLBRAK","OPBRACE","CLBRACE","COMMA","SCOLON","ASSIGN","CHAR","DO",
"ELSE","FALSE","FLOAT","IF","INT","LOCAL","LOGIC","PROGRAM","READ","STATEMENTS",
"THEN","TRUE","WHILE","WRITE","INVAL",
};
char *yyrule[] = {
"$accept : Prog",
"$$1 :",
"$$2 :",
"Prog : $$1 PROGRAM ID $$2 LocDecls Stats",
"LocDecls :",
"$$3 :",
"LocDecls : LOCAL OPBRACE $$3 DeclList CLBRACE",
"DeclList : Declaration",
"DeclList : DeclList Declaration",
"Declaration : Type ElemList SCOLON",
"Type : INT",
"Type : FLOAT",
"Type : CHAR",
"Type : LOGIC",
"ElemList : Elem",
"$$4 :",
"ElemList : ElemList COMMA $$4 Elem",
"Elem : ID",
"$$5 :",
"Elem : ID OPBRAK $$5 DimList CLBRAK",
"DimList : INTCT",
"DimList : DimList COMMA INTCT",
"$$6 :",
"Stats : STATEMENTS $$6 CompStat",
"$$7 :",
"CompStat : OPBRACE $$7 StatList CLBRACE",
"StatList :",
"StatList : StatList Statement",
"Statement : CompStat",
"Statement : IfStat",
"Statement : WhileStat",
"Statement : ReadStat",
"Statement : WriteStat",
"Statement : AssignStat",
"$$8 :",
"$$9 :",
"IfStat : IF $$8 Expression THEN $$9 Statement ElseStat",
"ElseStat :",
"$$10 :",
"ElseStat : ELSE $$10 Statement",
"$$11 :",
"$$12 :",
"WhileStat : WHILE $$11 Expression DO $$12 Statement",
"$$13 :",
"ReadStat : READ OPPAR $$13 ReadList CLPAR SCOLON",
"ReadList : Variable",
"$$14 :",
"ReadList : ReadList COMMA $$14 Variable",
"$$15 :",
"WriteStat : WRITE OPPAR $$15 WriteList CLPAR SCOLON",
"WriteList : WriteElem",
"$$16 :",
"WriteList : WriteList COMMA $$16 WriteElem",
"WriteElem : STRING",
"WriteElem : Expression",
"$$17 :",
"$$18 :",
"AssignStat : Variable $$17 ASSIGN $$18 Expression SCOLON",
"Expression : AuxExpr1",
"$$19 :",
"Expression : Expression OR $$19 AuxExpr1",
"AuxExpr1 : AuxExpr2",
"$$20 :",
"AuxExpr1 : AuxExpr1 AND $$20 AuxExpr2",
"AuxExpr2 : AuxExpr3",
"$$21 :",
"AuxExpr2 : NOT $$21 AuxExpr3",
"AuxExpr3 : AuxExpr4",
"$$22 :",
"AuxExpr3 : AuxExpr4 RELOP $$22 AuxExpr4",
"AuxExpr4 : Term",
"$$23 :",
"AuxExpr4 : AuxExpr4 ADOP $$23 Term",
"Term : Factor",
"$$24 :",
"Term : Term MULTOP $$24 Factor",
"Factor : Variable",
"Factor : INTCT",
"Factor : FLOATCT",
"Factor : CHARCT",
"Factor : TRUE",
"Factor : FALSE",
"$$25 :",
"Factor : NEG $$25 Factor",
"$$26 :",
"Factor : OPPAR $$26 Expression CLPAR",
"Variable : ID",
"$$27 :",
"Variable : ID OPBRAK $$27 SubscrList CLBRAK",
"SubscrList : AuxExpr4",
"$$28 :",
"SubscrList : SubscrList COMMA $$28 AuxExpr4",
};
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
#line 384 "tsimb022015.y"

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
#line 542 "y.tab.c"
#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 150 "tsimb022015.y"
{InicTabSimb ();}
break;
case 2:
#line 150 "tsimb022015.y"
{
                    printf ("program %s\n", yyvsp[0].cadeia); InsereSimb (yyvsp[0].cadeia, IDPROG, NAOVAR);
                }
break;
case 3:
#line 153 "tsimb022015.y"
{
                    VerificaInicRef ();
                    ImprimeTabSimb ();
                }
break;
case 5:
#line 159 "tsimb022015.y"
{printf ("local {\n");}
break;
case 6:
#line 160 "tsimb022015.y"
{printf ("}\n");}
break;
case 9:
#line 164 "tsimb022015.y"
{printf (";\n");}
break;
case 10:
#line 166 "tsimb022015.y"
{printf ("int "); tipocorrente = INTEIRO;}
break;
case 11:
#line 167 "tsimb022015.y"
{printf ("float "); tipocorrente = REAL;}
break;
case 12:
#line 168 "tsimb022015.y"
{printf ("char "); tipocorrente = CARACTERE;}
break;
case 13:
#line 169 "tsimb022015.y"
{printf ("logic "); tipocorrente = LOGICO;}
break;
case 15:
#line 172 "tsimb022015.y"
{printf (", ");}
break;
case 17:
#line 174 "tsimb022015.y"
{ printf ("%s ", yyvsp[0].cadeia);
                    if  (ProcuraSimb (yyvsp[0].cadeia)  !=  NULL) DeclaracaoRepetida (yyvsp[0].cadeia);
                    else  { simb = InsereSimb (yyvsp[0].cadeia,  IDVAR,  tipocorrente);
                            simb->array = FALSO; }
                }
break;
case 18:
#line 179 "tsimb022015.y"
{ printf ("%s [ ", yyvsp[-1].cadeia);
                    if  (ProcuraSimb (yyvsp[-1].cadeia)  !=  NULL) DeclaracaoRepetida (yyvsp[-1].cadeia);
                    else  { simb = InsereSimb (yyvsp[-1].cadeia,  IDVAR,  tipocorrente);
                            simb->array = VERDADE; simb->ndims = 0; }
                }
break;
case 19:
#line 183 "tsimb022015.y"
{printf ("] ");}
break;
case 20:
#line 185 "tsimb022015.y"
{ printf ("%d ", yyvsp[0].valint);
                    if (yyvsp[0].valint <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = yyvsp[0].valint;}
break;
case 21:
#line 188 "tsimb022015.y"
{ printf (", %d ", yyvsp[0].valint);
                    if (yyvsp[0].valint <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = yyvsp[0].valint;}
break;
case 22:
#line 192 "tsimb022015.y"
{printf ("statements ");}
break;
case 24:
#line 194 "tsimb022015.y"
{printf ("{\n");}
break;
case 25:
#line 194 "tsimb022015.y"
{printf ("}\n");}
break;
case 34:
#line 206 "tsimb022015.y"
{printf ("if ");}
break;
case 35:
#line 207 "tsimb022015.y"
{printf ("then\n");}
break;
case 38:
#line 210 "tsimb022015.y"
{printf ("else\n");}
break;
case 40:
#line 212 "tsimb022015.y"
{printf ("while ");}
break;
case 41:
#line 213 "tsimb022015.y"
{printf ("do\n");}
break;
case 43:
#line 215 "tsimb022015.y"
{printf ("read ( ");}
break;
case 44:
#line 216 "tsimb022015.y"
{printf (") ;\n");}
break;
case 46:
#line 219 "tsimb022015.y"
{printf (", ");}
break;
case 48:
#line 221 "tsimb022015.y"
{printf ("write ( ");}
break;
case 49:
#line 222 "tsimb022015.y"
{printf (") ;\n");}
break;
case 51:
#line 225 "tsimb022015.y"
{printf (", ");}
break;
case 53:
#line 227 "tsimb022015.y"
{printf ("\"%s\" ", yyvsp[0].cadeia);}
break;
case 55:
#line 230 "tsimb022015.y"
{
                    if  (yyvsp[0].simb != NULL) yyvsp[0].simb->inic = yyvsp[0].simb->ref = VERDADE;
                }
break;
case 56:
#line 233 "tsimb022015.y"
{printf ("= ");}
break;
case 57:
#line 234 "tsimb022015.y"
{
                    printf (";\n");
                    if (yyvsp[-5].simb != NULL)
                        if (((yyvsp[-5].simb->tvar == INTEIRO || yyvsp[-5].simb->tvar == CARACTERE) &&
                            (yyvsp[-1].tipoexpr == REAL || yyvsp[-1].tipoexpr == LOGICO)) ||
                            (yyvsp[-5].simb->tvar == REAL && yyvsp[-1].tipoexpr == LOGICO) ||
                            (yyvsp[-5].simb->tvar == LOGICO && yyvsp[-1].tipoexpr != LOGICO))
                            Incompatibilidade ("Lado direito de comando de atribuicao improprio");
                }
break;
case 59:
#line 245 "tsimb022015.y"
{printf ("|| ");}
break;
case 60:
#line 245 "tsimb022015.y"
{
                    if (yyvsp[-3].tipoexpr != LOGICO || yyvsp[0].tipoexpr != LOGICO)
                        Incompatibilidade ("Operando improprio para operador or");
                    yyval.tipoexpr = LOGICO;
                }
break;
case 62:
#line 252 "tsimb022015.y"
{printf ("&& ");}
break;
case 63:
#line 252 "tsimb022015.y"
{
                    if (yyvsp[-3].tipoexpr != LOGICO || yyvsp[0].tipoexpr != LOGICO)
                        Incompatibilidade ("Operando improprio para operador and");
                    yyval.tipoexpr = LOGICO;
                }
break;
case 65:
#line 259 "tsimb022015.y"
{printf ("! ");}
break;
case 66:
#line 259 "tsimb022015.y"
{
                    if (yyvsp[0].tipoexpr != LOGICO)
                        Incompatibilidade ("Operando improprio para operador not");
                    yyval.tipoexpr = LOGICO;
                }
break;
case 68:
#line 266 "tsimb022015.y"
{
                    switch (yyvsp[0].atr) {
                        case LT: printf ("< "); break;
                        case LE: printf ("<= "); break;
                        case EQ: printf ("== "); break;
                        case NE: printf ("!= "); break;
                        case GT: printf ("> "); break;
                        case GE: printf (">= "); break;
                    }
                }
break;
case 69:
#line 275 "tsimb022015.y"
{
                    switch (yyvsp[-2].atr) {
                        case LT: case LE: case GT: case GE:
                            if (yyvsp[-3].tipoexpr != INTEIRO && yyvsp[-3].tipoexpr != REAL && yyvsp[-3].tipoexpr != CARACTERE || yyvsp[0].tipoexpr != INTEIRO && yyvsp[0].tipoexpr != REAL && yyvsp[0].tipoexpr != CARACTERE)
                                Incompatibilidade	("Operando improprio para operador relacional");
                            break;
                        case EQ: case NE:
                            if ((yyvsp[-3].tipoexpr == LOGICO || yyvsp[0].tipoexpr == LOGICO) && yyvsp[-3].tipoexpr != yyvsp[0].tipoexpr)
                                Incompatibilidade ("Operando improprio para operador relacional");
                            break;
                    }
                    yyval.tipoexpr = LOGICO;
                }
break;
case 71:
#line 290 "tsimb022015.y"
{
                    switch (yyvsp[0].atr) {
                        case MAIS: printf ("+ "); break;
                        case MENOS: printf ("- "); break;
                    }
                }
break;
case 72:
#line 295 "tsimb022015.y"
{
                        if (yyvsp[-3].tipoexpr != INTEIRO && yyvsp[-3].tipoexpr != REAL && yyvsp[-3].tipoexpr != CARACTERE || yyvsp[0].tipoexpr != INTEIRO && yyvsp[0].tipoexpr!=REAL && yyvsp[0].tipoexpr!=CARACTERE)
                            Incompatibilidade ("Operando improprio para operador aritmetico");
                        if (yyvsp[-3].tipoexpr == REAL || yyvsp[0].tipoexpr == REAL) yyval.tipoexpr = REAL;
                        else yyval.tipoexpr = INTEIRO;
                }
break;
case 74:
#line 303 "tsimb022015.y"
{
                    switch (yyvsp[0].atr) {
                        case MULT: printf ("* "); break;
                        case DIV: printf ("/ "); break;
                        case RESTO: printf ("%% "); break;
                    }
                }
break;
case 75:
#line 309 "tsimb022015.y"
{
                    switch (yyvsp[-2].atr) {
                        case MULT: case DIV:
                            if (yyvsp[-3].tipoexpr != INTEIRO && yyvsp[-3].tipoexpr != REAL && yyvsp[-3].tipoexpr != CARACTERE || yyvsp[0].tipoexpr != INTEIRO && yyvsp[0].tipoexpr!=REAL && yyvsp[0].tipoexpr!=CARACTERE)
                                Incompatibilidade ("Operando improprio para operador aritmetico");
                            if (yyvsp[-3].tipoexpr == REAL || yyvsp[0].tipoexpr == REAL) yyval.tipoexpr = REAL;
                            else yyval.tipoexpr = INTEIRO;
                            break;
                        case RESTO:
                            if (yyvsp[-3].tipoexpr != INTEIRO && yyvsp[-3].tipoexpr != CARACTERE  ||  yyvsp[0].tipoexpr != INTEIRO && yyvsp[0].tipoexpr != CARACTERE)
                                Incompatibilidade ("Operando improprio para operador resto");
                            yyval.tipoexpr = INTEIRO;
                            break;
                    }
                }
break;
case 76:
#line 325 "tsimb022015.y"
{
                    if  (yyvsp[0].simb != NULL)  {
                        yyvsp[0].simb->ref  =  VERDADE;
                        yyval.tipoexpr = yyvsp[0].simb->tvar;
                    }
                }
break;
case 77:
#line 331 "tsimb022015.y"
{printf ("%d ", yyvsp[0].valint); yyval.tipoexpr = INTEIRO;}
break;
case 78:
#line 332 "tsimb022015.y"
{printf ("%g ", yyvsp[0].valreal); yyval.tipoexpr = REAL;}
break;
case 79:
#line 333 "tsimb022015.y"
{printf ("\'%c\' ", yyvsp[0].carac); yyval.tipoexpr = CARACTERE;}
break;
case 80:
#line 334 "tsimb022015.y"
{printf ("true "); yyval.tipoexpr = LOGICO;}
break;
case 81:
#line 335 "tsimb022015.y"
{printf ("false "); yyval.tipoexpr = LOGICO;}
break;
case 82:
#line 336 "tsimb022015.y"
{printf ("~ ");}
break;
case 83:
#line 336 "tsimb022015.y"
{
                    if (yyvsp[0].tipoexpr != INTEIRO && yyvsp[0].tipoexpr != REAL && yyvsp[0].tipoexpr != CARACTERE)
                        Incompatibilidade  ("Operando improprio para menos unario");
                    if (yyvsp[0].tipoexpr == REAL) yyval.tipoexpr = REAL;
                    else yyval.tipoexpr = INTEIRO;
                }
break;
case 84:
#line 342 "tsimb022015.y"
{printf ("( ");}
break;
case 85:
#line 343 "tsimb022015.y"
{printf (") "); yyval.tipoexpr = yyvsp[-1].tipoexpr;}
break;
case 86:
#line 345 "tsimb022015.y"
{
                    printf ("%s ", yyvsp[0].cadeia);
                    simb = ProcuraSimb (yyvsp[0].cadeia);
                    if (simb == NULL) NaoDeclarado (yyvsp[0].cadeia);
                    else if (simb->tid != IDVAR) TipoInadequado (yyvsp[0].cadeia);
                    yyval.simb = simb;
                    if (yyval.simb != NULL)
                        if (yyval.simb->array == VERDADE)
                            Esperado ("Subscrito\(s)");

                }
break;
case 87:
#line 356 "tsimb022015.y"
{
                    printf ("%s [ ", yyvsp[-1].cadeia);
                    simb = ProcuraSimb (yyvsp[-1].cadeia);
                    if (simb == NULL) NaoDeclarado (yyvsp[-1].cadeia);
                    else if (simb->tid != IDVAR) TipoInadequado (yyvsp[-1].cadeia);
                    yyval.simb = simb;
            }
break;
case 88:
#line 362 "tsimb022015.y"
{
                    printf ("] "); yyval.simb = yyvsp[-2].simb;
                    if (yyval.simb != NULL)
                        if (yyval.simb->array == FALSO)
                            NaoEsperado ("Subscrito\(s)");
                        else if (yyval.simb->ndims != yyvsp[-1].nsubscr)
                            Incompatibilidade 
                        ("Numero de subscritos incompativel com declaracao");
                    }
break;
case 89:
#line 372 "tsimb022015.y"
{
                    if (yyvsp[0].tipoexpr != INTEIRO && yyvsp[0].tipoexpr != CARACTERE)
                        Incompatibilidade ("Tipo inadequado para subscrito");
                    yyval.nsubscr = 1;
                }
break;
case 90:
#line 377 "tsimb022015.y"
{printf (", ");}
break;
case 91:
#line 377 "tsimb022015.y"
{
                if (yyvsp[0].tipoexpr != INTEIRO && yyvsp[0].tipoexpr != CARACTERE)
                    Incompatibilidade ("Tipo inadequado para subscrito");
                yyval.nsubscr = yyvsp[-3].nsubscr + 1;
               }
break;
#line 1063 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
