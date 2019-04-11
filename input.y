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

%token GO GET
%token USE
%token DROP
%token THROW
%token UNLOCK
%token OPEN
%token NORTH SOUTH EAST WEST
%token INVENTORY HELP
%token MISC_WORD

%define locations

%%

program	: statement_list '\n' newline
//{ printf("STRING: %s\n", $1.str); }
		| newline
		;

statement_list : statement_list statement
	{ strncpy($$.str, $1.str, STR_SIZE); strncat($$.str, $2.str, STR_SIZE); }
		| statement { strncpy($$.str, $1.str, STR_SIZE); }
		;
		
statement	: GO { strncpy($$.str, $1.str, STR_SIZE); printf("STRING: %s\n", $$.str); }
;

newline		: 	
				'\n' newline	
									{ /*Eat the trailing newlines.*/ }
			|						
									
			;

%%

void main()
{
	yyparse();
}

