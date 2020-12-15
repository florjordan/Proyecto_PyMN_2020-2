#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>

#define N 9

void menu ();
void GeneraVectores (void);
void GeneraMatriz (void);
void llenaVect();
void llenaVectSinRepetir(int[]);
void ImpVect (int[]);
void llenamatriz (void);
void sumarreglos (void);
void sumelem (void);
void ImpMat (int [][3]);

int main ()
{
   srand(time(NULL));
   menu ();
   return 0;
}

void menu ()
{
	int op;
   do{
      system ("cls");
      printf(" Menu \n");
	  printf("1\n");
	  printf("2\n");
	  printf("3\n");
	  printf("4\n");
	  printf("5\n");
	  printf("6\n");
	  printf("0.- Salir");
      scanf ("%d",&op);
	  switch(op)
	    {
		  case 1:
		  	llenaVect ();
		  	llenaVect ();
		  	break;
		  case 2:
		  	GeneraVectores ();
		  	break;
		  case 3:
		  	sumarreglos ();
		  	break;
		  case 4:
		  	sumelem ();
		  	break;
		  case 5:
		  	llenamatriz ();
		  	break;
		  case 6:
		  	GeneraMatriz ();
		  case 0:
		  	printf ("Adios.");
		  	
		}
   }while(op != 0);
}

void GeneraVectores(void)
{
	int V2[N], i=1, opc;
	system ("cls");
	do{
		printf ("GENERADOR DE VECTORES\n");
		printf ("Vector %d",i);
		llenaVectSinRepetir(V2);
		ImpVect(V2);
		i++;
		printf ("Deseas imprimir otro vector? Si=1 No=0\n");
		scanf ("%d",&opc);
	}while(opc==1);
}

void llenaVect()
{
	int x,i,j, vect [N];
	for(i=0;i<N;i++)
	{
		printf ("Ingrese un numero \n");
		scanf ("%d", &x);
		vect[i]=x;
	}
	ImpVect (vect);
	system ("pause");
}

void llenaVectSinRepetir(int vect[])
{
	int i,j,x,centi;
	for(i=0;i<N;i++)
	{
		do{
			x=(rand()%(30)+1)+50;
			centi=false; j=0;
			while(centi==false && j<i)
			{
				if(x==vect[j])
				{
					centi=true;
				}
				j++;
			}
		}while(centi==true);
		vect[i]=x;
	}
}

void ImpVect(int vect[])
{
	int i;
	system("cls");
	for(i=0;i<N;i++)
	{
		printf("%d =[%d]\n",i+1,vect[i]);
	}
}

void GeneraMatriz(void)
{
	int i, j, ban, num, M[3][3]={{0}};
	system ("cls");
	srand(time(0));
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			num=1+(rand()%16);
			M[i][j]=num;
			printf ("%d\t",M[i][j]);
		}
		printf ("\n");
	}
	system ("pause");
}

void llenamatriz (void)
{
	int i, j, num, M[3][3]={{0}};
	system ("cls");
	printf ("Matriz de 3x3\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf ("%d", &num);
			M[i][j]=num;
		}
	}
	ImpMat (M);
	system ("pause");
}

void sumarreglos (void)
{
	int a[5]={10, 4, 9, 11, 14};
	int b[5]={1, 9, 23, 45, 21};
	int c[5]={0};
	int i;
	for (i=0; i<5; i++)
	{
		c[i]=a[i]+b[i];
	}
	printf ("Resultado\n");
	ImpVect (c);
	system ("pause");
}

void sumelem (void)
{
	int a[3]={2, 6, 18};
	int c;
	c=a[0]+a[1]+a[2];
	printf ("%d", c);
	system ("pause");
}

void ImpMat (int mat [][3])
{
	int i, j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("%d\t",mat[i][j]);
		}
		printf ("\n");
	}
}
