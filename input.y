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
%token KILL
%token UNLOCK
%token OPEN
%token NORTH SOUTH EAST WEST
%token INVENTORY HELP
%token MISC_WORD

%define locations

%%

program	: statement_list
	{ printf("STRING: %s\n", $1.str); }
		;

statement_list : statement_list statement '\n' newline
														
				{ strncpy($$.str, $1.str, STR_SIZE); strncat($$.str, $2.str, STR_SIZE); }
														
		| statement '\n' newline { strncpy($$.str, $1.str, STR_SIZE); }
		;
		
statement	: GO { strncpy($$.str, $1.str, STR_SIZE); } //printf("STRING: %s\n", $$.str); }
	|	USE
				{ strncpy($$.str, $1.str, STR_SIZE);} //printf("STRING: %s\n", $$.str); }
	|	DROP
				{ strncpy($$.str, $1.str, STR_SIZE);} //printf("STRING: %s\n", $$.str); }	
	|	THROW
				{ strncpy($$.str, $1.str, STR_SIZE); }//printf("STRING: %s\n", $$.str); }	
	|	KILL
				{ strncpy($$.str, $1.str, STR_SIZE); }//printf("STRING: %s\n", $$.str); }	
	|	UNLOCK
				{ strncpy($$.str, $1.str, STR_SIZE); }//printf("STRING: %s\n", $$.str); }	
	|	OPEN
				{ strncpy($$.str, $1.str, STR_SIZE); }//printf("STRING: %s\n", $$.str); }	
	|	NORTH
				{ strncpy($$.str, $1.str, STR_SIZE); }//printf("STRING: %s\n", $$.str); }	
	|	SOUTH
				{ strncpy($$.str, $1.str, STR_SIZE);} //printf("STRING: %s\n", $$.str); }	
	|	EAST
				{ strncpy($$.str, $1.str, STR_SIZE);} //printf("STRING: %s\n", $$.str); }	
	|	WEST
				{ strncpy($$.str, $1.str, STR_SIZE); }//printf("STRING: %s\n", $$.str); }	
	|	INVENTORY
				{ strncpy($$.str, $1.str, STR_SIZE); }//printf("STRING: %s\n", $$.str); }	
	|	HELP
				{ strncpy($$.str, $1.str, STR_SIZE);} //printf("STRING: %s\n", $$.str); }	
	|	MISC_WORD
				{ strncpy($$.str, $1.str, STR_SIZE); }//printf("STRING: %s\n", $$.str); }	
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

