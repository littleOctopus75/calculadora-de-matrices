#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 20
void mostrar_matriz(int matriz[][MAX], int orden);
int determinante(int matriz[][MAX], int orden);
int cofactor(int matriz[][MAX], int orden, int fila, int columna);

int main (){
	int arreglo [10][10], band=1, op, x, y, i, j, cont, cont3, arreglo2 [10][10], arreglo_r [10][10], escalar, arreglo_3[10][10];
	float arreglo_f[10][10], pivote, arreglo_f2[10][10];	
	int p, q;
	int matriz[MAX][MAX];
   int orden;
	printf ("Ingrese el tamaño de su arreglo");
	printf ("\nFilas: ");
	scanf ("%d", &x);
	printf ("\nColumnas: ");
	scanf ("%d", &y);
	arreglo [x][y];

	printf ("Ingrese los valores");
	for (i=0; i<x; i++){
		for (cont=0; cont<y; cont++){
			printf ("\nFila %d columna %d: ", i+1, cont+1);
			scanf ("%d", &arreglo[i][cont]);
		}
	}
	/*
	printf ("123456789");
	for (i=0; i<x; i++){
		for (cont=0; cont<y; cont++){
			printf ("\nFila %d columna %d: ", i+1, cont+1);
			printf ("%d ", arreglo[i][cont]);
		}
		printf ("\n");
	}
	*/
	system ("cls");
	do{
		printf ("\n\t\t\t\t Suma [1] ");
		printf ("\n\t\t\t\t Resta [2] ");
		printf ("\n\t\t\t\t Multiplicacion por un escalar [3] ");
		printf ("\n\t\t\t\t Producto de 2 matrices [4] ");
		printf ("\n\t\t\t\t Determinante 2x2 [5] ");
		printf ("\n\t\t\t\t Determinante 3x3 [6] ");
		printf ("\n\t\t\t\t Determinante nxn [7] ");
		printf ("\n\t\t\t\t Transpuesta [8]");
		printf ("\n\t\t\t\t Salir [9] ");
		printf ("\n\t\t\t\t Ingrese la opcion que desea ejecutar [ ]\b\b");
		scanf ("%d", &op);
		switch (op){
			case 1:
				printf ("Ingrese los valores de la matriz con el cual quiere sumar");
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						printf ("\nFila %d columna %d: ", i+1, cont+1);
						scanf ("%d", &arreglo2[i][cont]);
					}
				}
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						arreglo_r[i][cont]=arreglo[i][cont]+arreglo2[i][cont];
					}
				}
				system ("cls");
				printf ("La matriz resultante es: ");
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						printf ("\nFila %d columna %d: ", i+1, cont+1);
							printf ("%d ", arreglo_r[i][cont]);
					}
					printf ("\n");
				}
				break;
			case 2:
				printf ("Ingrese los valores de la matriz con el cual quiere restar");
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						printf ("\nFila %d columna %d: ", i+1, cont+1);
						scanf ("%d", &arreglo2[i][cont]);
					}
				}
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						arreglo_r[i][cont]=arreglo[i][cont]-arreglo2[i][cont];
					}
				}
				system ("cls");
				printf ("La matriz resultante es: ");
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						printf ("\nFila %d columna %d: ", i+1, cont+1);
							printf ("%d ", arreglo_r[i][cont]);
					}
					printf ("\n");
				}
				break;
			case 3:
				printf ("Ingrese el escalar: ");
				scanf("%d",&escalar);

				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						arreglo_r[i][cont]=arreglo[i][cont] * escalar;
					}
				}
				system ("cls");
				printf ("La matriz resultante es: ");
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						printf ("\nFila %d columna %d: ", i+1, cont+1);
							printf ("%d ", arreglo_r[i][cont]);
					}
					printf ("\n");
				}
				break;
			case 4:
				printf ("Ingrese los valores de la matriz con el cual quiere multiplicar");
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						printf ("\nFila %d columna %d: ", i+1, cont+1);
						scanf ("%d", &arreglo2[i][cont]);
					}
				}
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						arreglo_r[i][cont]=arreglo[i][cont]*arreglo2[i][cont];
					}
				}
				system ("cls");
				printf ("La matriz resultante es: ");
				for (i=0; i<x; i++){
					for (cont=0; cont<y; cont++){
						printf ("\nFila %d columna %d: ", i+1, cont+1);
							printf ("%d ", arreglo_r[i][cont]);
					}
					printf ("\n");
				}
				break;
			case 5:
				if(x==2 && y == 2){
					arreglo_r[0][0]=arreglo[0][0]*arreglo[1][1];
					arreglo_r[1][1]=arreglo[0][1]*arreglo[1][0];
					arreglo_r[0][3]=arreglo_r[0][0]-arreglo_r[1][1];
					system ("cls");
					printf ("El resultado es: ");
					printf ("%d ", arreglo_r[0][3]);
				}
				else{
					printf ("La matriz no es de 2x2");
				}
				break;
			case 6:
				if (x==3 && y==3){
					for (i=0; i<x; i++){
						for (cont=0; cont<y; cont++){
							arreglo_r[i][cont]=arreglo[i][cont];
						}
					}
					arreglo_r[3][0]=arreglo[0][0];
					arreglo_r[3][1]=arreglo[0][1];
					arreglo_r[3][2]=arreglo[0][2];
					arreglo_r[4][0]=arreglo[1][0];
					arreglo_r[4][1]=arreglo[1][1];
					arreglo_r[4][2]=arreglo[1][2];

					arreglo_3[0][0]=arreglo_r[0][0]*arreglo_r[1][1]*arreglo_r[2][2];
					arreglo_3[0][1]=arreglo_r[1][0]*arreglo_r[2][1]*arreglo_r[3][2];
					arreglo_3[0][2]=arreglo_r[2][0]*arreglo_r[3][1]*arreglo_r[4][2];

					arreglo_3[1][0]=arreglo_r[0][2]*arreglo_r[1][1]*arreglo_r[2][0];
					arreglo_3[1][1]=arreglo_r[1][2]*arreglo_r[2][1]*arreglo_r[3][0];
					arreglo_3[1][2]=arreglo_r[2][2]*arreglo_r[3][1]*arreglo_r[4][0];

					arreglo_3[2][0]=arreglo_3[0][0]+arreglo_3[0][1]+arreglo_3[0][2];
					arreglo_3[2][1]=arreglo_3[1][0]+arreglo_3[1][1]+arreglo_3[1][2];

					arreglo_3[2][2]=arreglo_3[2][0]-arreglo_3[2][1];

					printf ("El resultado es: %d\n", arreglo_3[2][2]);
				}

				else{		
					printf ("La matriz no es de 3x3");
				}
			
				break;
			case 7:
				orden=x;
				for (i = 0; i < orden; i++) {
     			 	for (j = 0; j < orden; j++) {
       					 matriz[i][j]=arreglo[i][j];
      				}
   				}
   				
  				 printf("\nMostrando la matriz ingresada:\n");
  				 mostrar_matriz(matriz, orden);
   
   				printf("\nEl determinante es: %d\n", determinante(matriz, orden));
 
				break;
			case 8:
				printf ("La matriz transpuesta es: ");
				for (i=x-1; i>=0; i--){
					for (cont=y-1; cont>=0; cont--){
						printf ("\nFila %d columna %d: ", i+1, cont+1);
						printf ("%d", arreglo[cont][i]);
					}
					printf("\n");
				}
				break;
			case 9:
				band=0;
				break;
		
	}
		system ("Pause");
		system ("cls");
	}while (band == 1);

}
void mostrar_matriz(int matriz[][MAX], int orden)
{
	int i, j;
	
	printf("Orden: %d\n", orden);
   for (i = 0; i < orden; i++) {
      for (j = 0; j < orden; j++) {
      	printf("\t%d", matriz[i][j]);
      }
      printf("\n");
   }
}
 
 
int determinante(int matriz[][MAX], int orden)
{
   int det = 0.0, j;
   
   if (orden == 1) {
      det = matriz[0][0];
   } else {
      for (j = 0; j < orden; j++) {
         det = det + matriz[0][j] * cofactor(matriz, orden, 0, j);
      }
   }
   
   return det;
}
 
 
int cofactor(int matriz[][MAX], int orden, int fila, int columna)
{
   int submatriz[MAX][MAX];
   int n = orden - 1;
   int i, j;
   
   int x = 0;
   int y = 0;
   for (i = 0; i < orden; i++) {
      for (j = 0; j < orden; j++) {
         if (i != fila && j != columna) {
            submatriz[x][y] = matriz[i][j];
            y++;
            if (y >= n) {
               x++;
               y = 0;
            }
         }
      }
   }
   
   return pow(-1.0, fila + columna) * determinante(submatriz, n);
}


