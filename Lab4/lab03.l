%{

void comment (void);

%}

delim		[ \t\n\r]
ws          {delim}+

digito		[0-9]
letra		[A-Za-z]

id          {letra}({letra}|{digito})*
intct		{digito}+
floatct     {digito}+\.{digito}*([Ee][+-]?{digito}+)?
carac1		\\.|[^\\']
charct		'{carac1}'
carac2		\\.|[^\\\"]
string		\"{carac2}*\"
 
%%

{ws}		{ ;}

call        {return CALL;}
char        {return CHAR;}
do          {return DO;}
else        {return ELSE;}
false       {return FALSE;}
float       {return FLOAT;}
for         {return FOR;}
function    {return FUNCTION;}
global      {return GLOBAL;}
if          {return IF;}
init        {return INIT;}
int         {return INT;}
local       {return LOCAL;}
logic       {return LOGIC;}
main        {return MAIN;}
new         {return NEW;}
procedure   {return PROCEDURE;}
program     {return PROGRAM;}
read        {return READ;}
repeat      {return REPEAT;}
return      {return RETURN;}
statements  {return STATEMENTS;}
then        {return THEN;}
true        {return TRUE;}
while       {return WHILE;}
write       {return WRITE;}

{id}        {strcpy (yylval.string, yytext);    return ID;}
{intct}     {yylval.valor = atoi(yytext);       return INTCT;}
{floatct}   {yylval.valreal = atof(yytext);     return FLOATCT;}
{charct}    {strcpy (yylval.string, yytext);    return CHARCT;}
{string}    {strcpy (yylval.string, yytext);    return STRING;}

"||"        {return OR;}
"&&"        {return AND;}
"!"         {return NOT;}

"<"         {yylval.atr = LT; return RELOP;}
"<="		{yylval.atr = LE; return RELOP;}
">"         {yylval.atr = GT; return RELOP;}
">="		{yylval.atr = GE; return RELOP;}
"=="		{yylval.atr = EQ; return RELOP;}
"!="		{yylval.atr = NE; return RELOP;}

"+"         {yylval.atr = PLUS;  return ADOP;}
"-"         {yylval.atr = MINUS; return ADOP;}

"*"         {yylval.atr = TIMES;  return MULTOP;}
"/"         {yylval.atr = DIVIDE; return MULTOP;}
"%"         {yylval.atr = MODULE; return MULTOP;}

"~"         {return NEG;}

"("         {return OPPAR;}
")"         {return CLPAR;}
"["         {return OPBRAK;}
"]"         {return CLBRAK;}
"{"         {return OPBRACE;}
"}"         {return CLBRACE;}
"{{{"       {return OPTRIP;}
"}}}"       {return CLTRIP;}
";"         {return SCOLON;}
","         {return COMMA;}
"="         {return ASSIGN;}

"/*"		{comment ();}

.           {yylval.carac = yytext[0]; return INVAL;}

%%

void comment () {
	char c; int state;
	state = 1;
	while (state != 3) {
        switch (state) {
			case 1:
				c = input ();
				if (c == EOF) state = 3;
				else if (c == '*') state = 2;
				break;
			case 2:
				c = input ();
				if (c == EOF || c == '/') state = 3;
				else if (c == '*') state = 2;
				else state = 1;
				break;
		}
	}
}