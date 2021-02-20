//Función que revibe un número entero y devuelve si es
//divisible para 2, 3, 5 y 7
#include<stdio.h>

bool esDivisible(int num) {
	if (num%2==0 && num%3==0 && num%5==0 && num%7==0) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int num;
	printf("Introduzca un numero xfavor ");
	scanf("%d", &num);
	
	if (esDivisible(num)==true) {
		printf("El numero introducido es divisible");
	} else {
		printf("El numero introducido no es divisible");
	}
	
	
	
	
	
	return 0;
}

