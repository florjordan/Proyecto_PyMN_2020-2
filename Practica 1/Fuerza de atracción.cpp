//Calcular la fuerza de atracción del peso//
#include<stdio.h>
#define g 9.8
int main (){
	float w, m;
	printf("Ingresa la masa de la persona: " );
	scanf("%f", &m);
	w=(m*g);
	printf("La fuerza de atraccion del peso de la persona es: %f", w);
}


