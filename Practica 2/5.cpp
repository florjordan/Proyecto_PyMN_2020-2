//Condicionales y operadores logicos//
#include <stdio.h>
#define g 9.8
int main(){
	float peso, estatura, imc;
	printf("Ingresa tu peso: \n");
	scanf("%f", &peso);
	printf("Ingresa tu estatura en metros: \n");
	scanf("%f", &estatura);
	imc=peso/(estatura*estatura);
	if(imc<18.5){
		printf("Tu imc es %f, peso bajo \n", imc);
	}
	else if (imc<24.9){
		printf("Tu imc es %f, peso normal \n", imc);
	}
	else if (imc<29.9){
		printf("Tu imc es %f, sobrepeso \n", imc);
	}
	else if(imc<34.5){
		printf("Tu imc es %f, obesidad tipo 1 \n", imc);
	}
	else if(imc<39.9){
		printf("Tu imc es %f, obesidad tipo 2 \n", imc);
	}
	else if(imc<40){
		printf("Tu imc es %f, hiper obesidad 1 \n", imc);
	}
	return 0;
}

