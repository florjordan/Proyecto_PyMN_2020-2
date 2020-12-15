//Calcular IMC//
#include<stdio.h>
int main (){
	char n [30];
	int e;
	float es, p, imc;
	printf("Ingrese su nombre: ");
	scanf("%s", &n);
	printf("Ingrese su edad: ");
	scanf("%d", &e);
	printf("Ingrese su peso en kilogramos: ");
	scanf("%f", &p);
	printf("Ingrese su estatura en metros: ");
	scanf("%f",&es);
	imc= p/(es*es);
	printf("Su nombre es: %s \n",n);
	printf("Su edad es: %d \n", e);
	printf("Su peso es: %f \n", p);
	printf("Su Indice de Masa Corporal (IMC) es: %f \n", imc);
	
}


