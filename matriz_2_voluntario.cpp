/*
Se leen 2 matrices 3x3 y se tiene que devolver la suma
*/

#include<stdio.h>

int main(){
	int matriz_1[3][3];
	int matriz_2[3][3];
	int matriz_suma[3][3];
	int fil,col;
	//Se lee la matriz 1
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("\n fila %d,columna %d: ",fil+1,col+1);
			scanf("%d", &matriz_1[fil][col]);
		}
	}

	//Se lee la matriz 2
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("\n fila %d,columna %d: ",fil+1,col+1);
			scanf("%d", &matriz_2[fil][col]);
		}
	}
	//Se suman las matrices
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			matriz_suma[fil][col]=matriz_1[fil][col]+matriz_2[fil][col];
		}
	}
	//Se muestra la matriz suma
	printf("\n SUMA: \n");
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("  %d ", matriz_1[fil][col]);
		}
		printf("\n");
	}
	printf("\n");
	printf("      + \n");
	printf("\n");
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("  %d ", matriz_2[fil][col]);
		}
		printf("\n");
	}
	printf("\n");
	printf("      = \n");
	printf("\n");
	for(fil=0;fil<3;fil++){
		for(col=0;col<3;col++){
			printf("  %d ", matriz_suma[fil][col]);
		}
		printf("\n");
	}
	return 0;
}
