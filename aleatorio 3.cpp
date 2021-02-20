/*
Haz un juego en el que compites con el ordenador. Reglas:
1. Se tira el dado (nºaleatorio) 3 veces de forma consecutiva
>Turno 1. ORDENADOR (presiona cualquier tecla para tirar el dado)
>4
>Turno 1. PLAYER H (presiona cualquier tecla para tirar el dado)
>3
>Gana el ordenador :)
>Turno 2.
Al final se dan todos los resultados parciales, la suma de los puntos 
y se proclama al vencedor
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int tirada(){
	int puntuacion;
	srand(time(0));
	puntuacion=rand()%6+1;
	return(puntuacion);
	
}
int main(){
	int cont;
	int marcador1[3];
	int marcador2[3];
	char tecla;
	for(cont=0;cont<=3;cont++){
		printf("\nTurno %d. ORDENADOR. Presione cualquier tecla: ");
		scanf("%c",/&tecla);
		marcador1[cont]=tirada();
		printf("%d",marcador1[cont]);
		printf("\nTurno %d. ORDENADOR. Presione cualquier tecla: ");
		scanf("%c",/&tecla);
		marcador1[cont]=tirada();
		printf("%d",marcador1[cont]);
	}
	return 0;
}
