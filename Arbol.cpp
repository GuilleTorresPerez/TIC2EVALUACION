#include<stdio.h>
/*Introduzca la altura del arbol de navidad: 5
    * 
   ***
  *****
 *******
*********
    *
    *
Feliz Navidaddd
1.Introduzca la altura:
*
**
***
****
*****
2.Intentamos la copa del arbol:
para un arbol de 5
for(fila=altura-1; fila>=0;fila--)
fila=1 4 espacios + 1 asterisco
fila=2 3 espacios + 3 asteriscos
fila=3 2 espacios + 5 asteriscos
fila=4 1 espacio + 7 asteriscos
fila=5 0 espacios + 9 asteriscos
*/
int col;
int arbol(int fila){
	for (fila=1,fila<=altura;fila++){
		for(col=1;col<=fila,col++){
			printf("*");
		}
	printf("\n")	
	}
}
int main;{
	int fila();
	printf("Introduce la altura del arbol: ");
	scanf("%d",&arbol);
	return 0;
}
	
	
