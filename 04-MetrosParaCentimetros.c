#include<stdio.h>
#include<stdlib.h>

//Fa�a um Programa que converta metros para cent�metros.

int main()
{
	int centimetro;
	float metro;
	
	printf("Digite a quantidade em metros:\n");
	scanf("%f",&metro);
	centimetro = metro * 100;
	printf("A quantidade em centimetros e de %d cm.",centimetro);
}
