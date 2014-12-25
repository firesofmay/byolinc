#include <stdio.h>
#include <math.h>
/*
$ cc -std=c99 -Wall scratch.c -o scratch
$ ./scratch
*/

#ifdef __APPLE__

void hello() {
  printf("i am mac");
}

#else

void hello() {
  printf("i am not mac");
}

#endif

int main(int argc, char** argv) {

  hello();
  return 0;
}
