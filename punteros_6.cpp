#include<stdio.h>
#include<stdlib.h>
//memory aLLocation

int main(){
	char *pletra;
	int longitud;
	printf("\n cuantas letras: ");
	scanf ("%d",&longitud);
	pletra=(char *)malloc(longitud);
	printf("\n Escribe una palabra de menos de %d letras: ", longitud);
	scanf("%s",pletra);
	printf("\n Acabas de escribir la palabra %s",pletra);
	
	
	return 0;
}
