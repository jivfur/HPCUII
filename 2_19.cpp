/*
author:jivfu
date: 2016/07/28
Description: Cómo programar en C/C++ Deitel&Deitel Unidad: 2. Ejercicio: 2.19 Página: 51
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
	//Definición de variables;
	int num1=0;
	int num2 = 0;
	int num3 = 0;
	int sum = 0;
	int product = 0;
	int average = 0;
	int smallest = 0;
	int largest = 0;
	//Lectura de Datos
	printf("Input three different integers:");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	//Suma
	sum = num1 + num2 + num3;
	//Producto
	product = num1 * num2 * num3;
	//Promedio
	average = sum / 3;
	//Menor
	if (num1 < num2 && num1 < num3) {
		smallest = num1;		
	}
	else if (num2 < num1 && num2 < num3) {
		smallest = num2;
	}
	else {
		smallest = num3;
	}
	//Mayor
	if (num1 > num2 && num1 > num3) {
		largest = num1;
	}
	else if (num2 > num1 && num2 > num3) {
		largest = num2;
	}
	else {
		largest = num3;
	}

	printf("Sum is %d\n", sum);
	printf("Average is %d\n", average);
	printf("Product is %d\n", product);
	printf("Smallest is %d\n", smallest);
	printf("Largest is %d\n", largest);
	system("pause");
	return 1;
}