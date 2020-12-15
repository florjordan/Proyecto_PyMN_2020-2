#include<stdio.h>
int main(){
	int n, r;
	printf("Ingrese n \n");
	scanf("%d",&n);
	while(n!=0){
		r=n%2;
		n=n/2;
		printf("%d \n", r);
	}
	return 0;
}



