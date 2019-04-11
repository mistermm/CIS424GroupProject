%{

//Peter Carle
//Spring 2019

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "symtab.c"

#define STR_SIZE 512

typedef struct
{
	int ival;
	int type;
	char str[STR_SIZE];
}langstruct;

#define YYSTYPE langstruct

int yylex();
void yyerror(char *s);

%}

%token GO

%define locations

%%

program	: GO { strncpy($$.str, STR_SIZE, $1.str); return $$.str; }
;

%%


