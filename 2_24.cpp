/*
author: jivfu
date: 2016/08/01
description: Como programar en C/C++. Deitel & Deitel. Ejercicio 2_24*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	int num;
	printf("Numero: ");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		printf("%d es par\n", num);
	}
	else {
		printf("%d es impar\n", num);
	}
	system("pause");
	return 1;
}