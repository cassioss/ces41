/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CALL = 258,
     CHAR = 259,
     DO = 260,
     ELSE = 261,
     FALSE = 262,
     FLOAT = 263,
     FOR = 264,
     FUNCTION = 265,
     GLOBAL = 266,
     IF = 267,
     INIT = 268,
     INT = 269,
     LOCAL = 270,
     LOGIC = 271,
     MAIN = 272,
     NEW = 273,
     PROCEDURE = 274,
     PROGRAM = 275,
     READ = 276,
     REPEAT = 277,
     RETURN = 278,
     STATEMENTS = 279,
     THEN = 280,
     TRUE = 281,
     WHILE = 282,
     WRITE = 283,
     ID = 284,
     INTCT = 285,
     FLOATCT = 286,
     CHARCT = 287,
     STRING = 288,
     OR = 289,
     AND = 290,
     NOT = 291,
     RELOP = 292,
     ADOP = 293,
     MULTOP = 294,
     NEG = 295,
     OPPAR = 296,
     CLPAR = 297,
     OPBRAK = 298,
     CLBRAK = 299,
     OPBRACE = 300,
     CLBRACE = 301,
     OPTRIP = 302,
     CLTRIP = 303,
     SCOLON = 304,
     COMMA = 305,
     ASSIGN = 306,
     INVAL = 307
   };
#endif
/* Tokens.  */
#define CALL 258
#define CHAR 259
#define DO 260
#define ELSE 261
#define FALSE 262
#define FLOAT 263
#define FOR 264
#define FUNCTION 265
#define GLOBAL 266
#define IF 267
#define INIT 268
#define INT 269
#define LOCAL 270
#define LOGIC 271
#define MAIN 272
#define NEW 273
#define PROCEDURE 274
#define PROGRAM 275
#define READ 276
#define REPEAT 277
#define RETURN 278
#define STATEMENTS 279
#define THEN 280
#define TRUE 281
#define WHILE 282
#define WRITE 283
#define ID 284
#define INTCT 285
#define FLOATCT 286
#define CHARCT 287
#define STRING 288
#define OR 289
#define AND 290
#define NOT 291
#define RELOP 292
#define ADOP 293
#define MULTOP 294
#define NEG 295
#define OPPAR 296
#define CLPAR 297
#define OPBRAK 298
#define CLBRAK 299
#define OPBRACE 300
#define CLBRACE 301
#define OPTRIP 302
#define CLTRIP 303
#define SCOLON 304
#define COMMA 305
#define ASSIGN 306
#define INVAL 307




/* Copy the first part of user declarations.  */
#line 1 "lab06.y"

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
#define     OPEXIT          24

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

