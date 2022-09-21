#include <stdio.h>
#include <stdlib.h>


void swap_double(double **a, double **b) {
  double *tmp = *a;
  *a = *b;
  *b = tmp;

}

int main(){

  double A = 3.0;
  double B = 4.0;
  double *a = &A;
  double *b = &B;
    
  printf("%f\n", *a);
  printf("%f\n", *b);
  
  swap_double(&a,&b);

  printf("%f\n", *a);
  printf("%f\n", *b);
  
  return 1;
}
