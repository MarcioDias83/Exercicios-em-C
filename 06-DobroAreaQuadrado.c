#include<stdio.h>
#include<stdlib.h>

//Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.

int main()
{
	int lado, area, dobro;
	
	printf("Digite o valor de um dos lados de um quadrado:\n");
	scanf("%d",&lado);
	area = lado * lado;
	dobro = area * 2;
	printf("O dobro da area do quadrado em questao e %d.",dobro);
}
