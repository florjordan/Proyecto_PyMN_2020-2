#include <stdio.h>
int main() {
 int i, n, r , nt, t1 = 0, t2 = 1;
  printf("Secuencia Fibonacci \n")
  printf("Ingresa el numero de terminos: \n");
  scanf("%d",&n);
  
  for ( i = 1; i < n; ++i){
    
    nt= t1 + t2;
    r = t2 / t1;
    t1 = t2;
    t2 = nt;
}
  printf("Numero aureo correspondiente a los terminos: %d, \n", r);
  
  return0;
}

