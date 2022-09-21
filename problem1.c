#include <stdio.h>
#include <stdlib.h>


int main(){

  int *p = malloc(sizeof(int));
  p = malloc(2 * sizeof(int));
  *p = 0;
  p++;
  *p = 1;

  return 1;

}
