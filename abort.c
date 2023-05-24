#include <stdio.h>
#include <stdlib.h>

void cleanup();

int main(void)
{

  atexit(cleanup);

  printf("Hello, World!\n");

  abort();
  
  return 0;
}

void cleanup()
{
  printf("Doing cleanup!\n");
}
