#include <stdio.h>
#include <stdlib.h>

/* If on windows compile these functions */
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* fake readline function */
char readline(char* prompt){
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char* cpy = malloc(strlen(buffer)+1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy)-1] = '\0';
  return cpy;
}

/* fake add_history fn */
void add_history(char* unused)
{}

#else
//gives access to editline function
#include <editline/readline.h>
#endif

int main(int argc, char** argv){

  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to exit\n");

  //infinite loop
  while(1){

    //output the prompt
    //and get user input
    //readline allocates new memory
    char* input = readline("lispy> ");

    //add input to history
    add_history(input);

    //echo input back
    printf("No you're a %s\n", input);

    //free input allocated by readline.
    free(input);
  }

  return 0;
}


/*
To compile run this
$ cc -std=c99 -Wall lispy.c -ledit -o lispy && ./lispy
*/
