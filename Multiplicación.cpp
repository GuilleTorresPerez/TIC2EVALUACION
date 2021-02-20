#include<stdio.h>

int main(){
	int cont, num, tabla;
	printf("Introduzca un numero ");
	scanf("%d", &tabla);
	
	printf("*******************");
	printf("TABLA DEL %d", tabla);
	printf("*******************\n");

	for(cont=0; cont<=10; cont++) {
		printf("%d x %d = %d\n", tabla, cont, tabla*cont);
	}
	return 0;
}
