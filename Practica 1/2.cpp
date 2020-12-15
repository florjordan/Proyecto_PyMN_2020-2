//Programa de la edad//
#include <stdio.h>
using namespace std;
int main (){
	int edad;
	printf("Cual es tu edad \n");
	scanf("%d",&edad);
	printf("Tu edad es %d \n", edad);
	if(edad >= 18){
		printf("Eres mayor de edad");
	}
	else{
		printf("Eres menor de edad");
	}
	return 0;
}
