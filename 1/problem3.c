#include <stdio.h>
#include <stdlib.h>


void str_alloc(char *str, int n) {
  printf("%p\n", str);
  str = (char *) malloc(n * sizeof(char));
  printf("%p\n", str);
}

int main(){

  char *s; // = (char *) malloc(sizeof(char));

  printf("%p\n", s);
  str_alloc(s, 5);
  printf("%p\n", s);
  
  return 1;

}
