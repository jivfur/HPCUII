/*
author: @jivfu
date: 07/25/2016
Description: Exercise 2_18. Como programar en C/C++ Deitel & Deitel
*/
/*Librerías*/

#include<stdio.h>
#include<stdlib.h>
/*Main**/
int main() {
	/*variables*/
	int num1;
	int num2;
	/*Lectura de Datos*/
	printf("Numero 1: ");
	scanf_s("%d", &num1);
	printf("Numero 2: ");
	scanf_s("%d", &num2);
	/*Logica del programa*/
	if (num1 > num2) {
		printf("%d is larger than %d\n", num1, num2);
	}
	else if (num1 == num2) {
		printf("These numbers are equal\n");
	}
	else {
		printf("%d is larger than %d\n", num2, num1);
	}
	system("pause");
	return 0;
}