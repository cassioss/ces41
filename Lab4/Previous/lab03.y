%{

#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

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

%}

%union {
    char string[50];
    int atr, valor;
    float valreal;
    char carac;
}

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

%token  <string>    ID
%token  <valor>     INTCT
%token  <valreal>   FLOATCT
%token  <string>    CHARCT
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

%token  INVAL

%%

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
CallFinish  :   CLPAR       {printf (")"); }
                SCOLON      {printf (";\n");}
            ;
ReturnStat  :	RETURN      {printf ("return");}
                SCOLON      {printf(";\n");}
            |	RETURN      {printf ("return ");}
                Expression
                SCOLON      {printf(";\n");}
            ;
AssignStat  :	Variable    ASSIGN      {printf (" = "); }
                Expression  SCOLON      {printf (";\n");}
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
Term  	    :   Factor
            |	Term
                MULTOP  {
                    if ($2 == TIMES)        printf ("*");
                    else if ($2 == DIVIDE)  printf ("/");
                    else if ($2 == MODULE)  printf ("%");
                }   Factor
            ;
Factor		:	Variable
            |	INTCT               {printf ("%d", $1);}
            |	FLOATCT             {printf ("%g", $1);}
            |	CHARCT              {printf ("%s", $1);}
            |   TRUE                {printf ("true");}
            |	FALSE               {printf ("false");}
            |	NEG                 {printf ("~");}
                Factor
            |   OPPAR               {printf ("\(");}
                Expression  CLPAR   {printf (")"); }
            |	FuncCall
            ;
Variable	:   ID          {printf ("%s", $1); }
            |	ID          {printf ("%s", $1); }
                OPBRAK      {printf ("["); }
                SubscrList
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

#include "lex.yy.c"

tabular () {
    int i;
    for (i = 1; i <= tab; i++)
        printf ("\t");
}