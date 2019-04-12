#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "input.tab.h"
#include "userinput.h"

//Peter Carle
//Spring 2019
//Agile project: user input processing module



int main()
{

	printf("%i\n", yyparse());

	printf("DONE\n");

	return 0;
}

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

