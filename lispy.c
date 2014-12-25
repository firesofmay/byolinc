#include <stdio.h>

/* buffer for user input
global array
static keyword makes this local to this file*/
static char input[2048];

int main(int argc, char** argv){

  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to exit\n");

  //infinite loop
  while(1){

    //output the prompt
    //stdin/stdout are special variables declared in stdio.h
    //representing input to and output from the command line.
    fputs("lispy> ", stdout);

    //read a line of user input of max 2048 size
    fgets(input, 2048, stdin);

    //echo input back
    printf("No you're a %s", input);
  }

  return 0;
}
