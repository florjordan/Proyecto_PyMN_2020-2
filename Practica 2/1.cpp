//Número par e impar//
#include <stdio.h>
int main (){
	int num;
	printf("Ingrese un numero entero \n");
	scanf("%d", &num);
	if (num%2==0){
		printf("%d es un numero entero par", num);
	}
	else{
		printf("%d es un numero entero impar", num);
	}

}



