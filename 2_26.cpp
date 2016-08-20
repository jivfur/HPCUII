/*
author: jivfu
date: 2016/08/17
description: Como programar en C/C++ Ejercicio 2.26
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	int num1;
	int num2;
	printf("Numero 1: ");
	scanf_s("%d", &num1);
	printf("Numero 2: ");
	scanf_s("%d", &num2);
	if (num2%num1 == 0) {
		printf("%d es multiplo de %d\n", num2, num1);
	}
	else {
		printf("%d NO es multiplo de %d\n", num2, num1);
	}
	system("pause");
	return 1;

}