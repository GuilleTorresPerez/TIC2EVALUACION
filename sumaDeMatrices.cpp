#include<stdio.h> 
//Lee dos matrices 3x3 y devuelve la suma

int main() {
	int matriz1 [3][3];
	int matriz2 [3][3];
	int matriz3 [3][3];
	int fila, columna;
	int cont;
	
	//LEER LA MATRIZ 1	
	printf("Introduzca los valores de la primera matriz\n");
	for (fila=0; fila<3; fila++) {

		printf("Valores de la fila numero %d: \n", fila+1);
		for (columna=0; columna<3; columna++) {
			printf("Columna %d: ", columna);
			scanf("%d",&matriz1[fila][columna] );
		}
	}
	
	//MOSTRAR LA MATRIZ	1
	printf("A continuacion se muestra la primera matriz \n");
	
	for (fila=0; fila<3; fila++) {
		for (columna=0; columna<3; columna++) {
			printf("%d ", matriz1[fila][columna]);
		}
		printf("\n");
	}
	
	//LEER LA MATRIZ 2	
	printf("Introduzca los valores de la segunda matriz\n");
	for (fila=0; fila<3; fila++) {
		printf("Valores de la fila numero %d: \n", fila+1);
		for (columna=0; columna<3; columna++) {
			printf("Columna %d: ", columna);
			scanf("%d",&matriz2[fila][columna] );
		}
	}
	
	//MOSTRAR LA MATRIZ 2
	printf("A continuacion se muestra la segunda matriz \n");
	
	for (fila=0; fila<3; fila++) {
		for (columna=0; columna<3; columna++) {
			printf("%d ", matriz2[fila][columna]);
		}
		printf("\n");
	}
	
	//OPERAMOS LA MATRIZ
	for (fila=0; fila<3; fila++) {
		for (columna=0; columna<3; columna++) {
			matriz3[fila][columna]=matriz1[fila][columna]+matriz2[fila][columna];
		}
		printf("\n");
	}
	
	//MOSTRAMOS LA MATRIZ RESULTADO
	printf("A continuacion se muestra el resultado \n");
	
	for (fila=0; fila<3; fila++) {
		for (columna=0; columna<3; columna++) {
			printf("%d ", matriz3[fila][columna]);
		}
		printf("\n");
	}
	
	
	return 0;
}
