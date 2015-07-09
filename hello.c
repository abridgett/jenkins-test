/* Hello World program */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  if (argc == 1) {
    printf("Hello World!\n");
  } else {
    for(i=1; i<argc; i++)
    {
      printf("Hello %s!\n", argv[i]);
    }
  }
  exit(0);
}
