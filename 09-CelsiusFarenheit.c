#include<stdio.h>
#include<stdlib.h>

//Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

int main()
{
	float celsius, farenheit;
	
	printf("Qual e a temperatura em Celsius?\n");
	scanf("%f",&celsius);
	farenheit = celsius * 1.8 + 32;
	printf("A temperatura em Farenheit e de %.1f.",farenheit);
}
