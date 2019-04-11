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
//#include "tomlang.tab.h"
#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno;

%}

%option yylineno

DIGIT  [0-9]
LETTER [A-Za-z]
WHITE  [ |\t|\f|\r|\v]

%%

\"([^"]*)\" 	{ strcpy(yylval.str, yytext); return STR_LIT; }


{WHITE}

{DIGIT}+ { 
			strcpy(yylval.str, yytext);
			return NUMBER; 
		}
		
(?:go|proceed|move|travel|walk|run)	{ strcpy(yylval.str, yytext); return GO; }

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

/*
void yyerror(char *s)  /* Called by yyparse on error 
{
  printf ("\terror: %s\n", s);
  printf ("ERROR: %s at line %d\n", s, yylineno);
}*/
