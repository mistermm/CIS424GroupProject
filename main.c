#include <stdio.h>
#include <string.h>
#define MAX_FILE_LEN 500

static char input[100];

void printImage(FILE *fptr);

void printImage(FILE *fptr)
{
    char readFileString[MAX_FILE_LEN];

    while(fgets(readFileString,sizeof(readFileString),fptr) != NULL)
        printf("%s",readFileString);
}

static int playerInput()
{
    printf("\n> ");
    return fgets(input, sizeof(input),stdin) != NULL;
}


static int parse()
{
    char *action = strtok(input, " \n");

    if (action != NULL)
    {
        if (strcmp(action, "quit") == 0 || strcmp(action, "exit") == 0)
        {
            return 0;
        }
        else
        {
            printf("I dont know what to do!\n");
        }

    }
    return 1;
}

int main()
{
   char *filename = "titleLoneWanderer.txt";

   FILE *fptr = NULL;

   if ((fptr = fopen(filename,"r")) == NULL)
   {
     fprintf(stderr,"error opening %s\n",filename);
     return 1;
   }

   printImage(fptr);

   fclose(fptr);



   printf("Hello...Welcome to The Lone Wanderer.\n");
   printf("You wake up from a deep slumber in a small forest clearing,\n");
   printf("quickly realizing nothing around you seems familiar,\nyou stumble to your feet and begin dusting yourself off to take a look around...\n\n");
   printf("Directly in front of you there is a dirt road that cuts between the trees.\n");
   printf("You notice a hill with a small cottage at the top to your left.\n");
   printf("Looking towards your right you notice a small stream.\n");
   printf("(Hint: try testing out commands like: go east or go right to begin exploring!)\n");
   printf("What would you like to do?\n");
   while ( playerInput() && parse() );



   printf("\nGoodbye!\n");



return 0;
}
