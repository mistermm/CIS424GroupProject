#include <stdio.h>
#include <string.h>

static char input[100];

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
   printf("Hello...Welcome to The Lone Wanderer.\n");
   printf("You wake up from a deep slumber in a small forest clearing.\n");
   printf("Quickly realizing nothing around you seems familiar,\nYou slowly rise up and begin dusting yourself off to take a look around...\n");
   printf("You notice a hill with a small cottage at the top to your left.\n");
   printf("Looking towards your right you notice a small stream.\n");
   while ( playerInput() && parse() );
 
    

   printf("\nGoodbye!\n");



return 0;
}
