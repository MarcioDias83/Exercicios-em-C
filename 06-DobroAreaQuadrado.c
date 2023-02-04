#include<stdio.h>
#include<stdlib.h>

//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

int main()
{
	int lado, area, dobro;
	
	printf("Digite o valor de um dos lados de um quadrado:\n");
	scanf("%d",&lado);
	area = lado * lado;
	dobro = area * 2;
	printf("O dobro da area do quadrado em questao e %d.",dobro);
}
