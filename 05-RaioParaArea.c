#include<stdio.h>
#include<stdlib.h>

//Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.

int main()
{
	int raio;
	float area;
	
	printf("Qual e o raio do circulo?\n");
	scanf("%d",&raio);
	area = pow(raio,2) * 3.1415;
	printf("A area do raio e %.2f.",area);
}
