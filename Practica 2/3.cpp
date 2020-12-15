//La ecuación cuadrática//

#include <stdio.h>
#include <math.h>

int main(){
  int a,b,c,disc,ra,r1,r2;
  printf("Ingresa el valor de a \n");
  scanf("%d", &a);
  printf("Ingresa el valor de b \n");
  scanf("%d", &b);
  printf("Ingresa el valor de c \n");
  scanf("%d", &c);
  disc=(b*b)+(-4*a*c);
  ra=(disc)^(1/2);
  if(disc<0){
    printf("error: las soluciones no son reales");
  }
  else{
    r1=(-b+ra)/(2*a);
    r2=(-b-ra)/(2*a);
    printf("El valor de la primera raiz es: %d \n", r1);
    printf("El valor de la segunda raiz es: %d \n", r2);
   }
}



