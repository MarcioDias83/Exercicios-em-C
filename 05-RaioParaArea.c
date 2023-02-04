#include<stdio.h>
#include<stdlib.h>

//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

int main()
{
	int raio;
	float area;
	
	printf("Qual e o raio do circulo?\n");
	scanf("%d",&raio);
	area = pow(raio,2) * 3.1415;
	printf("A area do raio e %.2f.",area);
}
