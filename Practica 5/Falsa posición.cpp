#include <stdio.h>
#include <math.h>


float f(float x)
{
	float y;
     //y=2*x*cos(2*x)-(x+1)*(x+1);
     y= log(x)+x*x-4;
	return y;
}

float falsaposicion(float a, float b,int iter)
{
   float xi,xi_anterior=0.0,errorRP;
   int contador=1;
   printf("i \t a \t\t b \t\t xi \t\t Erp\n");
  do
  {
      xi= b-((f(b)*(a-b))/(f(a)-f(b)));
      errorRP= ((xi-xi_anterior)/xi)*100.0;
      xi_anterior=xi;
      printf("%d \t %.6f \t %.6f \t %.6f \t %.6f\n",contador,a,b,xi,fabs(errorRP));


      if(f(a)*f(xi)<0)
      {
      	b=xi;
      }else{
      	a=xi;
      }
      
      contador++;

  }while (f(a)*f(xi)!= 0 && contador<=iter );

  return xi;
}


int main ()
{
    float a=1, b=2,iteraciones=5;
    float raiz;
    raiz= falsaposicion(a,b,iteraciones);
    printf("\nLa raiz aproximada es %.6f",raiz);
    printf("\n\n");
	return 0;
}
