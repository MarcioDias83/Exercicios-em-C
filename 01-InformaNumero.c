#include<stdio.h>
#include<stdlib.h>

//Fa�a um Programa que pe�a um n�mero e ent�o mostre a mensagem O n�mero informado foi [n�mero].

int main()
{
	int numero;
	
	printf("Digite um numero:\n");
	scanf("%d",&numero);
	printf("O numero digitado foi %d.", numero);
}
