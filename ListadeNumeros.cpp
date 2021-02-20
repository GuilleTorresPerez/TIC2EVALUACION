#include<stdio.h>

//Lee tres números enteros y devuelve el mayor
int main() {
	int numero[10];
	int mayor, cont;
	for(cont=0;cont<10;cont++){
		printf("Numero %d ",cont);
		scanf("%d", &numero[cont]);
	}
	
	//MOSTRAMOS POR PANTALLA
	
	printf("**********");
	printf("LA LISTA");
	printf("**********\n");
	
	for(cont=0; cont<10;cont++) {
		printf("%d\n", numero[cont]);
	}
	
	return 0;
}
