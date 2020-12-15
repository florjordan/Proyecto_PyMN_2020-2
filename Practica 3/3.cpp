#include<stdio.h>

int main(){
	int t1 = 0, t2 = 1, nt = 0, n, i;
	printf("Secuencia Fibonacci \n);
	printf("Ingresa el numero de terminos: \n);
	scanf("%d", &n);
	       
	for (i = 1; i <= n; ++i){
		printf("%d, ", t1);
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;
	}
	       
	return 0;
}