char *nomeoperquad[25] = {"",
    "OR", "AND", "LT", "LE", "GT", "GE", "EQ", "NE", "MAIS",
    "MENOS", "MULT", "DIV", "RESTO", "MENUN", "NOT", "ATRIB",
    "OPENMOD", "NOP", "JUMP", "JF", "READ", "WRITE", "PARAM",
    "OPEXIT"
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
    int *valint;
    float *valfloat;
    char *valchar, *vallogic;
    
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

/* Prototipos das funcoes e estruturas de dados para o interpretador de codigo intermediario */

typedef struct nohopnd nohopnd;
struct nohopnd {
    operando opnd;
    nohopnd *prox;
};

typedef nohopnd *pilhaoperando;
pilhaoperando pilhaopnd;

void InterpCodIntermed (void);
void AlocaVariaveis (void);
void ExecQuadWrite (quadrupla);
void ExecQuadMais (quadrupla);
void ExecQuadLT (quadrupla);
void ExecQuadAtrib (quadrupla);
void ExecQuadRead (quadrupla);

void EmpilharOpnd (operando, pilhaoperando *);
void DesempilharOpnd (pilhaoperando *);
operando TopoOpnd (pilhaoperando);
void InicPilhaOpnd (pilhaoperando *);
char VaziaOpnd (pilhaoperando);

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

FILE *finput;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 266 "lab06.y"
{
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
/* Line 193 of yacc.c.  */
#line 475 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 488 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  122
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNRULES -- Number of states.  */
#define YYNSTATES  260

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    13,    14,    15,    21,    23,    24,
      28,    32,    34,    36,    38,    40,    42,    43,    48,    50,
      51,    57,    59,    63,    64,    67,    70,    72,    74,    75,
      76,    77,    86,    88,    89,    93,    94,    95,    96,   104,
     106,   107,   111,   113,   114,   119,   122,   125,   126,   127,
     128,   135,   136,   140,   141,   145,   146,   151,   152,   153,
     157,   159,   161,   163,   165,   167,   169,   171,   173,   175,
     177,   179,   180,   181,   182,   183,   193,   194,   195,   199,
     200,   201,   202,   210,   211,   212,   213,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   251,   252,   253,
     254,   263,   265,   266,   271,   272,   273,   274,   283,   285,
     286,   291,   293,   295,   296,   297,   298,   306,   309,   311,
     312,   316,   317,   321,   322,   323,   329,   330,   331,   338,
     340,   341,   346,   348,   349,   354,   356,   357,   362,   364,
     365,   369,   371,   372,   377,   379,   380,   385,   387,   388,
     393,   395,   397,   399,   401,   403,   405,   406,   410,   411,
     416,   418,   420,   421,   427,   429,   430,   435,   436,   437,
     443,   445
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      54,     0,    -1,    -1,    20,    29,    47,    55,    56,    67,
      89,    48,    -1,    -1,    -1,    11,    45,    57,    58,    46,
      -1,    60,    -1,    -1,    58,    59,    60,    -1,    61,    62,
      49,    -1,    14,    -1,     8,    -1,     4,    -1,    16,    -1,
      64,    -1,    -1,    62,    50,    63,    64,    -1,    29,    -1,
      -1,    29,    43,    65,    66,    44,    -1,    30,    -1,    66,
      50,    30,    -1,    -1,    67,    68,    -1,    69,    85,    -1,
      70,    -1,    76,    -1,    -1,    -1,    -1,    61,    10,    71,
      29,    72,    41,    73,    74,    -1,    42,    -1,    -1,    75,
      82,    42,    -1,    -1,    -1,    -1,    19,    77,    29,    78,
      41,    79,    80,    -1,    42,    -1,    -1,    81,    82,    42,
      -1,    84,    -1,    -1,    82,    50,    83,    84,    -1,    61,
      29,    -1,    86,    91,    -1,    -1,    -1,    -1,    15,    87,
      45,    88,    58,    46,    -1,    -1,    17,    90,    85,    -1,
      -1,    24,    92,    93,    -1,    -1,    45,    94,    95,    46,
      -1,    -1,    -1,    95,    96,    97,    -1,    93,    -1,    98,
      -1,   105,    -1,   109,    -1,   113,    -1,   123,    -1,   129,
      -1,   147,    -1,   136,    -1,   143,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    12,    99,   152,   100,    25,   101,    97,
     102,   103,    -1,    -1,    -1,     6,   104,    97,    -1,    -1,
      -1,    -1,    27,   106,   152,   107,     5,   108,    97,    -1,
      -1,    -1,    -1,    22,   110,    97,    27,   111,   152,   112,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,   114,   167,   115,    13,   116,   152,   117,    27,
     118,   152,   119,    18,   120,   152,   121,     5,   122,    97,
      -1,    -1,    -1,    -1,    21,    41,   124,   127,   125,    42,
     126,    49,    -1,   167,    -1,    -1,   127,    50,   128,   167,
      -1,    -1,    -1,    -1,    28,    41,   130,   133,   131,    42,
     132,    49,    -1,   135,    -1,    -1,   133,    50,   134,   135,
      -1,    33,    -1,   152,    -1,    -1,    -1,    -1,     3,   137,
      29,   138,    41,   139,   140,    -1,   150,   141,    -1,   141,
      -1,    -1,    42,   142,    49,    -1,    -1,    23,   144,    49,
      -1,    -1,    -1,    23,   145,   152,   146,    49,    -1,    -1,
      -1,   167,   148,    51,   149,   152,    49,    -1,   152,    -1,
      -1,   150,    50,   151,   152,    -1,   154,    -1,    -1,   152,
      34,   153,   154,    -1,   156,    -1,    -1,   154,    35,   155,
     156,    -1,   158,    -1,    -1,    36,   157,   158,    -1,   160,
      -1,    -1,   160,    37,   159,   160,    -1,   162,    -1,    -1,
     160,    38,   161,   162,    -1,   164,    -1,    -1,   162,    39,
     163,   164,    -1,   167,    -1,    30,    -1,    31,    -1,    32,
      -1,    26,    -1,     7,    -1,    -1,    40,   165,   164,    -1,
      -1,    41,   166,   152,    42,    -1,   171,    -1,    29,    -1,
      -1,    29,    43,   168,   169,    44,    -1,   160,    -1,    -1,
     169,    50,   170,   160,    -1,    -1,    -1,    29,   172,    41,
     173,   174,    -1,    42,    -1,   150,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   351,   351,   349,   378,   380,   379,   384,   385,   385,
     387,   389,   390,   391,   392,   394,   396,   395,   399,   404,
     404,   410,   413,   417,   418,   420,   422,   423,   426,   427,
     434,   425,   437,   438,   438,   440,   441,   448,   440,   451,
     452,   452,   454,   456,   455,   459,   467,   470,   471,   472,
     471,   476,   476,   484,   484,   487,   487,   491,   492,   492,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   506,   507,   514,   515,   506,   530,   531,   531,   542,
     543,   547,   542,   550,   552,   553,   550,   559,   560,   564,
     565,   571,   572,   576,   577,   581,   559,   585,   586,   591,
     584,   594,   599,   599,   606,   607,   612,   605,   615,   620,
     619,   626,   632,   634,   635,   636,   634,   639,   640,   642,
     642,   645,   645,   650,   651,   650,   661,   664,   661,   677,
     679,   678,   682,   683,   683,   692,   693,   693,   702,   703,
     703,   712,   713,   713,   758,   759,   759,   776,   777,   777,
     807,   814,   819,   824,   829,   834,   839,   839,   848,   848,
     852,   854,   868,   868,   886,   891,   891,   897,   904,   897,
     909,   910
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CALL", "CHAR", "DO", "ELSE", "FALSE",
  "FLOAT", "FOR", "FUNCTION", "GLOBAL", "IF", "INIT", "INT", "LOCAL",
  "LOGIC", "MAIN", "NEW", "PROCEDURE", "PROGRAM", "READ", "REPEAT",
  "RETURN", "STATEMENTS", "THEN", "TRUE", "WHILE", "WRITE", "ID", "INTCT",
  "FLOATCT", "CHARCT", "STRING", "OR", "AND", "NOT", "RELOP", "ADOP",
  "MULTOP", "NEG", "OPPAR", "CLPAR", "OPBRAK", "CLBRAK", "OPBRACE",
  "CLBRACE", "OPTRIP", "CLTRIP", "SCOLON", "COMMA", "ASSIGN", "INVAL",
  "$accept", "Prog", "@1", "GlobDecls", "@2", "DeclList", "@3",
  "Declaration", "Type", "ElemList", "@4", "Elem", "@5", "DimList",
  "ModList", "Module", "ModHeader", "FuncHeader", "@6", "@7", "@8",
  "FuncHd", "@9", "ProcHeader", "@10", "@11", "@12", "ProcEnd", "@13",
  "ParamList", "@14", "Parameter", "ModBody", "LocDecls", "@15", "@16",
  "MainMod", "@17", "Stats", "@18", "CompStat", "@19", "StatList", "@20",
  "Statement", "IfStat", "@21", "@22", "@23", "@24", "ElseStat", "@25",
  "WhileStat", "@26", "@27", "@28", "RepeatStat", "@29", "@30", "@31",
  "ForStat", "@32", "@33", "@34", "@35", "@36", "@37", "@38", "@39", "@40",
  "ReadStat", "@41", "@42", "@43", "ReadList", "@44", "WriteStat", "@45",
  "@46", "@47", "WriteList", "@48", "WriteElem", "CallStat", "@49", "@50",
  "@51", "CallCompl", "CallFinish", "@52", "ReturnStat", "@53", "@54",
  "@55", "AssignStat", "@56", "@57", "ExprList", "@58", "Expression",
  "@59", "AuxExpr1", "@60", "AuxExpr2", "@61", "AuxExpr3", "@62",
  "AuxExpr4", "@63", "Term", "@64", "Factor", "@65", "@66", "Variable",
  "@67", "SubscrList", "@68", "FuncCall", "@69", "@70", "FuncTerm", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    56,    57,    56,    58,    59,    58,
      60,    61,    61,    61,    61,    62,    63,    62,    64,    65,
      64,    66,    66,    67,    67,    68,    69,    69,    71,    72,
      73,    70,    74,    75,    74,    77,    78,    79,    76,    80,
      81,    80,    82,    83,    82,    84,    85,    86,    87,    88,
      86,    90,    89,    92,    91,    94,    93,    95,    96,    95,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    99,   100,   101,   102,    98,   103,   104,   103,   106,
     107,   108,   105,   110,   111,   112,   109,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   113,   124,   125,   126,
     123,   127,   128,   127,   130,   131,   132,   129,   133,   134,
     133,   135,   135,   137,   138,   139,   136,   140,   140,   142,
     141,   144,   143,   145,   146,   143,   148,   149,   147,   150,
     151,   150,   152,   153,   152,   154,   155,   154,   156,   157,
     156,   158,   159,   158,   160,   161,   160,   162,   163,   162,
     164,   164,   164,   164,   164,   164,   165,   164,   166,   164,
     164,   167,   168,   167,   169,   170,   169,   172,   173,   171,
     174,   174
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     8,     0,     0,     5,     1,     0,     3,
       3,     1,     1,     1,     1,     1,     0,     4,     1,     0,
       5,     1,     3,     0,     2,     2,     1,     1,     0,     0,
       0,     8,     1,     0,     3,     0,     0,     0,     7,     1,
       0,     3,     1,     0,     4,     2,     2,     0,     0,     0,
       6,     0,     3,     0,     3,     0,     4,     0,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     0,     0,     9,     0,     0,     3,     0,
       0,     0,     7,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       8,     1,     0,     4,     0,     0,     0,     8,     1,     0,
       4,     1,     1,     0,     0,     0,     7,     2,     1,     0,
       3,     0,     3,     0,     0,     5,     0,     0,     6,     1,
       0,     4,     1,     0,     4,     1,     0,     4,     1,     0,
       3,     1,     0,     4,     1,     0,     4,     1,     0,     4,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     4,
       1,     1,     0,     5,     1,     0,     4,     0,     0,     5,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     4,     0,    23,     5,
       0,     0,    13,    12,    11,    14,    51,    35,     0,    24,
      47,    26,    27,     0,     8,     7,     0,    47,     0,    28,
      48,    25,     0,     3,     6,     0,    18,     0,    15,    52,
      36,     0,     0,    53,    46,     9,    19,    10,    16,     0,
      29,    49,     0,     0,     0,    37,     0,     0,    55,    54,
      21,     0,    17,    40,    30,     8,    57,    20,     0,    39,
      38,     0,    33,    50,    58,    22,     0,     0,    42,    32,
      31,     0,    56,     0,    45,    41,    43,     0,   113,    87,
      71,     0,    83,   123,    79,     0,   161,    70,    60,    59,
      61,    62,    63,    64,    65,    66,    68,    69,    67,   126,
       0,    34,     0,     0,     0,    97,     0,     0,     0,     0,
     104,   162,     0,    44,   114,    88,   155,   154,   161,   151,
     152,   153,   139,   156,   158,    72,   132,   135,   138,   141,
     144,   147,   150,   160,     0,     0,   122,   124,    80,     0,
       0,   127,     0,     0,     0,     0,     0,     0,   133,     0,
     136,   142,   145,   148,    98,   101,    84,     0,     0,   111,
     105,   108,   112,   164,     0,     0,   115,    89,   168,   140,
     157,     0,     0,    73,     0,     0,     0,     0,   102,     0,
       0,   125,    81,   109,     0,   163,   165,     0,     0,     0,
       0,   159,   134,     0,   137,   143,   146,   149,     0,    99,
      85,     0,     0,   106,     0,   128,   119,   116,   118,     0,
     129,    90,   170,     0,   169,    74,   103,     0,     0,    82,
     110,     0,   166,     0,   130,   117,     0,   171,    76,   100,
      86,   107,   120,     0,    91,    77,    75,   131,     0,     0,
      92,    78,     0,    93,     0,    94,     0,    95,     0,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     8,    11,    24,    35,    25,    26,    37,
      54,    38,    53,    61,    10,    19,    20,    21,    41,    56,
      72,    80,    81,    22,    28,    49,    63,    70,    71,    77,
     110,    78,    31,    32,    42,    57,    23,    27,    44,    52,
      98,    66,    74,    83,    99,   100,   114,   159,   203,   238,
     246,   249,   101,   119,   168,   211,   102,   116,   190,   228,
     103,   113,   153,   199,   236,   248,   252,   254,   256,   258,
     104,   144,   189,   227,   164,   208,   105,   149,   194,   231,
     170,   212,   171,   106,   112,   152,   198,   217,   218,   233,
     107,   117,   118,   167,   108,   122,   175,   219,   243,   172,
     182,   136,   184,   137,   155,   138,   185,   139,   186,   140,
     187,   141,   156,   157,   142,   150,   174,   214,   143,   154,
     200,   224
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -150
static const yytype_int16 yypact[] =
{
     -17,    19,    12,   -33,  -150,  -150,    58,    27,  -150,  -150,
       1,    43,  -150,  -150,  -150,  -150,  -150,  -150,    69,  -150,
      65,  -150,  -150,    46,    51,  -150,    66,    65,    71,  -150,
    -150,  -150,    74,  -150,  -150,    43,    61,    -6,  -150,  -150,
    -150,    72,    60,  -150,  -150,  -150,  -150,  -150,  -150,    70,
    -150,  -150,    67,    84,    66,  -150,    75,    43,  -150,  -150,
    -150,    39,  -150,    73,  -150,    76,  -150,  -150,    89,  -150,
    -150,    43,    79,  -150,    78,  -150,    94,   -29,  -150,  -150,
    -150,    43,  -150,    13,  -150,  -150,  -150,   -23,  -150,  -150,
    -150,    86,  -150,    80,  -150,    90,    87,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
      43,  -150,   103,   104,   119,  -150,    13,    88,   119,   119,
    -150,  -150,    85,  -150,  -150,  -150,  -150,  -150,   -15,  -150,
    -150,  -150,  -150,  -150,  -150,   107,   109,  -150,  -150,     8,
      99,  -150,  -150,  -150,   104,   115,  -150,   107,   107,    77,
     132,  -150,   106,   139,   112,   132,   132,   119,  -150,   129,
    -150,  -150,  -150,  -150,   117,  -150,  -150,   108,   151,  -150,
     118,  -150,   107,   127,    49,   119,  -150,  -150,  -150,  -150,
    -150,   -10,   119,  -150,   119,   132,   132,   132,  -150,   128,
     119,  -150,  -150,  -150,   134,  -150,  -150,   -26,    24,   119,
      45,  -150,   109,    13,  -150,   127,    99,  -150,   104,  -150,
     107,    13,    77,  -150,   132,  -150,  -150,  -150,  -150,   -13,
     107,   107,  -150,    28,  -150,  -150,  -150,   120,   122,  -150,
    -150,   125,   127,   130,  -150,  -150,   150,  -150,   172,  -150,
    -150,  -150,  -150,   119,  -150,  -150,  -150,   107,   119,    13,
     107,  -150,   162,  -150,   119,   107,   176,  -150,    13,  -150
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,  -150,  -150,   126,  -150,   147,    -8,  -150,
    -150,   131,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   105,
    -150,    81,   157,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
     135,  -150,  -150,  -150,  -115,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,   -24,  -150,  -150,  -150,  -150,  -150,   -30,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,    -7,  -150,  -108,
    -150,    10,  -150,     6,  -150,    40,  -150,  -146,  -150,    11,
    -150,  -149,  -150,  -150,   -83,  -150,  -150,  -150,  -150,  -150,
    -150,  -150
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -168
static const yytype_int16 yytable[] =
{
     109,   145,    18,     1,   173,    12,   135,   180,   158,    13,
     147,   148,     4,    85,     5,    14,    88,    15,    16,   111,
      17,    86,    89,   215,   158,    90,  -167,    86,   121,   216,
     125,   126,   201,   109,    91,    92,    93,   234,   207,   205,
      94,    95,    96,    47,    48,   161,   162,    12,     3,   181,
     127,    13,   126,   128,   129,   130,   131,    14,    58,    15,
     132,   165,    97,    76,   133,   134,   216,   197,   232,     7,
     237,   127,     9,    76,   128,   129,   130,   131,   234,    29,
      30,   132,   210,    67,   126,   133,   134,   222,   225,    68,
     220,   221,   220,   195,    33,    36,   229,    34,    43,   196,
      40,    50,    76,   127,    46,    51,   128,   129,   130,   131,
     169,    55,    58,   132,    60,    69,    64,   133,   134,    75,
     109,    79,    73,    84,    82,   226,   126,   115,   109,  -121,
     121,   120,   124,    96,   251,   247,   151,   146,   163,   126,
     250,   158,   166,   259,   160,   127,   255,   176,   128,   129,
     130,   131,   177,   178,   183,   132,   192,   191,   127,   133,
     134,   128,   129,   130,   131,   162,   109,   188,   193,   239,
     209,   240,   133,   134,   241,   109,   213,   244,   245,   242,
     253,   257,    45,    65,    39,    62,    87,    59,   230,   235,
     204,   123,   202,   223,     0,   179,     0,   206
};

static const yytype_int16 yycheck[] =
{
      83,   116,    10,    20,   150,     4,   114,   156,    34,     8,
     118,   119,     0,    42,    47,    14,     3,    16,    17,    42,
      19,    50,     9,    49,    34,    12,    41,    50,    43,    42,
     113,     7,    42,   116,    21,    22,    23,    50,   187,   185,
      27,    28,    29,    49,    50,    37,    38,     4,    29,   157,
      26,     8,     7,    29,    30,    31,    32,    14,    45,    16,
      36,   144,    49,    71,    40,    41,    42,   175,   214,    11,
      42,    26,    45,    81,    29,    30,    31,    32,    50,    10,
      15,    36,   190,    44,     7,    40,    41,    42,   203,    50,
     198,   199,   200,    44,    48,    29,   211,    46,    24,    50,
      29,    29,   110,    26,    43,    45,    29,    30,    31,    32,
      33,    41,    45,    36,    30,    42,    41,    40,    41,    30,
     203,    42,    46,    29,    46,   208,     7,    41,   211,    49,
      43,    41,    29,    29,   249,   243,    51,    49,    39,     7,
     248,    34,    27,   258,    35,    26,   254,    41,    29,    30,
      31,    32,    13,    41,    25,    36,     5,    49,    26,    40,
      41,    29,    30,    31,    32,    38,   249,    50,    50,    49,
      42,    49,    40,    41,    49,   258,    42,    27,     6,    49,
      18,     5,    35,    57,    27,    54,    81,    52,   212,   219,
     184,   110,   182,   200,    -1,   155,    -1,   186
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    54,    29,     0,    47,    55,    11,    56,    45,
      67,    57,     4,     8,    14,    16,    17,    19,    61,    68,
      69,    70,    76,    89,    58,    60,    61,    90,    77,    10,
      15,    85,    86,    48,    46,    59,    29,    62,    64,    85,
      29,    71,    87,    24,    91,    60,    43,    49,    50,    78,
      29,    45,    92,    65,    63,    41,    72,    88,    45,    93,
      30,    66,    64,    79,    41,    58,    94,    44,    50,    42,
      80,    81,    73,    46,    95,    30,    61,    82,    84,    42,
      74,    75,    46,    96,    29,    42,    50,    82,     3,     9,
      12,    21,    22,    23,    27,    28,    29,    49,    93,    97,
      98,   105,   109,   113,   123,   129,   136,   143,   147,   167,
      83,    42,   137,   114,    99,    41,   110,   144,   145,   106,
      41,    43,   148,    84,    29,   167,     7,    26,    29,    30,
      31,    32,    36,    40,    41,   152,   154,   156,   158,   160,
     162,   164,   167,   171,   124,    97,    49,   152,   152,   130,
     168,    51,   138,   115,   172,   157,   165,   166,    34,   100,
      35,    37,    38,    39,   127,   167,    27,   146,   107,    33,
     133,   135,   152,   160,   169,   149,    41,    13,    41,   158,
     164,   152,   153,    25,   155,   159,   161,   163,    50,   125,
     111,    49,     5,    50,   131,    44,    50,   152,   139,   116,
     173,    42,   154,   101,   156,   160,   162,   164,   128,    42,
     152,   108,   134,    42,   170,    49,    42,   140,   141,   150,
     152,   152,    42,   150,   174,    97,   167,   126,   112,    97,
     135,   132,   160,   142,    50,   141,   117,    42,   102,    49,
      49,    49,    49,   151,    27,     6,   103,   152,   118,   104,
     152,    97,   119,    18,   120,   152,   121,     5,   122,    97
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 351 "lab06.y"
    {
                    printf ("program %s {{{\n\n", (yyvsp[(2) - (3)].string));
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
    break;

  case 3:
#line 369 "lab06.y"
    {
                    printf ("}}}\n");
                    GeraQuadrupla(OPEXIT, opndidle, opndidle, opndidle);
                    VerificaInicRef ();
                    ImprimeTabSimb();
                    ImprimeQuadruplas();
                    InterpCodIntermed();
                }
    break;

  case 5:
#line 380 "lab06.y"
    {printf ("global {\n"); tab++; tabular();}
    break;

  case 6:
#line 382 "lab06.y"
    {tab--; tabular (); printf ("}\n\n"); }
    break;

  case 8:
#line 385 "lab06.y"
    {tabular();}
    break;

  case 10:
#line 387 "lab06.y"
    {printf (";\n");}
    break;

  case 11:
#line 389 "lab06.y"
    {printf ("int ");   tipocorrente = INTEIRO;}
    break;

  case 12:
#line 390 "lab06.y"
    {printf ("float "); tipocorrente = REAL;}
    break;

  case 13:
#line 391 "lab06.y"
    {printf ("char ");  tipocorrente = CARACTERE;}
    break;

  case 14:
#line 392 "lab06.y"
    {printf ("logic "); tipocorrente = LOGICO;}
    break;

  case 16:
#line 396 "lab06.y"
    {printf (", "); }
    break;

  case 18:
#line 399 "lab06.y"
    {printf ("%s", (yyvsp[(1) - (1)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(1) - (1)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(1) - (1)].string));
                    else  { simb = InsereSimb ((yyvsp[(1) - (1)].string),  IDVAR,  tipocorrente, escopo);
                            simb->array = FALSO; }
                }
    break;

  case 19:
#line 404 "lab06.y"
    {printf ("%s[", (yyvsp[(1) - (2)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(1) - (2)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(1) - (2)].string));
                    else  { simb = InsereSimb ((yyvsp[(1) - (2)].string),  IDVAR,  tipocorrente, escopo);
                            simb->array = VERDADE; simb->ndims = 0; }
                }
    break;

  case 20:
#line 408 "lab06.y"
    {printf ("]");}
    break;

  case 21:
#line 410 "lab06.y"
    {printf ("%d", (yyvsp[(1) - (1)].valor));
                    if ((yyvsp[(1) - (1)].valor) <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = (yyvsp[(1) - (1)].valor);}
    break;

  case 22:
#line 413 "lab06.y"
    {printf (", %d", (yyvsp[(3) - (3)].valor));
                    if ((yyvsp[(3) - (3)].valor) <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = (yyvsp[(3) - (3)].valor);}
    break;

  case 25:
#line 420 "lab06.y"
    { escopo = escopo->escopo; }
    break;

  case 28:
#line 426 "lab06.y"
    {printf ("function ");}
    break;

  case 29:
#line 427 "lab06.y"
    {
                    printf ("%s", (yyvsp[(4) - (4)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(4) - (4)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(4) - (4)].string));
                    escopo = simb = InsereSimb ((yyvsp[(4) - (4)].string), IDFUNC, tipocorrente, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
    break;

  case 30:
#line 434 "lab06.y"
    {printf ("\(");}
    break;

  case 32:
#line 437 "lab06.y"
    {printf (")\n");}
    break;

  case 33:
#line 438 "lab06.y"
    {declparam = VERDADE;}
    break;

  case 34:
#line 438 "lab06.y"
    {printf (")\n"); declparam = FALSO;}
    break;

  case 35:
#line 440 "lab06.y"
    {printf ("procedure ");}
    break;

  case 36:
#line 441 "lab06.y"
    {
                    printf ("%s", (yyvsp[(3) - (3)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(3) - (3)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(3) - (3)].string));
                    escopo = simb = InsereSimb ((yyvsp[(3) - (3)].string), IDPROC, NAOVAR, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
    break;

  case 37:
#line 448 "lab06.y"
    {printf ("\(");}
    break;

  case 39:
#line 451 "lab06.y"
    {printf (")\n"); }
    break;

  case 40:
#line 452 "lab06.y"
    {declparam = VERDADE;}
    break;

  case 41:
#line 452 "lab06.y"
    {printf (")\n"); declparam = FALSO;}
    break;

  case 43:
#line 456 "lab06.y"
    {printf (", ");}
    break;

  case 45:
#line 460 "lab06.y"
    {
                    printf ("%s", (yyvsp[(2) - (2)].string));
                    if  (ProcuraSimbParaInstanciar ((yyvsp[(2) - (2)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(2) - (2)].string));
                    else  { simb = InsereSimb ((yyvsp[(2) - (2)].string),  IDVAR,  tipocorrente, escopo);
                        simb->array = FALSO; }
                }
    break;

  case 48:
#line 471 "lab06.y"
    {printf ("local "); }
    break;

  case 49:
#line 472 "lab06.y"
    {printf("{\n"); tab++; tabular();}
    break;

  case 50:
#line 474 "lab06.y"
    {tab--; tabular (); printf ("}\n\n"); }
    break;

  case 51:
#line 476 "lab06.y"
    {
                    printf ("main\n");
                    escopo = simb = InsereSimb("##main", IDPROG, NAOVAR, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
    break;

  case 53:
#line 484 "lab06.y"
    {printf ("statements ");}
    break;

  case 54:
#line 485 "lab06.y"
    {printf ("\n");}
    break;

  case 55:
#line 487 "lab06.y"
    {printf("{\n"); tab++;}
    break;

  case 56:
#line 489 "lab06.y"
    {tab--; tabular (); printf ("}\n"); }
    break;

  case 58:
#line 492 "lab06.y"
    {tabular(); }
    break;

  case 70:
#line 504 "lab06.y"
    {printf (";\n");}
    break;

  case 71:
#line 506 "lab06.y"
    {printf ("if ");}
    break;

  case 72:
#line 507 "lab06.y"
    {
                    if ((yyvsp[(3) - (3)].infoexpr).tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para comando if");
                    opndaux.tipo = ROTOPND;
                    (yyval.quad) = 
                        GeraQuadrupla (OPJF, (yyvsp[(3) - (3)].infoexpr).opnd, opndidle, opndaux);
                }
    break;

  case 73:
#line 514 "lab06.y"
    {printf (" then ");}
    break;

  case 74:
#line 515 "lab06.y"
    {
                    (yyval.quad) = quadcorrente;
                    (yyvsp[(4) - (7)].quad)->result.atr.rotulo =
                        GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
                }
    break;

  case 75:
#line 520 "lab06.y"
    {
                    if ((yyvsp[(8) - (9)].quad)->prox != quadcorrente) {
                        quadaux = (yyvsp[(8) - (9)].quad)->prox;
                        (yyvsp[(8) - (9)].quad)->prox = quadaux->prox;
                        quadaux->prox = (yyvsp[(8) - (9)].quad)->prox->prox;
                        (yyvsp[(8) - (9)].quad)->prox->prox = quadaux;
                        RenumQuadruplas ((yyvsp[(8) - (9)].quad), quadcorrente);
                    }
                }
    break;

  case 77:
#line 531 "lab06.y"
    {
                    tabular(); printf ("else ");
                    opndaux.tipo = ROTOPND;
                    (yyval.quad) =
                        GeraQuadrupla (OPJUMP, opndidle, opndidle, opndaux);
                }
    break;

  case 78:
#line 537 "lab06.y"
    {
                    (yyvsp[(2) - (3)].quad)->result.atr.rotulo =
                    GeraQuadrupla (NOP, opndidle, opndidle, opndidle);
                }
    break;

  case 79:
#line 542 "lab06.y"
    {printf ("while ");}
    break;

  case 80:
#line 543 "lab06.y"
    {
                    if ((yyvsp[(3) - (3)].infoexpr).tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para comando while");
                }
    break;

  case 81:
#line 547 "lab06.y"
    {printf (" do ");}
    break;

  case 83:
#line 550 "lab06.y"
    {printf ("repeat {\n"); tab++; tabular(); }
    break;

  case 84:
#line 552 "lab06.y"
    {tab--; tabular(); printf ("} while ");}
    break;

  case 85:
#line 553 "lab06.y"
    {
                    if ((yyvsp[(6) - (6)].infoexpr).tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para comando repeat");
                }
    break;

  case 86:
#line 557 "lab06.y"
    {printf (";\n");}
    break;

  case 87:
#line 559 "lab06.y"
    {printf ("for ");}
    break;

  case 88:
#line 560 "lab06.y"
    {
                    if ((yyvsp[(3) - (3)].infovar).simb->tvar != INTEIRO)
                        Incompatibilidade ("Cabecalho de tipo improprio para comando for");
                }
    break;

  case 89:
#line 564 "lab06.y"
    {printf (" init ");}
    break;

  case 90:
#line 565 "lab06.y"
    {
                    if ((yyvsp[(7) - (7)].infoexpr).tipo != INTEIRO)
                        Incompatibilidade ("Inicializacao impropria para cabecalho de comando for");
                    (yyvsp[(3) - (7)].infovar).simb->inic = (yyvsp[(3) - (7)].infovar).simb->ref = VERDADE;
                    GeraQuadrupla (OPATRIB, (yyvsp[(7) - (7)].infoexpr).opnd, opndidle, (yyvsp[(3) - (7)].infovar).opnd);
                }
    break;

  case 91:
#line 571 "lab06.y"
    {printf (" while ");}
    break;

  case 92:
#line 572 "lab06.y"
    {
                    if ((yyvsp[(11) - (11)].infoexpr).tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para comando while");
                }
    break;

  case 93:
#line 576 "lab06.y"
    {printf (" new ");}
    break;

  case 94:
#line 577 "lab06.y"
    {
                    if ((yyvsp[(15) - (15)].infoexpr).tipo != INTEIRO)
                        Incompatibilidade ("Atribuicao de tipo improprio para comando new");
                }
    break;

  case 95:
#line 581 "lab06.y"
    {printf (" do ");}
    break;

  case 97:
#line 585 "lab06.y"
    {printf ("read "); printf ("\(");}
    break;

  case 98:
#line 586 "lab06.y"
    {
                    opnd1.tipo = INTOPND;
                    opnd1.atr.valint = (yyvsp[(4) - (4)].nargs);
                    GeraQuadrupla (OPREAD, opnd1, opndidle, opndidle);
                }
    break;

  case 99:
#line 591 "lab06.y"
    {printf (")"); }
    break;

  case 100:
#line 592 "lab06.y"
    {printf (";\n");}
    break;

  case 101:
#line 594 "lab06.y"
    {
                    if  ((yyvsp[(1) - (1)].infovar).simb != NULL) (yyvsp[(1) - (1)].infovar).simb->inic = (yyvsp[(1) - (1)].infovar).simb->ref = VERDADE;
                    (yyval.nargs) = 1;
                    GeraQuadrupla (PARAM, (yyvsp[(1) - (1)].infovar).opnd, opndidle, opndidle);
                }
    break;

  case 102:
#line 599 "lab06.y"
    {printf (", ");}
    break;

  case 103:
#line 599 "lab06.y"
    {
                    if  ((yyvsp[(4) - (4)].infovar).simb != NULL) (yyvsp[(4) - (4)].infovar).simb->inic = (yyvsp[(4) - (4)].infovar).simb->ref = VERDADE;
                        (yyval.nargs) = (yyvsp[(1) - (4)].nargs) + 1;
                        GeraQuadrupla (PARAM, (yyvsp[(4) - (4)].infovar).opnd, opndidle, opndidle);
                }
    break;

  case 104:
#line 606 "lab06.y"
    {printf ("write "); printf ("\(");}
    break;

  case 105:
#line 607 "lab06.y"
    {
                    opnd1.tipo = INTOPND;
                    opnd1.atr.valint = (yyvsp[(4) - (4)].nargs);
                    GeraQuadrupla (OPWRITE, opnd1, opndidle, opndidle);
                }
    break;

  case 106:
#line 612 "lab06.y"
    {printf (")"); }
    break;

  case 107:
#line 613 "lab06.y"
    {printf (";\n");}
    break;

  case 108:
#line 615 "lab06.y"
    {
                    (yyval.nargs) = 1;
                    GeraQuadrupla (PARAM, (yyvsp[(1) - (1)].infoexpr).opnd, opndidle, opndidle);
                }
    break;

  case 109:
#line 620 "lab06.y"
    {printf (", "); }
    break;

  case 110:
#line 621 "lab06.y"
    {
                    (yyval.nargs) = (yyvsp[(1) - (4)].nargs) + 1;
                    GeraQuadrupla (PARAM, (yyvsp[(4) - (4)].infoexpr).opnd, opndidle, opndidle);
                }
    break;

  case 111:
#line 626 "lab06.y"
    {
                    printf ("%s", (yyvsp[(1) - (1)].string));
                    (yyval.infoexpr).opnd.tipo = CADOPND;
                    (yyval.infoexpr).opnd.atr.valcad = malloc (strlen((yyvsp[(1) - (1)].string)) + 1);
                    strcpy ((yyval.infoexpr).opnd.atr.valcad, (yyvsp[(1) - (1)].string));
                }
    break;

  case 113:
#line 634 "lab06.y"
    {printf ("call ");}
    break;

  case 114:
#line 635 "lab06.y"
    {printf ("%s", (yyvsp[(3) - (3)].string));}
    break;

  case 115:
#line 636 "lab06.y"
    {printf ("\(");}
    break;

  case 119:
#line 642 "lab06.y"
    {printf (")");}
    break;

  case 120:
#line 643 "lab06.y"
    {printf (";\n");}
    break;

  case 121:
#line 645 "lab06.y"
    {printf ("return");}
    break;

  case 122:
#line 646 "lab06.y"
    {printf(";\n");
                    if(escopo->tid == IDFUNC)
                        Incompatibilidade("Funcao deveria retornar um valor");
                }
    break;

  case 123:
#line 650 "lab06.y"
    {printf ("return ");}
    break;

  case 124:
#line 651 "lab06.y"
    {
                    if(escopo->tid == IDFUNC){
                        if((yyvsp[(3) - (3)].infoexpr).tipo != escopo->tvar)
                            Incompatibilidade ("Tipo retornado diferente do tipo esperado");
                    } else {
                        Incompatibilidade ("Retorno inesperado de um valor");
                    }
                }
    break;

  case 125:
#line 659 "lab06.y"
    {printf(";\n");}
    break;

  case 126:
#line 661 "lab06.y"
    {
                    if  ((yyvsp[(1) - (1)].infovar).simb != NULL) (yyvsp[(1) - (1)].infovar).simb->inic = (yyvsp[(1) - (1)].infovar).simb->ref = VERDADE;
                }
    break;

  case 127:
#line 664 "lab06.y"
    {printf ("= ");}
    break;

  case 128:
#line 665 "lab06.y"
    {
                    printf (";\n");
                    if ((yyvsp[(1) - (6)].infovar).simb != NULL){
                        if ((((yyvsp[(1) - (6)].infovar).simb->tvar == INTEIRO || (yyvsp[(1) - (6)].infovar).simb->tvar == CARACTERE) &&
                            ((yyvsp[(5) - (6)].infoexpr).tipo == REAL || (yyvsp[(5) - (6)].infoexpr).tipo == LOGICO)) ||
                            ((yyvsp[(1) - (6)].infovar).simb->tvar == REAL && (yyvsp[(5) - (6)].infoexpr).tipo == LOGICO) ||
                            ((yyvsp[(1) - (6)].infovar).simb->tvar == LOGICO && (yyvsp[(5) - (6)].infoexpr).tipo != LOGICO))
                            Incompatibilidade ("Lado direito de comando de atribuicao improprio");
                        GeraQuadrupla (OPATRIB, (yyvsp[(5) - (6)].infoexpr).opnd, opndidle, (yyvsp[(1) - (6)].infovar).opnd);
                    }
                }
    break;

  case 130:
#line 679 "lab06.y"
    {printf (", "); }
    break;

  case 133:
#line 683 "lab06.y"
    {printf ("|| ");}
    break;

  case 134:
#line 683 "lab06.y"
    {
                    if ((yyvsp[(1) - (4)].infoexpr).tipo != LOGICO || (yyvsp[(4) - (4)].infoexpr).tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para operador or");
                    (yyval.infoexpr).tipo = LOGICO;
                    (yyval.infoexpr).opnd.tipo = VAROPND;
                    (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
                    GeraQuadrupla (OPOR, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                }
    break;

  case 136:
#line 693 "lab06.y"
    {printf ("&& ");}
    break;

  case 137:
#line 693 "lab06.y"
    {
                    if ((yyvsp[(1) - (4)].infoexpr).tipo != LOGICO || (yyvsp[(4) - (4)].infoexpr).tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para operador and");
                    (yyval.infoexpr).tipo = LOGICO;
                    (yyval.infoexpr).opnd.tipo = VAROPND;
                    (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
                    GeraQuadrupla (OPAND, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                }
    break;

  case 139:
#line 703 "lab06.y"
    {printf ("! ");}
    break;

  case 140:
#line 703 "lab06.y"
    {
                    if ((yyvsp[(3) - (3)].infoexpr).tipo != LOGICO)
                        Incompatibilidade ("Operando improprio para operador not");
                    (yyval.infoexpr).tipo = LOGICO;
                    (yyval.infoexpr).opnd.tipo = VAROPND;
                    (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyvsp[(3) - (3)].infoexpr).tipo);
                    GeraQuadrupla (OPNOT, (yyvsp[(3) - (3)].infoexpr).opnd, opndidle, (yyval.infoexpr).opnd);
                }
    break;

  case 142:
#line 713 "lab06.y"
    {
                    switch ((yyvsp[(2) - (2)].atr)) {
                        case LT: printf ("< "); break;
                        case LE: printf ("<= "); break;
                        case EQ: printf ("== "); break;
                        case NE: printf ("!= "); break;
                        case GT: printf ("> "); break;
                        case GE: printf (">= "); break;
                    }
                }
    break;

  case 143:
#line 722 "lab06.y"
    {
                    switch ((yyvsp[(2) - (4)].atr)) {
                        case LT: case LE: case GT: case GE:
                            if ((yyvsp[(1) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(1) - (4)].infoexpr).tipo != REAL && (yyvsp[(1) - (4)].infoexpr).tipo != CARACTERE || (yyvsp[(4) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(4) - (4)].infoexpr).tipo != REAL && (yyvsp[(4) - (4)].infoexpr).tipo != CARACTERE)
                                Incompatibilidade   ("Operando improprio para operador relacional");
                            break;
                        case EQ: case NE:
                            if (((yyvsp[(1) - (4)].infoexpr).tipo == LOGICO || (yyvsp[(4) - (4)].infoexpr).tipo == LOGICO) && (yyvsp[(1) - (4)].infoexpr).tipo != (yyvsp[(4) - (4)].infoexpr).tipo)
                                Incompatibilidade ("Operando improprio para operador relacional");
                            break;
                    }
                    (yyval.infoexpr).tipo = LOGICO;
                    (yyval.infoexpr).opnd.tipo = VAROPND;
                    (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
                    switch ((yyvsp[(2) - (4)].atr)) {
                        case LT:
                            GeraQuadrupla (OPLT, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                            break;
                        case LE:
                            GeraQuadrupla (OPLE, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                            break;
                        case GT:
                            GeraQuadrupla (OPGT, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                            break;
                        case GE:
                            GeraQuadrupla (OPGE, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                            break;
                        case EQ:
                            GeraQuadrupla (OPEQ, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                            break;
                        case NE:
                            GeraQuadrupla (OPNE, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                            break;
                    }
                }
    break;

  case 145:
#line 759 "lab06.y"
    {
                    switch ((yyvsp[(2) - (2)].atr)) {
                        case PLUS: printf ("+ "); break;
                        case MINUS: printf ("- "); break;
                    }
                }
    break;

  case 146:
#line 764 "lab06.y"
    {
                        if ((yyvsp[(1) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(1) - (4)].infoexpr).tipo != REAL && (yyvsp[(1) - (4)].infoexpr).tipo != CARACTERE || (yyvsp[(4) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(4) - (4)].infoexpr).tipo!=REAL && (yyvsp[(4) - (4)].infoexpr).tipo!=CARACTERE)
                            Incompatibilidade ("Operando improprio para operador aritmetico");
                        if ((yyvsp[(1) - (4)].infoexpr).tipo == REAL || (yyvsp[(4) - (4)].infoexpr).tipo == REAL) (yyval.infoexpr).tipo = REAL;
                        else (yyval.infoexpr).tipo = INTEIRO;
                        (yyval.infoexpr).opnd.tipo = VAROPND;
                        (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
                        if ((yyvsp[(2) - (4)].atr) == PLUS)
                            GeraQuadrupla (OPMAIS, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                        else  GeraQuadrupla (OPMENOS, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                }
    break;

  case 148:
#line 777 "lab06.y"
    {
                    switch ((yyvsp[(2) - (2)].atr)) {
                        case TIMES: printf ("* "); break;
                        case DIVIDE: printf ("/ "); break;
                        case MODULE: printf ("%% "); break;
                    }
                }
    break;

  case 149:
#line 783 "lab06.y"
    {
                    switch ((yyvsp[(2) - (4)].atr)) {
                        case TIMES: case DIVIDE:
                            if ((yyvsp[(1) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(1) - (4)].infoexpr).tipo != REAL && (yyvsp[(1) - (4)].infoexpr).tipo != CARACTERE || (yyvsp[(4) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(4) - (4)].infoexpr).tipo!=REAL && (yyvsp[(4) - (4)].infoexpr).tipo!=CARACTERE)
                                Incompatibilidade ("Operando improprio para operador aritmetico");
                            if ((yyvsp[(1) - (4)].infoexpr).tipo == REAL || (yyvsp[(4) - (4)].infoexpr).tipo == REAL) (yyval.infoexpr).tipo = REAL;
                            else (yyval.infoexpr).tipo = INTEIRO;
                            (yyval.infoexpr).opnd.tipo = VAROPND;
                            (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
                            if ((yyvsp[(2) - (4)].atr) == TIMES)
                                GeraQuadrupla   (OPMULTIP, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                            else  GeraQuadrupla  (OPDIV, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                            break;
                        case MODULE:
                            if ((yyvsp[(1) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(1) - (4)].infoexpr).tipo != CARACTERE  ||  (yyvsp[(4) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(4) - (4)].infoexpr).tipo != CARACTERE)
                                Incompatibilidade ("Operando improprio para operador resto");
                            (yyval.infoexpr).tipo = INTEIRO;
                            (yyval.infoexpr).opnd.tipo = VAROPND;
                            (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
                            GeraQuadrupla (OPRESTO, (yyvsp[(1) - (4)].infoexpr).opnd, (yyvsp[(4) - (4)].infoexpr).opnd, (yyval.infoexpr).opnd);
                            break;
                    }
                }
    break;

  case 150:
#line 807 "lab06.y"
    {
                    if  ((yyvsp[(1) - (1)].infovar).simb != NULL)  {
                        (yyvsp[(1) - (1)].infovar).simb->ref  =  VERDADE;
                        (yyval.infoexpr).tipo = (yyvsp[(1) - (1)].infovar).simb->tvar;
                        (yyval.infoexpr).opnd = (yyvsp[(1) - (1)].infovar).opnd;
                    }
                }
    break;

  case 151:
#line 814 "lab06.y"
    {
                    printf ("%d ", (yyvsp[(1) - (1)].valor)); (yyval.infoexpr).tipo = INTEIRO;
                    (yyval.infoexpr).opnd.tipo = INTOPND;
                    (yyval.infoexpr).opnd.atr.valint = (yyvsp[(1) - (1)].valor);
                }
    break;

  case 152:
#line 819 "lab06.y"
    {
                    printf ("%g ", (yyvsp[(1) - (1)].valreal)); (yyval.infoexpr).tipo = REAL;
                    (yyval.infoexpr).opnd.tipo = REALOPND;
                    (yyval.infoexpr).opnd.atr.valfloat = (yyvsp[(1) - (1)].valreal);
                }
    break;

  case 153:
#line 824 "lab06.y"
    {
                    printf ("\'%c\' ", (yyvsp[(1) - (1)].carac)); (yyval.infoexpr).tipo = CARACTERE;
                    (yyval.infoexpr).opnd.tipo = CHAROPND;
                    (yyval.infoexpr).opnd.atr.valchar = (yyvsp[(1) - (1)].carac);
                }
    break;

  case 154:
#line 829 "lab06.y"
    {
                    printf ("true "); (yyval.infoexpr).tipo = LOGICO;
                    (yyval.infoexpr).opnd.tipo = LOGICOPND;
                    (yyval.infoexpr).opnd.atr.vallogic = 1;
                }
    break;

  case 155:
#line 834 "lab06.y"
    {
                    printf ("false "); (yyval.infoexpr).tipo = LOGICO;
                    (yyval.infoexpr).opnd.tipo = LOGICOPND;
                    (yyval.infoexpr).opnd.atr.vallogic = 0;
                }
    break;

  case 156:
#line 839 "lab06.y"
    {printf ("~ ");}
    break;

  case 157:
#line 839 "lab06.y"
    {
                    if ((yyvsp[(3) - (3)].infoexpr).tipo != INTEIRO && (yyvsp[(3) - (3)].infoexpr).tipo != REAL && (yyvsp[(3) - (3)].infoexpr).tipo != CARACTERE)
                        Incompatibilidade  ("Operando improprio para menos unario");
                    if ((yyvsp[(3) - (3)].infoexpr).tipo == REAL) (yyval.infoexpr).tipo = REAL;
                    else (yyval.infoexpr).tipo = INTEIRO;
                    (yyval.infoexpr).opnd.tipo = VAROPND;
                    (yyval.infoexpr).opnd.atr.simb = NovaTemp ((yyval.infoexpr).tipo);
                    GeraQuadrupla  (OPMENUN, (yyvsp[(3) - (3)].infoexpr).opnd, opndidle, (yyval.infoexpr).opnd);
                }
    break;

  case 158:
#line 848 "lab06.y"
    {printf ("( ");}
    break;

  case 159:
#line 848 "lab06.y"
    {
                    printf (") "); (yyval.infoexpr).tipo = (yyvsp[(3) - (4)].infoexpr).tipo;
                    (yyval.infoexpr).opnd = (yyvsp[(3) - (4)].infoexpr).opnd;
                }
    break;

  case 161:
#line 854 "lab06.y"
    {
                    printf ("%s ", (yyvsp[(1) - (1)].string));
                    simb = ProcuraSimbParaUsar ((yyvsp[(1) - (1)].string), escopo);
                    if (simb == NULL)
                        NaoDeclarado ((yyvsp[(1) - (1)].string));
                    else if (simb->tid != IDVAR)
                        TipoInadequado ((yyvsp[(1) - (1)].string));
                    (yyval.infovar).simb = simb;
                    if ((yyval.infovar).simb != NULL)
                        if ((yyval.infovar).simb->array == VERDADE)
                            Esperado ("Subscrito\(s)");
                        (yyval.infovar).opnd.tipo = VAROPND;
                        (yyval.infovar).opnd.atr.simb = (yyval.infovar).simb;
                }
    break;

  case 162:
#line 868 "lab06.y"
    {
                    printf ("%s [ ", (yyvsp[(1) - (2)].string));
                    simb = ProcuraSimbParaUsar ((yyvsp[(1) - (2)].string), escopo);
                    if (simb == NULL)
                        NaoDeclarado ((yyvsp[(1) - (2)].string));
                    else if (simb->tid != IDVAR)
                        TipoInadequado ((yyvsp[(1) - (2)].string));
                    (yyval.simb) = simb;
                }
    break;

  case 163:
#line 877 "lab06.y"
    {
                    printf ("] "); (yyval.infovar).simb = (yyvsp[(3) - (5)].simb);
                    if ((yyval.infovar).simb != NULL)
                        if ((yyval.infovar).simb->array == FALSO)
                            NaoEsperado ("Subscrito\(s)");
                        else if ((yyval.infovar).simb->ndims != (yyvsp[(4) - (5)].nsubscr))
                            Incompatibilidade ("Numero de subscritos incompativel com declaracao");
                }
    break;

  case 164:
#line 886 "lab06.y"
    {
                    if ((yyvsp[(1) - (1)].infoexpr).tipo != INTEIRO && (yyvsp[(1) - (1)].infoexpr).tipo != CARACTERE)
                        Incompatibilidade ("Tipo inadequado para subscrito");
                    (yyval.nsubscr) = 1;
                }
    break;

  case 165:
#line 891 "lab06.y"
    {printf (", ");}
    break;

  case 166:
#line 891 "lab06.y"
    {
                    if ((yyvsp[(4) - (4)].infoexpr).tipo != INTEIRO && (yyvsp[(4) - (4)].infoexpr).tipo != CARACTERE)
                        Incompatibilidade ("Tipo inadequado para subscrito");
                    (yyval.nsubscr) = (yyvsp[(1) - (4)].nsubscr) + 1;
                }
    break;

  case 167:
#line 897 "lab06.y"
    {
                    printf ("%s", (yyvsp[(1) - (1)].string));
                    simb = ProcuraSimbParaUsar ((yyvsp[(1) - (1)].string), escopo);
                    if (simb == NULL) NaoDeclarado ((yyvsp[(1) - (1)].string));
                    else if (simb->tid != IDFUNC) TipoInadequado ((yyvsp[(1) - (1)].string));
                    (yyval.simb) = simb;
		        }
    break;

  case 168:
#line 904 "lab06.y"
    {printf ("\(");}
    break;

  case 169:
#line 905 "lab06.y"
    {
                    (yyval.infoexpr).tipo = (yyvsp[(2) - (5)].simb)->tvar;
                }
    break;

  case 170:
#line 909 "lab06.y"
    {printf (")"); }
    break;

  case 171:
#line 910 "lab06.y"
    {printf (")"); }
    break;


/* Line 1267 of yacc.c.  */
#line 2915 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 912 "lab06.y"


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

/* Funcoes para o interpretador */

void InterpCodIntermed () {
    quadrupla quad, quadprox; char encerra;
    char condicao;
    printf("\n\nINTERPRETADOR:\n");
    InicPilhaOpnd (&pilhaopnd);
    encerra = FALSO;
    quad = codintermed->prox->listquad->prox;
    finput = fopen ("entrada2015", "r");
    while(!encerra){
        printf("\n%4d) %s", quad->num,
                nomeoperquad[quad->oper]);
        quadprox = quad->prox;
        switch(quad->oper){
            case OPEXIT:
                encerra = VERDADE;
                printf("\n\t\tPrograma encerrado");
                break;
            case OPENMOD:
                AlocaVariaveis();
                break;
            case PARAM:
                EmpilharOpnd (quad->opnd1, &pilhaopnd);
                break;
            case  OPWRITE:
                ExecQuadWrite (quad);
                break;
            case OPMAIS:
                ExecQuadMais (quad);
                break;
            case OPATRIB:
                ExecQuadAtrib (quad);
                break;
            case OPJUMP:
                quadprox = quad->result.atr.rotulo;
                break;
            case OPJF:
                if (quad->opnd1.tipo == LOGICOPND)
                    condicao = quad->opnd1.atr.vallogic;
                if (quad->opnd1.tipo == VAROPND)
                    condicao = *(quad->opnd1.atr.simb->vallogic);
                if (! condicao)
                    quadprox = quad->result.atr.rotulo;
                break;
            case OPLT:
                ExecQuadLT (quad);
                break;
            case  OPREAD:
                ExecQuadRead (quad);
                break;
        }
        if(!encerra) quad = quadprox;
    }
    
    printf("\n");
}

void AlocaVariaveis () {
    simbolo s; int nelemaloc, i, j;
    printf("\n\t\tAlocando as variaveis:");
    for(i = 0; i < NCLASSHASH; i++)
    if(tabsimb[i]){
        for (s = tabsimb[i]; s != NULL; s = s->prox){
            if (s->tid == IDVAR) {
                nelemaloc = 1;
                if (s->array)
                    for (j = 1; j <= s->ndims; j++)  nelemaloc *= s->dims[j];
                switch (s->tvar) {
                    case INTEIRO:
                        s->valint = malloc (nelemaloc * sizeof (int)); break;
                    case REAL:
                        s->valfloat = malloc (nelemaloc * sizeof (float)); break;
                    case CARACTERE:
                        s->valchar = malloc (nelemaloc * sizeof (char)); break;
                    case LOGICO:
                        s->vallogic = malloc (nelemaloc * sizeof (char)); break;
                }
                printf ("\n\t\t\t%s: %d elemento(s) alocado(s) ", s->cadeia, nelemaloc);
            }
        }
    }
}

void ExecQuadWrite (quadrupla quad){
    int i;
    operando opndaux;
    pilhaoperando pilhaopndaux;
    
    printf ("\n\t\tEscrevendo: \n\n");
    InicPilhaOpnd (&pilhaopndaux);
    for (i = 1; i <= quad->opnd1.atr.valint; i++) {
        EmpilharOpnd (TopoOpnd (pilhaopnd), &pilhaopndaux);
        DesempilharOpnd (&pilhaopnd);
    }
    for (i = 1; i <= quad->opnd1.atr.valint; i++) {
        opndaux = TopoOpnd (pilhaopndaux);
        DesempilharOpnd (&pilhaopndaux);
        switch (opndaux.tipo) {
            case INTOPND:
                printf ("%d", opndaux.atr.valint);
                break;
            case REALOPND:
                printf ("%g", opndaux.atr.valfloat);
                break;
            case CHAROPND:
                printf ("%c", opndaux.atr.valchar);
                break;
            case LOGICOPND:
                if (opndaux.atr.vallogic == 1)
                    printf ("TRUE");
                else
                    printf ("FALSE");
                break;
            case CADOPND:
                printf ("%s", opndaux.atr.valcad);
                break;
            case VAROPND:
                switch (opndaux.atr.simb->tvar) {
                    case INTEIRO:
                        printf ("%d", *(opndaux.atr.simb->valint));
                        break;
                    case REAL:
                        printf ("%g", *(opndaux.atr.simb->valfloat));
                        break;
                    case LOGICO:
                        if (*(opndaux.atr.simb->vallogic) == 1)
                            printf ("TRUE");
                        else
                            printf ("FALSE");
                        break;
                    case CARACTERE:
                        printf ("%c", *(opndaux.atr.simb->valchar));
                        break;
                }
                break;
        }
    }
    printf ("\n");
}

void ExecQuadMais (quadrupla quad){
    int tipo1, tipo2, valint1, valint2;
    float valfloat1, valfloat2;
    switch (quad->opnd1.tipo) {
        case INTOPND:
            tipo1 = INTOPND;
            valint1 = quad->opnd1.atr.valint;
            break;
        case REALOPND:
            tipo1 = REALOPND;
            valfloat1 = quad->opnd1.atr.valfloat;
            break;
        case CHAROPND:
            tipo1 = INTOPND;
            valint1 = quad->opnd1.atr.valchar;
            break;
        case VAROPND:
            switch (quad->opnd1.atr.simb->tvar) {
                case INTEIRO:
                    tipo1 = INTOPND;
                    valint1 = *(quad->opnd1.atr.simb->valint);
                    break;
                case REAL:
                    tipo1 = REALOPND;
                    valfloat1 = *(quad->opnd1.atr.simb->valfloat);
                    break;
                case CARACTERE:
                    tipo1 = INTOPND;
                    valint1 = *(quad->opnd1.atr.simb->valchar);
                    break;
            }
            break;
    }
    switch (quad->opnd2.tipo) {
        case INTOPND:
            tipo2 = INTOPND;
            valint2 = quad->opnd2.atr.valint;
            break;
        case REALOPND:
            tipo2 = REALOPND;
            valfloat2 = quad->opnd2.atr.valfloat;
            break;
        case CHAROPND:
            tipo2 = INTOPND;
            valint2 = quad->opnd2.atr.valchar;
            break;
        case VAROPND:
            switch (quad->opnd2.atr.simb->tvar) {
                case INTEIRO:
                    tipo2 = INTOPND;
                    valint2 = *(quad->opnd2.atr.simb->valint);
                    break;
                case REAL:
                    tipo2 = REALOPND;
                    valfloat2 = *(quad->opnd2.atr.simb->valfloat);
                    break;
                case CARACTERE:
                    tipo2 = INTOPND;
                    valint2 = *(quad->opnd2.atr.simb->valchar);
                    break;
            }
            break;
    }
    switch (quad->result.atr.simb->tvar) {
        case INTEIRO:
            *(quad->result.atr.simb->valint) = valint1 + valint2;
            break;
        case REAL:
            if (tipo1 == INTOPND && tipo2 == INTOPND)
                *(quad->result.atr.simb->valfloat) = valint1 + valint2;
            if (tipo1 == INTOPND && tipo2 == REALOPND)
                *(quad->result.atr.simb->valfloat) = valint1 + valfloat2;
            if (tipo1 == REALOPND && tipo2 == INTOPND)
                *(quad->result.atr.simb->valfloat) = valfloat1 + valint2;
            if (tipo1 == REALOPND && tipo2 == REALOPND)
                *(quad->result.atr.simb->valfloat) = valfloat1 + valfloat2;
            break;
    }
}

void ExecQuadLT (quadrupla quad){
    int tipo1, tipo2, valint1, valint2;
    float valfloat1, valfloat2;
    switch (quad->opnd1.tipo) {
        case INTOPND:
            tipo1 = INTOPND;
            valint1 = quad->opnd1.atr.valint;
            break;
        case REALOPND:
            tipo1 = REALOPND;
            valfloat1 = quad->opnd1.atr.valfloat;
            break;
        case CHAROPND:
            tipo1 = INTOPND;
            valint1 = quad->opnd1.atr.valchar;
            break;
        case VAROPND:
            switch (quad->opnd1.atr.simb->tvar) {
                case INTEIRO:
                    tipo1 = INTOPND;
                    valint1 = *(quad->opnd1.atr.simb->valint);
                    break;
                case REAL:
                    tipo1 = REALOPND;
                    valfloat1 = *(quad->opnd1.atr.simb->valfloat);
                    break;
                case CARACTERE:
                    tipo1 = INTOPND;
                    valint1 = *(quad->opnd1.atr.simb->valchar);
                    break;
            }
            break;
    }
    switch (quad->opnd2.tipo) {
        case INTOPND:
            tipo2 = INTOPND;
            valint2 = quad->opnd2.atr.valint;
            break;
        case REALOPND:
            tipo2 = REALOPND;
            valfloat2 = quad->opnd2.atr.valfloat;
            break;
        case CHAROPND:
            tipo2 = INTOPND;
            valint2 = quad->opnd2.atr.valchar;
            break;
        case VAROPND:
            switch (quad->opnd2.atr.simb->tvar) {
                case INTEIRO:
                    tipo2 = INTOPND;
                    valint2 = *(quad->opnd2.atr.simb->valint);
                    break;
                case REAL:
                    tipo2 = REALOPND;
                    valfloat2 = *(quad->opnd2.atr.simb->valfloat);
                    break;
                case CARACTERE:
                    tipo2 = INTOPND;
                    valint2 = *(quad->opnd2.atr.simb->valchar);
                    break;
            }
            break;
    }
    if (tipo1 == INTOPND && tipo2 == INTOPND)
        *(quad->result.atr.simb->vallogic) = valint1 < valint2;
    if (tipo1 == INTOPND && tipo2 == REALOPND)
        *(quad->result.atr.simb->vallogic) = valint1 < valfloat2;
    if (tipo1 == REALOPND && tipo2 == INTOPND)
        *(quad->result.atr.simb->vallogic) = valfloat1 < valint2;
    if (tipo1 == REALOPND && tipo2 == REALOPND)
        *(quad->result.atr.simb->vallogic) = valfloat1 < valfloat2;
}

void ExecQuadAtrib (quadrupla quad){
    int tipo1, valint1;
    float valfloat1;
    char valchar1, vallogic1;
    printf("\n\t\tFoi atribuido o valor ");
    switch (quad->opnd1.tipo) {
        case INTOPND:
            tipo1 = INTOPND;
            valint1 = quad->opnd1.atr.valint;
            printf("INTEIRO %d para a variavel %s", quad->opnd1.atr.valint, quad->result.atr.simb->cadeia);
            break;
        case REALOPND:
            tipo1 = REALOPND;
            valfloat1 = quad->opnd1.atr.valfloat;
            printf("REAL %g para a variavel %s", quad->opnd1.atr.valfloat, quad->result.atr.simb->cadeia);
            break;
        case CHAROPND:
            tipo1 = CHAROPND;
            valchar1 = quad->opnd1.atr.valchar;
            printf("CARACTERE %c para a variavel %s", quad->opnd1.atr.valchar, quad->result.atr.simb->cadeia);
            break;
        case LOGICOPND:
            tipo1 = LOGICOPND;
            vallogic1 = quad->opnd1.atr.vallogic;
            printf("LOGICO %d para a variavel %s", quad->opnd1.atr.vallogic, quad->result.atr.simb->cadeia);
            break;
        case VAROPND:
            switch (quad->opnd1.atr.simb->tvar) {
				case INTEIRO:
                    tipo1 = INTOPND;
                    valint1 = *(quad->opnd1.atr.simb->valint);
                    printf("INTEIRO contido em %s para a variavel %s", quad->opnd1.atr.simb->cadeia, quad->result.atr.simb->cadeia);
                    break;
                case REAL:
                    tipo1 = REALOPND;
                    valfloat1 = *(quad->opnd1.atr.simb->valfloat);
                    printf("REAL contido em %s para a variavel %s", quad->opnd1.atr.simb->cadeia, quad->result.atr.simb->cadeia);
                    break;
                case CARACTERE:
                    tipo1 = CHAROPND;
                    valchar1 = *(quad->opnd1.atr.simb->valchar);
                    printf("CARACTERE contido em %s para a variavel %s", quad->opnd1.atr.simb->cadeia, quad->result.atr.simb->cadeia);
                    break;
                case LOGICO:
                    tipo1 = LOGICOPND;
                    vallogic1 = *(quad->opnd1.atr.simb->vallogic);
                    printf("LOGICO contido em %s para a variavel %s", quad->opnd1.atr.simb->cadeia, quad->result.atr.simb->cadeia);
                    break;
            }
            break;
    }
    switch (quad->result.atr.simb->tvar) {
        case INTEIRO:
            if (tipo1 == INTOPND)
                *(quad->result.atr.simb->valint) = valint1;
            if (tipo1 == CHAROPND)
                *(quad->result.atr.simb->valint) = valchar1;
            break;
        case CARACTERE:
            if (tipo1 == INTOPND)
                *(quad->result.atr.simb->valchar) = valint1;
            if (tipo1==CHAROPND)
                *(quad->result.atr.simb->valchar) = valchar1;
            break;
        case LOGICO:
            *(quad->result.atr.simb->vallogic) = vallogic1;
            break;
        case REAL:
            if (tipo1 == INTOPND)
                *(quad->result.atr.simb->valfloat) = valint1;
            if (tipo1 == REALOPND)
                *(quad->result.atr.simb->valfloat) = valfloat1;
            if (tipo1 == CHAROPND)
                *(quad->result.atr.simb->valfloat) = valchar1;
            break;
    }
}

void ExecQuadRead (quadrupla quad){
    int i;
    operando opndaux;
    pilhaoperando pilhaopndaux;
    printf ("\n\t\tLendo: \n");
    InicPilhaOpnd (&pilhaopndaux);
    for (i = 1; i <= quad->opnd1.atr.valint; i++) {
        EmpilharOpnd (TopoOpnd (pilhaopnd), &pilhaopndaux);
        DesempilharOpnd (&pilhaopnd);
    }
    for (i = 1; i <= quad->opnd1.atr.valint; i++) {
        opndaux = TopoOpnd (pilhaopndaux);
        DesempilharOpnd (&pilhaopndaux);
        switch (opndaux.atr.simb->tvar) {
            case INTEIRO:
                fscanf (finput, "%d", opndaux.atr.simb->valint);
                break;
            case REAL:
                fscanf (finput, "%g", opndaux.atr.simb->valfloat);
                break;
            case LOGICO:
                fscanf (finput, "%d", opndaux.atr.simb->vallogic);
                break;
            case CARACTERE:
                fscanf (finput, "%c", opndaux.atr.simb->valchar);
                break;
        }
    }
}

void EmpilharOpnd (operando x, pilhaoperando *P) {
    nohopnd *temp;
    temp = *P;
    *P = (nohopnd *) malloc (sizeof (nohopnd));
    (*P)->opnd = x; (*P)->prox = temp;
}

void DesempilharOpnd (pilhaoperando *P) {
    nohopnd *temp;
    if (! VaziaOpnd (*P)) {
        temp = *P;  *P = (*P)->prox; free (temp);
    }
    else  printf ("\n\tDelecao em pilha vazia\n");
}

operando TopoOpnd (pilhaoperando P) {
    if (! VaziaOpnd (P))  return P->opnd;
    else  printf ("\n\tTopo de pilha vazia\n");
}

void InicPilhaOpnd (pilhaoperando *P) {
    *P = NULL;
}

char VaziaOpnd (pilhaoperando P) {
    if  (P == NULL)  return 1;
    else return 0;
}

