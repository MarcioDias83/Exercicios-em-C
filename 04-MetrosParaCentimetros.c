#include<stdio.h>
#include<stdlib.h>

//Faça um Programa que converta metros para centímetros.

int main()
{
	int centimetro;
	float metro;
	
	printf("Digite a quantidade em metros:\n");
	scanf("%f",&metro);
	centimetro = metro * 100;
	printf("A quantidade em centimetros e de %d cm.",centimetro);
}
