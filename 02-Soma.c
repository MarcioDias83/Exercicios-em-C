#include<stdio.h>
#include<stdlib.h>

//Fa�a um Programa que pe�a dois n�meros e imprima a soma.

int main()
{
	int numero1, numero2, soma;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d",&numero1);
	printf("Digite o segundo numero:\n");
	scanf("%d",&numero2);
	soma = numero1+numero2;
	printf("A soma dos dois numero e %d.", soma);
}
