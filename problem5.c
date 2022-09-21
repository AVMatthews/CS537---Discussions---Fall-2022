#include <stdio.h>
#include <stdlib.h>


int main(){

  int x;
  char * st = malloc(31);
  scanf("%d", &x);
  scanf("%30s", st);

  printf("%d\n", x);
  printf("%s\n", st);

  return 1;

}
