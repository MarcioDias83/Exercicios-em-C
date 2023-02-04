#include<stdio.h>
#include<stdlib.h>

//Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).

int main()
{
	float Farenheit, Celsius;
	
	printf("Qual e a temperatura em Farenheit?\n");
	scanf("%f",&Farenheit);
	Celsius = (5 * (Farenheit-32) / 9);
	printf("A temperatura em Celsius e de %.1f.",Celsius);
}
