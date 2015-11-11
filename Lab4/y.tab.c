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
#line 1 "lab04.y"

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
simbolo ProcuraSimb (char *, simbolo); // NOTE what about escopo?
void DeclaracaoRepetida (char *);
void TipoInadequado (char *);
void NaoDeclarado (char *);
void VerificaInicRef (void);
void Incompatibilidade (char *);
void Esperado(char*);
void NaoEsperado(char*);
void InsereListSimb(simbolo, listsimb);



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
#line 113 "lab04.y"
{
    char string[50];
    int atr, valor;
    float valreal;
    char carac;
    simbolo simb;
    int tipoexpr;
    int nsubscr;    
}
/* Line 193 of yacc.c.  */
#line 320 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 333 "y.tab.c"

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
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  117
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

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
       0,     0,     3,     4,     5,     6,    17,    18,    19,    20,
      27,    29,    30,    34,    38,    40,    42,    44,    46,    48,
      49,    54,    56,    57,    63,    65,    69,    70,    73,    76,
      78,    80,    81,    82,    83,    92,    94,    95,    99,   100,
     101,   102,   110,   112,   113,   117,   119,   120,   125,   128,
     131,   132,   133,   134,   141,   142,   146,   147,   151,   152,
     157,   158,   159,   163,   165,   167,   169,   171,   173,   175,
     177,   179,   181,   183,   185,   186,   187,   188,   197,   198,
     199,   203,   204,   205,   212,   213,   214,   222,   223,   224,
     225,   226,   227,   243,   244,   245,   246,   255,   257,   258,
     263,   264,   265,   266,   275,   277,   278,   283,   285,   287,
     288,   289,   290,   298,   301,   303,   304,   308,   309,   313,
     314,   319,   320,   321,   328,   330,   331,   336,   338,   339,
     344,   346,   347,   352,   354,   355,   359,   361,   362,   367,
     369,   370,   375,   377,   378,   383,   385,   387,   389,   391,
     393,   395,   396,   400,   401,   406,   408,   410,   411,   417,
     419,   420,   425,   426,   427,   433,   435
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      54,     0,    -1,    -1,    -1,    -1,    20,    55,    29,    56,
      47,    57,    58,    70,    92,    48,    -1,    -1,    -1,    -1,
      11,    59,    45,    60,    61,    46,    -1,    63,    -1,    -1,
      61,    62,    63,    -1,    64,    65,    49,    -1,    14,    -1,
       8,    -1,     4,    -1,    16,    -1,    67,    -1,    -1,    65,
      50,    66,    67,    -1,    29,    -1,    -1,    29,    43,    68,
      69,    44,    -1,    30,    -1,    69,    50,    30,    -1,    -1,
      70,    71,    -1,    72,    88,    -1,    73,    -1,    79,    -1,
      -1,    -1,    -1,    64,    10,    74,    29,    75,    41,    76,
      77,    -1,    42,    -1,    -1,    78,    85,    42,    -1,    -1,
      -1,    -1,    19,    80,    29,    81,    41,    82,    83,    -1,
      42,    -1,    -1,    84,    85,    42,    -1,    87,    -1,    -1,
      85,    50,    86,    87,    -1,    64,    29,    -1,    89,    94,
      -1,    -1,    -1,    -1,    15,    90,    45,    91,    61,    46,
      -1,    -1,    17,    93,    88,    -1,    -1,    24,    95,    96,
      -1,    -1,    45,    97,    98,    46,    -1,    -1,    -1,    98,
      99,   100,    -1,    96,    -1,   101,    -1,   107,    -1,   110,
      -1,   113,    -1,   119,    -1,   125,    -1,   142,    -1,   132,
      -1,   139,    -1,    49,    -1,    -1,    -1,    -1,    12,   102,
     147,    25,   103,   100,   104,   105,    -1,    -1,    -1,     6,
     106,   100,    -1,    -1,    -1,    27,   108,   147,     5,   109,
     100,    -1,    -1,    -1,    22,   111,   100,    27,   112,   147,
      49,    -1,    -1,    -1,    -1,    -1,    -1,     9,   114,   162,
      13,   115,   147,    27,   116,   147,    18,   117,   147,     5,
     118,   100,    -1,    -1,    -1,    -1,    21,   120,    41,   121,
     123,    42,   122,    49,    -1,   162,    -1,    -1,   123,    50,
     124,   162,    -1,    -1,    -1,    -1,    28,   126,    41,   127,
     129,    42,   128,    49,    -1,   131,    -1,    -1,   129,    50,
     130,   131,    -1,    33,    -1,   147,    -1,    -1,    -1,    -1,
       3,   133,    29,   134,    41,   135,   136,    -1,   145,   137,
      -1,   137,    -1,    -1,    42,   138,    49,    -1,    -1,    23,
     140,    49,    -1,    -1,    23,   141,   147,    49,    -1,    -1,
      -1,   162,   143,    51,   144,   147,    49,    -1,   147,    -1,
      -1,   145,    50,   146,   147,    -1,   149,    -1,    -1,   147,
      34,   148,   149,    -1,   151,    -1,    -1,   149,    35,   150,
     151,    -1,   153,    -1,    -1,    36,   152,   153,    -1,   155,
      -1,    -1,   155,    37,   154,   155,    -1,   157,    -1,    -1,
     155,    38,   156,   157,    -1,   159,    -1,    -1,   157,    39,
     158,   159,    -1,   162,    -1,    30,    -1,    31,    -1,    32,
      -1,    26,    -1,     7,    -1,    -1,    40,   160,   159,    -1,
      -1,    41,   161,   147,    42,    -1,   166,    -1,    29,    -1,
      -1,    29,    43,   163,   164,    44,    -1,   155,    -1,    -1,
     164,    50,   165,   155,    -1,    -1,    -1,    29,   167,    41,
     168,   169,    -1,    42,    -1,   145,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   192,   192,   193,   194,   192,   206,   207,   208,   207,
     212,   213,   213,   215,   217,   218,   219,   220,   222,   224,
     223,   227,   232,   232,   238,   241,   245,   246,   248,   250,
     251,   254,   255,   261,   253,   264,   265,   265,   267,   268,
     274,   267,   277,   278,   278,   280,   282,   281,   285,   288,
     291,   292,   293,   292,   297,   297,   300,   300,   303,   303,
     307,   308,   308,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   322,   324,   325,   322,   328,   329,
     329,   332,   334,   332,   337,   339,   337,   343,   345,   347,
     349,   351,   343,   354,   355,   357,   354,   360,   362,   361,
     365,   366,   368,   365,   371,   373,   372,   376,   377,   379,
     380,   381,   379,   384,   385,   387,   387,   390,   390,   392,
     392,   396,   399,   396,   410,   412,   411,   415,   416,   416,
     422,   423,   423,   429,   430,   430,   436,   437,   437,   460,
     461,   461,   473,   474,   474,   496,   502,   503,   504,   505,
     506,   507,   507,   513,   513,   515,   517,   534,   534,   556,
     561,   561,   567,   574,   567,   577,   578
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
  "$accept", "Prog", "@1", "@2", "@3", "GlobDecls", "@4", "@5", "DeclList",
  "@6", "Declaration", "Type", "ElemList", "@7", "Elem", "@8", "DimList",
  "ModList", "Module", "ModHeader", "FuncHeader", "@9", "@10", "@11",
  "FuncHd", "@12", "ProcHeader", "@13", "@14", "@15", "ProcEnd", "@16",
  "ParamList", "@17", "Parameter", "ModBody", "LocDecls", "@18", "@19",
  "MainMod", "@20", "Stats", "@21", "CompStat", "@22", "StatList", "@23",
  "Statement", "IfStat", "@24", "@25", "@26", "ElseStat", "@27",
  "WhileStat", "@28", "@29", "RepeatStat", "@30", "@31", "ForStat", "@32",
  "@33", "@34", "@35", "@36", "ReadStat", "@37", "@38", "@39", "ReadList",
  "@40", "WriteStat", "@41", "@42", "@43", "WriteList", "@44", "WriteElem",
  "CallStat", "@45", "@46", "@47", "CallCompl", "CallFinish", "@48",
  "ReturnStat", "@49", "@50", "AssignStat", "@51", "@52", "ExprList",
  "@53", "Expression", "@54", "AuxExpr1", "@55", "AuxExpr2", "@56",
  "AuxExpr3", "@57", "AuxExpr4", "@58", "Term", "@59", "Factor", "@60",
  "@61", "Variable", "@62", "SubscrList", "@63", "FuncCall", "@64", "@65",
  "FuncTerm", 0
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
       0,    53,    55,    56,    57,    54,    58,    59,    60,    58,
      61,    62,    61,    63,    64,    64,    64,    64,    65,    66,
      65,    67,    68,    67,    69,    69,    70,    70,    71,    72,
      72,    74,    75,    76,    73,    77,    78,    77,    80,    81,
      82,    79,    83,    84,    83,    85,    86,    85,    87,    88,
      89,    90,    91,    89,    93,    92,    95,    94,    97,    96,
      98,    99,    98,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   102,   103,   104,   101,   105,   106,
     105,   108,   109,   107,   111,   112,   110,   114,   115,   116,
     117,   118,   113,   120,   121,   122,   119,   123,   124,   123,
     126,   127,   128,   125,   129,   130,   129,   131,   131,   133,
     134,   135,   132,   136,   136,   138,   137,   140,   139,   141,
     139,   143,   144,   142,   145,   146,   145,   147,   148,   147,
     149,   150,   149,   151,   152,   151,   153,   154,   153,   155,
     156,   155,   157,   158,   157,   159,   159,   159,   159,   159,
     159,   160,   159,   161,   159,   159,   162,   163,   162,   164,
     165,   164,   167,   168,   166,   169,   169
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,    10,     0,     0,     0,     6,
       1,     0,     3,     3,     1,     1,     1,     1,     1,     0,
       4,     1,     0,     5,     1,     3,     0,     2,     2,     1,
       1,     0,     0,     0,     8,     1,     0,     3,     0,     0,
       0,     7,     1,     0,     3,     1,     0,     4,     2,     2,
       0,     0,     0,     6,     0,     3,     0,     3,     0,     4,
       0,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     0,     8,     0,     0,
       3,     0,     0,     6,     0,     0,     7,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     8,     1,     0,     4,
       0,     0,     0,     8,     1,     0,     4,     1,     1,     0,
       0,     0,     7,     2,     1,     0,     3,     0,     3,     0,
       4,     0,     0,     6,     1,     0,     4,     1,     0,     4,
       1,     0,     4,     1,     0,     3,     1,     0,     4,     1,
       0,     4,     1,     0,     4,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     4,     1,     1,     0,     5,     1,
       0,     4,     0,     0,     5,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     3,     0,     4,     6,     7,
      26,     0,     0,     8,    16,    15,    14,    17,    54,    38,
       0,    27,    50,    29,    30,     0,     0,    50,     0,    31,
      51,    28,     0,     5,    11,    10,     0,    55,    39,     0,
       0,    56,    49,     9,     0,    21,     0,    18,     0,    32,
      52,     0,    12,    22,    13,    19,    40,     0,     0,    58,
      57,     0,     0,    43,    33,    11,    60,    24,     0,    20,
      42,    41,     0,    36,    53,    61,    23,     0,     0,     0,
      45,    35,    34,     0,    59,     0,    25,    48,    44,    46,
       0,   109,    87,    74,    93,    84,   119,    81,   100,   156,
      73,    63,    62,    64,    65,    66,    67,    68,    69,    71,
      72,    70,   121,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,     0,    47,   110,     0,   150,
     149,   156,   146,   147,   148,   134,   151,   153,     0,   127,
     130,   133,   136,   139,   142,   145,   155,    94,     0,   118,
       0,     0,   101,     0,   122,     0,    88,     0,     0,     0,
       0,    75,   128,   131,   137,   140,   143,     0,    85,   120,
      82,     0,   159,     0,     0,   111,     0,   163,   135,   152,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,   107,     0,   104,   108,   158,   160,     0,     0,     0,
       0,   154,    76,   129,   132,   138,   141,   144,    95,    98,
       0,    83,   102,   105,     0,   123,   115,   112,   114,     0,
     124,    89,   165,     0,   164,    78,     0,     0,    86,     0,
       0,   161,     0,   125,   113,     0,   166,    79,    77,    96,
      99,   103,   106,   116,     0,     0,     0,   126,    90,    80,
       0,     0,    91,     0,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     8,    10,    11,    26,    34,    44,
      35,    36,    46,    62,    47,    61,    68,    12,    21,    22,
      23,    39,    57,    73,    82,    83,    24,    28,    48,    63,
      71,    72,    79,   113,    80,    31,    32,    40,    58,    25,
      27,    42,    51,   101,    66,    75,    85,   102,   103,   117,
     181,   225,   238,   246,   104,   122,   190,   105,   119,   189,
     106,   116,   176,   235,   250,   253,   107,   118,   167,   226,
     187,   227,   108,   123,   171,   229,   192,   230,   193,   109,
     115,   155,   198,   217,   218,   232,   110,   120,   121,   111,
     125,   174,   219,   244,   194,   182,   139,   183,   140,   158,
     141,   184,   142,   185,   143,   186,   144,   159,   160,   145,
     153,   173,   214,   146,   157,   200,   224
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -158
static const yytype_int16 yypact[] =
{
      -5,  -158,    35,    11,  -158,  -158,     7,  -158,    58,  -158,
    -158,    14,     9,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
      73,  -158,    56,  -158,  -158,    47,    37,    56,    69,  -158,
    -158,  -158,    87,  -158,    53,  -158,    83,  -158,  -158,    84,
      88,  -158,  -158,  -158,    37,    80,     8,  -158,    86,  -158,
    -158,   100,  -158,  -158,  -158,  -158,  -158,   111,    37,  -158,
    -158,   127,    83,   116,  -158,   113,  -158,  -158,    50,  -158,
    -158,  -158,    37,   120,  -158,   117,  -158,   136,   138,   -31,
    -158,  -158,  -158,    37,  -158,    21,  -158,  -158,  -158,  -158,
     -28,  -158,  -158,  -158,  -158,  -158,   121,  -158,  -158,   126,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,    37,  -158,   142,   143,   124,   132,    21,
     125,   124,   124,   134,  -158,   128,  -158,  -158,   163,  -158,
    -158,   -25,  -158,  -158,  -158,  -158,  -158,  -158,    27,   145,
    -158,  -158,   109,   139,  -158,  -158,  -158,  -158,   150,  -158,
     -22,     4,  -158,    48,  -158,   140,  -158,   141,    48,    48,
     124,  -158,  -158,  -158,  -158,  -158,  -158,   143,  -158,  -158,
    -158,   108,   146,    82,   124,  -158,   124,  -158,  -158,  -158,
      22,    21,   124,   124,    48,    48,    48,    31,  -158,   124,
      21,  -158,    74,  -158,   149,  -158,  -158,   -13,    61,    95,
      78,  -158,  -158,   145,  -158,   146,   139,  -158,  -158,  -158,
      -2,  -158,  -158,  -158,    48,  -158,  -158,  -158,  -158,    75,
     149,  -158,  -158,   101,  -158,   179,   137,   143,  -158,   144,
     108,   146,   147,  -158,  -158,   124,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,   124,   -14,    21,   149,  -158,  -158,
     124,     5,  -158,    21,  -158
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,   129,  -158,
     148,    -7,  -158,  -158,   133,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,   105,  -158,    76,   164,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,   151,  -158,  -158,  -158,  -118,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,   -40,  -158,
    -158,  -158,  -158,  -158,   -21,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,    -6,  -158,  -114,  -158,    15,  -158,    16,  -158,
      42,  -158,  -147,  -158,    18,  -158,  -157,  -158,  -158,   -85,
    -158,  -158,  -158,  -158,  -158,  -158,  -158
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -163
static const yytype_int16 yytable[] =
{
     112,   148,   179,   138,   248,    20,   172,   150,   151,   170,
     252,    88,   162,    14,   114,     1,  -162,    15,   124,    89,
     162,   162,    89,    16,    91,    17,    18,   169,    19,   207,
      92,   128,   162,    93,   112,     4,   215,   205,   162,   162,
       5,    14,    94,    95,    96,    15,   180,   228,    97,    98,
      99,    16,   161,    17,     7,   129,   162,    54,    55,    13,
     197,   162,   199,   202,   201,    78,    59,   231,   129,     9,
     100,    30,   211,   208,   130,   210,    78,   131,   132,   133,
     134,   209,   188,    29,   220,   129,   220,   130,   136,   137,
     131,   132,   133,   134,    76,    33,   112,   135,    38,    43,
      77,   136,   137,   216,   130,   112,    78,   131,   132,   133,
     134,    41,    45,    49,   135,   129,   212,   216,   136,   137,
     222,   245,   221,    53,   213,   233,   195,    56,   249,   162,
     247,   129,   196,    50,   130,   254,   251,   131,   132,   133,
     134,   191,   240,   236,   135,    59,   164,   165,   136,   137,
     130,   233,    64,   131,   132,   133,   134,    67,    70,    74,
     135,   112,    81,    84,   136,   137,    86,    87,   112,   124,
    -117,   127,    99,   147,   149,   152,   156,   168,   166,   154,
     163,   175,   177,   162,   165,   237,   239,    65,    90,   126,
     242,    37,    52,   241,   223,    69,   243,   203,   234,   204,
     178,     0,    60,   206
};

static const yytype_int16 yycheck[] =
{
      85,   119,   159,   117,    18,    12,   153,   121,   122,     5,
       5,    42,    34,     4,    42,    20,    41,     8,    43,    50,
      34,    34,    50,    14,     3,    16,    17,    49,    19,   186,
       9,   116,    34,    12,   119,     0,    49,   184,    34,    34,
      29,     4,    21,    22,    23,     8,   160,    49,    27,    28,
      29,    14,    25,    16,    47,     7,    34,    49,    50,    45,
     174,    34,   176,   181,    42,    72,    45,   214,     7,    11,
      49,    15,   190,    42,    26,   189,    83,    29,    30,    31,
      32,    50,   167,    10,   198,     7,   200,    26,    40,    41,
      29,    30,    31,    32,    44,    48,   181,    36,    29,    46,
      50,    40,    41,    42,    26,   190,   113,    29,    30,    31,
      32,    24,    29,    29,    36,     7,    42,    42,    40,    41,
      42,   235,    27,    43,    50,    50,    44,    41,   246,    34,
     244,     7,    50,    45,    26,   253,   250,    29,    30,    31,
      32,    33,   227,    42,    36,    45,    37,    38,    40,    41,
      26,    50,    41,    29,    30,    31,    32,    30,    42,    46,
      36,   246,    42,    46,    40,    41,    30,    29,   253,    43,
      49,    29,    29,    41,    49,    41,    13,    27,    39,    51,
      35,    41,    41,    34,    38,     6,    49,    58,    83,   113,
     230,    27,    44,    49,   200,    62,    49,   182,   219,   183,
     158,    -1,    51,   185
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    54,    55,     0,    29,    56,    47,    57,    11,
      58,    59,    70,    45,     4,     8,    14,    16,    17,    19,
      64,    71,    72,    73,    79,    92,    60,    93,    80,    10,
      15,    88,    89,    48,    61,    63,    64,    88,    29,    74,
      90,    24,    94,    46,    62,    29,    65,    67,    81,    29,
      45,    95,    63,    43,    49,    50,    41,    75,    91,    45,
      96,    68,    66,    82,    41,    61,    97,    30,    69,    67,
      42,    83,    84,    76,    46,    98,    44,    50,    64,    85,
      87,    42,    77,    78,    46,    99,    30,    29,    42,    50,
      85,     3,     9,    12,    21,    22,    23,    27,    28,    29,
      49,    96,   100,   101,   107,   110,   113,   119,   125,   132,
     139,   142,   162,    86,    42,   133,   114,   102,   120,   111,
     140,   141,   108,   126,    43,   143,    87,    29,   162,     7,
      26,    29,    30,    31,    32,    36,    40,    41,   147,   149,
     151,   153,   155,   157,   159,   162,   166,    41,   100,    49,
     147,   147,    41,   163,    51,   134,    13,   167,   152,   160,
     161,    25,    34,    35,    37,    38,    39,   121,    27,    49,
       5,   127,   155,   164,   144,    41,   115,    41,   153,   159,
     147,   103,   148,   150,   154,   156,   158,   123,   162,   112,
     109,    33,   129,   131,   147,    44,    50,   147,   135,   147,
     168,    42,   100,   149,   151,   155,   157,   159,    42,    50,
     147,   100,    42,    50,   165,    49,    42,   136,   137,   145,
     147,    27,    42,   145,   169,   104,   122,   124,    49,   128,
     130,   155,   138,    50,   137,   116,    42,     6,   105,    49,
     162,    49,   131,    49,   146,   147,   106,   147,    18,   100,
     117,   147,     5,   118,   100
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
#line 192 "lab04.y"
    {printf ("program ");}
    break;

  case 3:
#line 193 "lab04.y"
    {printf ("%s ", (yyvsp[(3) - (3)].string)); }
    break;

  case 4:
#line 194 "lab04.y"
    {
                    printf ("{{{\n\n");
                    InicTabSimb(); declparam = FALSO;
                    escopo = simb = InsereSimb ("##global", IDGLOB, NAOVAR, NULL);
                    pontvardecl = simb->listvardecl;
                    pontfunc = simb->listfunc;
                }
    break;

  case 5:
#line 204 "lab04.y"
    {printf ("}}}\n"); ImprimeTabSimb();}
    break;

  case 7:
#line 207 "lab04.y"
    {printf ("global ");}
    break;

  case 8:
#line 208 "lab04.y"
    {printf ("{\n"); tab++; tabular();}
    break;

  case 9:
#line 210 "lab04.y"
    {tab--; tabular (); printf ("}\n\n"); }
    break;

  case 11:
#line 213 "lab04.y"
    {tabular();}
    break;

  case 13:
#line 215 "lab04.y"
    {printf (";\n");}
    break;

  case 14:
#line 217 "lab04.y"
    {printf ("int ");}
    break;

  case 15:
#line 218 "lab04.y"
    {printf ("float ");}
    break;

  case 16:
#line 219 "lab04.y"
    {printf ("char ");}
    break;

  case 17:
#line 220 "lab04.y"
    {printf ("logic ");}
    break;

  case 19:
#line 224 "lab04.y"
    {printf (", "); }
    break;

  case 21:
#line 227 "lab04.y"
    { printf ("%s ", (yyvsp[(1) - (1)].string));
                    if  (ProcuraSimb ((yyvsp[(1) - (1)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(1) - (1)].string));
                    else  { simb = InsereSimb ((yyvsp[(1) - (1)].string),  IDVAR,  tipocorrente, escopo);
                            simb->array = FALSO; }
                }
    break;

  case 22:
#line 232 "lab04.y"
    { printf ("%s [ ", (yyvsp[(1) - (2)].string));
                    if  (ProcuraSimb ((yyvsp[(1) - (2)].string), escopo)  !=  NULL) DeclaracaoRepetida ((yyvsp[(1) - (2)].string));
                    else  { simb = InsereSimb ((yyvsp[(1) - (2)].string),  IDVAR,  tipocorrente, escopo);
                            simb->array = VERDADE; simb->ndims = 0; }
                }
    break;

  case 23:
#line 236 "lab04.y"
    {printf ("] ");}
    break;

  case 24:
#line 238 "lab04.y"
    { printf ("%d ", (yyvsp[(1) - (1)].valor));
                    if ((yyvsp[(1) - (1)].valor) <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = (yyvsp[(1) - (1)].valor);}
    break;

  case 25:
#line 241 "lab04.y"
    { printf (", %d ", (yyvsp[(3) - (3)].valor));
                    if ((yyvsp[(3) - (3)].valor) <= 0) Esperado ("Valor inteiro positivo");
                    simb->ndims++; simb->dims[simb->ndims] = (yyvsp[(3) - (3)].valor);}
    break;

  case 31:
#line 254 "lab04.y"
    {printf ("function ");}
    break;

  case 32:
#line 255 "lab04.y"
    {
                    printf ("%s ", (yyvsp[(4) - (4)].string));
                    escopo = simb = InsereSimb ((yyvsp[(4) - (4)].string), IDFUNC, tipocorrente, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
    break;

  case 33:
#line 261 "lab04.y"
    {printf ("\(");}
    break;

  case 35:
#line 264 "lab04.y"
    {printf (")\n");}
    break;

  case 36:
#line 265 "lab04.y"
    {declparam = VERDADE;}
    break;

  case 37:
#line 265 "lab04.y"
    {printf (")\n"); declparam = FALSO;}
    break;

  case 38:
#line 267 "lab04.y"
    {printf ("procedure ");}
    break;

  case 39:
#line 268 "lab04.y"
    {
                    printf ("%s ", (yyvsp[(3) - (3)].string));
                    escopo = simb = InsereSimb ((yyvsp[(3) - (3)].string), IDPROC, tipocorrente, escopo);
                    pontvardecl = simb->listvardecl;
                    pontparam = simb->listparam;
                }
    break;

  case 40:
#line 274 "lab04.y"
    {printf ("\(");}
    break;

  case 42:
#line 277 "lab04.y"
    {printf (")\n"); }
    break;

  case 43:
#line 278 "lab04.y"
    {declparam = VERDADE;}
    break;

  case 44:
#line 278 "lab04.y"
    {printf (")\n"); declparam = FALSO;}
    break;

  case 46:
#line 282 "lab04.y"
    {printf (", ");}
    break;

  case 48:
#line 286 "lab04.y"
    {printf ("%s", (yyvsp[(2) - (2)].string));}
    break;

  case 51:
#line 292 "lab04.y"
    {printf ("local "); }
    break;

  case 52:
#line 293 "lab04.y"
    {printf("{\n"); tab++; tabular();}
    break;

  case 53:
#line 295 "lab04.y"
    {tab--; tabular (); printf ("}\n\n"); }
    break;

  case 54:
#line 297 "lab04.y"
    {printf ("main\n");}
    break;

  case 56:
#line 300 "lab04.y"
    {printf ("statements ");}
    break;

  case 57:
#line 301 "lab04.y"
    {printf ("\n");}
    break;

  case 58:
#line 303 "lab04.y"
    {printf("{\n"); tab++;}
    break;

  case 59:
#line 305 "lab04.y"
    {tab--; tabular (); printf ("}\n"); }
    break;

  case 61:
#line 308 "lab04.y"
    {tabular(); }
    break;

  case 73:
#line 320 "lab04.y"
    {printf (";\n");}
    break;

  case 74:
#line 322 "lab04.y"
    {printf ("if ");}
    break;

  case 75:
#line 324 "lab04.y"
    {printf (" then\n"); tab++; tabular();}
    break;

  case 76:
#line 325 "lab04.y"
    {tab--;}
    break;

  case 79:
#line 329 "lab04.y"
    {tabular(); printf ("else ");}
    break;

  case 81:
#line 332 "lab04.y"
    {printf ("while ");}
    break;

  case 82:
#line 334 "lab04.y"
    {printf (" do ");}
    break;

  case 84:
#line 337 "lab04.y"
    {printf ("repeat ");}
    break;

  case 85:
#line 339 "lab04.y"
    {printf ("while ");}
    break;

  case 86:
#line 341 "lab04.y"
    {printf (";\n");}
    break;

  case 87:
#line 343 "lab04.y"
    {printf ("for ");}
    break;

  case 88:
#line 345 "lab04.y"
    {printf (" init ");}
    break;

  case 89:
#line 347 "lab04.y"
    {printf (" while ");}
    break;

  case 90:
#line 349 "lab04.y"
    {printf (" new ");}
    break;

  case 91:
#line 351 "lab04.y"
    {printf (" do ");}
    break;

  case 93:
#line 354 "lab04.y"
    {printf ("read ");}
    break;

  case 94:
#line 355 "lab04.y"
    {printf ("\(");}
    break;

  case 95:
#line 357 "lab04.y"
    {printf (")"); }
    break;

  case 96:
#line 358 "lab04.y"
    {printf (";\n");}
    break;

  case 98:
#line 362 "lab04.y"
    {printf (", ");}
    break;

  case 100:
#line 365 "lab04.y"
    {printf ("write ");}
    break;

  case 101:
#line 366 "lab04.y"
    {printf ("\(");}
    break;

  case 102:
#line 368 "lab04.y"
    {printf (")"); }
    break;

  case 103:
#line 369 "lab04.y"
    {printf (";\n");}
    break;

  case 105:
#line 373 "lab04.y"
    {printf (", "); }
    break;

  case 107:
#line 376 "lab04.y"
    {printf ("%s", (yyvsp[(1) - (1)].string));}
    break;

  case 109:
#line 379 "lab04.y"
    {printf ("call ");}
    break;

  case 110:
#line 380 "lab04.y"
    {printf ("%s ", (yyvsp[(3) - (3)].string));}
    break;

  case 111:
#line 381 "lab04.y"
    {printf ("\(");}
    break;

  case 115:
#line 387 "lab04.y"
    {printf (")");}
    break;

  case 116:
#line 388 "lab04.y"
    {printf (";\n");}
    break;

  case 117:
#line 390 "lab04.y"
    {printf ("return");}
    break;

  case 118:
#line 391 "lab04.y"
    {printf(";\n");}
    break;

  case 119:
#line 392 "lab04.y"
    {printf ("return ");}
    break;

  case 120:
#line 394 "lab04.y"
    {printf(";\n");}
    break;

  case 121:
#line 396 "lab04.y"
    {
                    if  ((yyvsp[(1) - (1)].simb) != NULL) (yyvsp[(1) - (1)].simb)->inic = (yyvsp[(1) - (1)].simb)->ref = VERDADE;
                }
    break;

  case 122:
#line 399 "lab04.y"
    {printf ("= ");}
    break;

  case 123:
#line 400 "lab04.y"
    {
                    printf (";\n");
                    if ((yyvsp[(1) - (6)].simb) != NULL)
                        if ((((yyvsp[(1) - (6)].simb)->tvar == INTEIRO || (yyvsp[(1) - (6)].simb)->tvar == CARACTERE) &&
                            ((yyvsp[(5) - (6)].tipoexpr) == REAL || (yyvsp[(5) - (6)].tipoexpr) == LOGICO)) ||
                            ((yyvsp[(1) - (6)].simb)->tvar == REAL && (yyvsp[(5) - (6)].tipoexpr) == LOGICO) ||
                            ((yyvsp[(1) - (6)].simb)->tvar == LOGICO && (yyvsp[(5) - (6)].tipoexpr) != LOGICO))
                            Incompatibilidade ("Lado direito de comando de atribuicao improprio");
                }
    break;

  case 125:
#line 412 "lab04.y"
    {printf (", "); }
    break;

  case 128:
#line 416 "lab04.y"
    {printf ("|| ");}
    break;

  case 129:
#line 416 "lab04.y"
    {
                    if ((yyvsp[(1) - (4)].tipoexpr) != LOGICO || (yyvsp[(4) - (4)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para operador or");
                    (yyval.tipoexpr) = LOGICO;
                }
    break;

  case 131:
#line 423 "lab04.y"
    {printf ("&& ");}
    break;

  case 132:
#line 423 "lab04.y"
    {
                    if ((yyvsp[(1) - (4)].tipoexpr) != LOGICO || (yyvsp[(4) - (4)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para operador and");
                    (yyval.tipoexpr) = LOGICO;
                }
    break;

  case 134:
#line 430 "lab04.y"
    {printf ("! ");}
    break;

  case 135:
#line 430 "lab04.y"
    {
                    if ((yyvsp[(3) - (3)].tipoexpr) != LOGICO)
                        Incompatibilidade ("Operando improprio para operador not");
                    (yyval.tipoexpr) = LOGICO;
                }
    break;

  case 137:
#line 437 "lab04.y"
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

  case 138:
#line 446 "lab04.y"
    {
                    switch ((yyvsp[(2) - (4)].atr)) {
                        case LT: case LE: case GT: case GE:
                            if ((yyvsp[(1) - (4)].tipoexpr) != INTEIRO && (yyvsp[(1) - (4)].tipoexpr) != REAL && (yyvsp[(1) - (4)].tipoexpr) != CARACTERE || (yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr) != REAL && (yyvsp[(4) - (4)].tipoexpr) != CARACTERE)
                                Incompatibilidade   ("Operando improprio para operador relacional");
                            break;
                        case EQ: case NE:
                            if (((yyvsp[(1) - (4)].tipoexpr) == LOGICO || (yyvsp[(4) - (4)].tipoexpr) == LOGICO) && (yyvsp[(1) - (4)].tipoexpr) != (yyvsp[(4) - (4)].tipoexpr))
                                Incompatibilidade ("Operando improprio para operador relacional");
                            break;
                    }
                    (yyval.tipoexpr) = LOGICO;
                }
    break;

  case 140:
#line 461 "lab04.y"
    {
                    switch ((yyvsp[(2) - (2)].atr)) {
                        case PLUS: printf ("+ "); break;
                        case MINUS: printf ("- "); break;
                    }
                }
    break;

  case 141:
#line 466 "lab04.y"
    {
                        if ((yyvsp[(1) - (4)].tipoexpr) != INTEIRO && (yyvsp[(1) - (4)].tipoexpr) != REAL && (yyvsp[(1) - (4)].tipoexpr) != CARACTERE || (yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr)!=REAL && (yyvsp[(4) - (4)].tipoexpr)!=CARACTERE)
                            Incompatibilidade ("Operando improprio para operador aritmetico");
                        if ((yyvsp[(1) - (4)].tipoexpr) == REAL || (yyvsp[(4) - (4)].tipoexpr) == REAL) (yyval.tipoexpr) = REAL;
                        else (yyval.tipoexpr) = INTEIRO;
                }
    break;

  case 143:
#line 474 "lab04.y"
    {
                    switch ((yyvsp[(2) - (2)].atr)) {
                        case TIMES: printf ("* "); break;
                        case DIVIDE: printf ("/ "); break;
                        case MODULE: printf ("%% "); break;
                    }
                }
    break;

  case 144:
#line 480 "lab04.y"
    {
                    switch ((yyvsp[(2) - (4)].atr)) {
                        case TIMES: case DIVIDE:
                            if ((yyvsp[(1) - (4)].tipoexpr) != INTEIRO && (yyvsp[(1) - (4)].tipoexpr) != REAL && (yyvsp[(1) - (4)].tipoexpr) != CARACTERE || (yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr)!=REAL && (yyvsp[(4) - (4)].tipoexpr)!=CARACTERE)
                                Incompatibilidade ("Operando improprio para operador aritmetico");
                            if ((yyvsp[(1) - (4)].tipoexpr) == REAL || (yyvsp[(4) - (4)].tipoexpr) == REAL) (yyval.tipoexpr) = REAL;
                            else (yyval.tipoexpr) = INTEIRO;
                            break;
                        case MODULE:
                            if ((yyvsp[(1) - (4)].tipoexpr) != INTEIRO && (yyvsp[(1) - (4)].tipoexpr) != CARACTERE  ||  (yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr) != CARACTERE)
                                Incompatibilidade ("Operando improprio para operador resto");
                            (yyval.tipoexpr) = INTEIRO;
                            break;
                    }
                }
    break;

  case 145:
#line 496 "lab04.y"
    {
                    if  ((yyvsp[(1) - (1)].simb) != NULL)  {
                        (yyvsp[(1) - (1)].simb)->ref  =  VERDADE;
                        (yyval.tipoexpr) = (yyvsp[(1) - (1)].simb)->tvar;
                    }
                }
    break;

  case 146:
#line 502 "lab04.y"
    {printf ("%d ", (yyvsp[(1) - (1)].valor)); (yyval.tipoexpr) = INTEIRO;}
    break;

  case 147:
#line 503 "lab04.y"
    {printf ("%g ", (yyvsp[(1) - (1)].valreal)); (yyval.tipoexpr) = REAL;}
    break;

  case 148:
#line 504 "lab04.y"
    {printf ("\'%c\' ", (yyvsp[(1) - (1)].carac)); (yyval.tipoexpr) = CARACTERE;}
    break;

  case 149:
#line 505 "lab04.y"
    {printf ("true "); (yyval.tipoexpr) = LOGICO;}
    break;

  case 150:
#line 506 "lab04.y"
    {printf ("false "); (yyval.tipoexpr) = LOGICO;}
    break;

  case 151:
#line 507 "lab04.y"
    {printf ("~ ");}
    break;

  case 152:
#line 507 "lab04.y"
    {
                    if ((yyvsp[(3) - (3)].tipoexpr) != INTEIRO && (yyvsp[(3) - (3)].tipoexpr) != REAL && (yyvsp[(3) - (3)].tipoexpr) != CARACTERE)
                        Incompatibilidade  ("Operando improprio para menos unario");
                    if ((yyvsp[(3) - (3)].tipoexpr) == REAL) (yyval.tipoexpr) = REAL;
                    else (yyval.tipoexpr) = INTEIRO;
                }
    break;

  case 153:
#line 513 "lab04.y"
    {printf ("( ");}
    break;

  case 154:
#line 514 "lab04.y"
    {printf (") "); (yyval.tipoexpr) = (yyvsp[(3) - (4)].tipoexpr);}
    break;

  case 156:
#line 517 "lab04.y"
    {       // NOTE redundancia de printf
                    printf ("%s ", (yyvsp[(1) - (1)].string));
                    escaux = escopo;
                    simb = ProcuraSimb ((yyvsp[(1) - (1)].string), escaux);
                    while (escaux && !simb) {
                        escaux = escaux->escopo;
                        if (escaux)
                        simb = ProcuraSimb ((yyvsp[(1) - (1)].string), escaux);
                    }
                    if (simb == NULL) NaoDeclarado ((yyvsp[(1) - (1)].string));
                    else if (simb->tid != IDVAR) TipoInadequado ((yyvsp[(1) - (1)].string));
                    (yyval.simb) = simb;
                    if ((yyval.simb) != NULL)
                        if ((yyval.simb)->array == VERDADE)
                            Esperado ("Subscrito\(s)");

                }
    break;

  case 157:
#line 534 "lab04.y"
    {
                    printf ("%s [ ", (yyvsp[(1) - (2)].string));
                    escaux = escopo;
                    simb = ProcuraSimb ((yyvsp[(1) - (2)].string), escaux);
                    while (escaux && !simb) {
                        escaux = escaux->escopo;
                        if (escaux)
                        simb = ProcuraSimb ((yyvsp[(1) - (2)].string), escaux);
                    }
                    if (simb == NULL) NaoDeclarado ((yyvsp[(1) - (2)].string));
                    else if (simb->tid != IDVAR) TipoInadequado ((yyvsp[(1) - (2)].string));
                    (yyval.simb) = simb;
            }
    break;

  case 158:
#line 546 "lab04.y"
    {
                    printf ("] "); (yyval.simb) = (yyvsp[(3) - (5)].simb);
                    if ((yyval.simb) != NULL)
                        if ((yyval.simb)->array == FALSO)
                            NaoEsperado ("Subscrito\(s)");
                        else if ((yyval.simb)->ndims != (yyvsp[(4) - (5)].nsubscr))
                            Incompatibilidade 
                        ("Numero de subscritos incompativel com declaracao");
                    }
    break;

  case 159:
#line 556 "lab04.y"
    {
                    if ((yyvsp[(1) - (1)].tipoexpr) != INTEIRO && (yyvsp[(1) - (1)].tipoexpr) != CARACTERE)
                        Incompatibilidade ("Tipo inadequado para subscrito");
                    (yyval.nsubscr) = 1;
                }
    break;

  case 160:
#line 561 "lab04.y"
    {printf (", ");}
    break;

  case 161:
#line 561 "lab04.y"
    {
                if ((yyvsp[(4) - (4)].tipoexpr) != INTEIRO && (yyvsp[(4) - (4)].tipoexpr) != CARACTERE)
                    Incompatibilidade ("Tipo inadequado para subscrito");
                (yyval.nsubscr) = (yyvsp[(1) - (4)].nsubscr) + 1;
               }
    break;

  case 162:
#line 567 "lab04.y"
    {
                    printf ("%s", (yyvsp[(1) - (1)].string));
                    simb = ProcuraSimb ((yyvsp[(1) - (1)].string), escopo);
                    if (simb == NULL) NaoDeclarado ((yyvsp[(1) - (1)].string));
                    else if (simb->tid != IDFUNC) TipoInadequado ((yyvsp[(1) - (1)].string));
                    (yyval.tipoexpr) = simb->tvar;
		        }
    break;

  case 163:
#line 574 "lab04.y"
    {printf ("\(");}
    break;

  case 165:
#line 577 "lab04.y"
    {printf (")"); }
    break;

  case 166:
#line 578 "lab04.y"
    {printf (")"); }
    break;


/* Line 1267 of yacc.c.  */
#line 2513 "y.tab.c"
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


#line 580 "lab04.y"


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

simbolo ProcuraSimb (char *cadeia, simbolo escopo) {
    simbolo s; int i;
    i = hash (cadeia);
    for (s = tabsimb[i]; (s!=NULL) && strcmp(cadeia, s->cadeia);
        s = s->prox);
    if(s == NULL && escopo->escopo != NULL) return ProcuraSimb(cadeia, escopo->escopo);
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

void InsereListSimb(simbolo s, listsimb p){
    // TODO implement
}

