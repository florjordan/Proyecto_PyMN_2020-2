#include <stdio.h>
int main() {
long double qui, t1 = 0, t2 = 1, siguiente;
int i, n;
printf("ingrese el numero de terminos: ");
scanf("%d", &n);
for (i = 1; i <n; ++i) {
/* printf("%.0Lf, ", t1);*/
siguiente = t1 + t2;
//a = t1;
qui = t2/t1;
t1 = t2;
t2 = siguiente;
}
printf("el numero aureo es: %Lf\n",qui);
return 0;
}

