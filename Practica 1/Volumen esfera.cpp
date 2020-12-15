//calcular el volumen de una esfera con base a su radio//
#include<stdio.h>
#define PI 3.1416
int main(){
	float r,r3, vol;
	printf("Ingresa el radio de la esfera: " );
	scanf("%f",&r);
	r3= r*r*r;
	vol= ((4)*(PI)*(r3))/3;
	printf("El volumen de la esfera es: %f ", vol);
}
