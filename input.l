%{

//Peter Carle
//Spring 2019
//Agile Project: User input module

typedef struct
{
	int ival;
	int type;
	char str[512];
}langstruct;

#define YYSTYPE langstruct
#include <string.h>
#include "input.tab.h"
#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno;

%}

%option yylineno

DIGIT  [0-9]
LETTER [A-Za-z]
WHITE  [ |\t|\f|\r|\v]

%%

{WHITE}
		
(?i:go|proceed|move|travel|walk|run)	{ strcpy(yylval.str, yytext); return GO; }

(?i:get|obtain|grab|acquire|"pick up")	{ strcpy(yylval.str, yytext); return GET; }

(?i:use|utilize|"make use of")			{ strcpy(yylval.str, yytext); return USE; }

(?i:drop|"let go of"|release)			{ strcpy(yylval.str, yytext); return DROP; }

(?i:throw|hurl|toss|fling|chuck)		{ strcpy(yylval.str, yytext); return THROW; }

(?i:kill|slaughter|murder|"put to death")	{ strcpy(yylval.str, yytext); return KILL; }

(?i:unlock)								{ strcpy(yylval.str, yytext); return UNLOCK; }

(?i:open)								{ strcpy(yylval.str, yytext); return OPEN; }

(?i:north|up)							{ strcpy(yylval.str, yytext); return NORTH; }

(?i:south|down)							{ strcpy(yylval.str, yytext); return SOUTH; }

(?i:west|left)							{ strcpy(yylval.str, yytext); return WEST; }

(?i:east|right)							{ strcpy(yylval.str, yytext); return EAST; }

(?i:inventory)							{ strcpy(yylval.str, yytext); return INVENTORY; }

(?i:help|"help me"|"i don't know what i'm doing"|\?|directions)	{ strcpy(yylval.str, yytext); return HELP; }

{LETTER}+								{ strcpy(yylval.str, yytext); return MISC_WORD; }

.	{ return yytext[0]; }

%%

/*
Keywords:

go proceed move travel walk run

get obtain grab acquire "pick up"

use utilize "make use of"

drop "let go of" release

throw hurl toss fling chuck

kill slaughter murder "put to death"

unlock

open
*/


void yyerror(char *s)  /* Called by yyparse on error*/ 
{
  printf ("\terror: %s\n", s);
  printf ("ERROR: %s at line %d\n", s, yylineno);
}
