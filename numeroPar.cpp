#include<stdio.h>
//Funci�n que reciba un n�mero y devuelva 1 si es par
// y 0 si no lo es

bool esPar(int num){
	if (num%2==0) {
		return true;
	} else {
		return false;
	}
	
	
}

int main(){
	int num;	
	printf("Introduzca un numero ");
	scanf("%d", &num);
	
	if(esPar(num)==true){
		printf("%d es par", num);
	} else {
		printf("%d es impar", num);
	}
	
	
	
	return 0;
}
