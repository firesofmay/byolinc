//including a header file called stdio
//which contains all the standard input & output library.
#include <stdio.h>

//main function whose return value is integer.
//& takes in argc, and argv as params.
//all programs start with main function
int main123(int argc, char** argv){

  //included via stdio.h, callint it with "Hello, world!" args
  puts("Hello, mayank! :)");

  //retun 0 indicates that the program terminated succesfully.
  return 0;
}

/*
$ cc -std=c99 -Wall hello_world.c -o hello_world

$ ./hello_world
Hello, world!
*/

// for debugging on Mac either use lldb or valgrind.
// C documentation - http://en.cppreference.com/w/c

/*
Bonus:
Q. What happens when no main function is given?
A. Complains saying main not found:

$ cc -std=c99 -Wall hello_world.c -o hello_world
Undefined symbols for architecture x86_64:
  "_main", referenced from:
     implicit entry/start for main executable
     (maybe you meant: _main123)
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)


*/
