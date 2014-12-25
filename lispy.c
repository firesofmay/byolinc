#include <stdio.h>

//gives access to free function
#include <stdlib.h>

//gives access to editline function
#include <editline/readline.h>

//this is not required on Mac OSX
//#include <editline/history.h>

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
