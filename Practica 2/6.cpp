//condicionales multiples//
#include<stdio.h>
int main(){
	int opcion, bolsas;
	float compra, descuento, total, costobolsas;
	printf("Seleccione el departamento para obtener el descuento deseado \n");
	printf("1. Perfumeria \n");
	printf("2. Salchichoneria \n");
	printf("3. Carniceria \n");
	printf("4. Limpieza \n");
	scanf("%d",&opcion);
	printf("Ingresa el total de la compra: \n");
	scanf("%f",&compra);
	printf("Ingresa la cantidad de bolsas utilizadas: \n");
	scanf("%d",&bolsas);
	costobolsas=0.1*bolsas;
	switch(opcion) {
		case 1 :
		descuento = compra*0.2;
		printf("el descuento es %f\n", descuento );
		printf("el pago total es %f\n", compra-descuento+costobolsas);
		break;
		case 2 :
		descuento = compra*0.4;
		printf("el descuento es %f\n", descuento);
		printf("el pago total es %f\n", compra-descuento+costobolsas);
		break;
		case 3:
		descuento = compra*0.2;
		printf("el descuento es, %f\n", descuento );
		printf("el pago total es %f\n", compra-descuento+costobolsas);
		break;
		case 4 :
		descuento = compra*0.35;
		printf("el descuento es, %f\n", descuento );
		printf("el pago total es %f\n", compra-descuento+costobolsas);
		break;
	}
	return 0;
}

