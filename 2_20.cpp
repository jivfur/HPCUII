/*
author: jivfu
date: 2016/07/28
description: Cómo programar en C/C++ Deitel&Deitel Unidad: 2. Ejercicio: 2.20 Página: 51
*/

#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159

int main() {
	int radio;
	printf("Radio: ");
	scanf_s("%d", &radio);
	printf("Diametro: %d\n", 2 * radio);
	printf("Circunferencia %f\n", PI*radio*radio);
	printf("Perimetro %f\n", 2 * radio*PI);
	system("pause");
	return 1;
}