#include <stdio.h>

int main(){
	int a, b, c;
	int q, w, e;
	int g, h;
	
	printf("Introduce un numero de cuatro digitos diferentes \n");
	scanf("%d", &a);
	
	q = 1;
	w = 0;
	e = 0;

	do{
		b = a%10;
		a = (a-b)/10;
		c = a%10;
		if(c!=b) {
			a = (a-c)/10;
			g = a%10;
				if(g!=c && g!=b && g!=a)
				q=q+1;
				else{ 
					w = w+1;
				}
		}
		e = e+1;
	}
	
	while(a!=0);
	
	if(w!=0){
		printf("Codigo valido");
	}
	
	else if (q==2){
		printf("Codigo no valido");
	}
	
	else if (e>1){
		printf("Codigo mo valido");
	}
	
	return 0;
}



