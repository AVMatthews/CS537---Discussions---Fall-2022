#include <stdio.h>
#include <stdlib.h>


int main(){

  int *p = NULL;
  p = malloc(10 * sizeof(int));
  printf("%d\n",sizeof(p));

  return 1;

}
