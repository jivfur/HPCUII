/*
author: jivfu
date: 2016/08/01
description: Como Programar en C/C++ Deitel & Deitel
			Unidad: 2. Ejercicio: 2.23 Página: 51
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	int num;
	int smallest;
	int largest;

	printf("Primer Numero: ");
	scanf_s("%d", &num);
	smallest = num;
	largest = num;
	printf("Segundo Numero: ");
	scanf_s("%d", &num);
	if (num < smallest) {
		smallest = num;
	}
	if (num > largest) {
		largest = num;
	}
	printf("Tercer Numero: ");
	scanf_s("%d", &num);
	if (num < smallest) {
		smallest = num;
	}
	if (num > largest) {
		largest = num;
	}
	printf("Cuarto Numero: ");
	scanf_s("%d", &num);
	if (num < smallest) {
		smallest = num;
	}
	if (num > largest) {
		largest = num;
	}
	printf("Quinto Numero: ");
	scanf_s("%d", &num);
	if (num < smallest) {
		smallest = num;
	}
	if (num > largest) {
		largest = num;
	}


	printf("El mayor es %d \nEl menor es %d\n", largest, smallest);
	system("pause");
	return 1;
}