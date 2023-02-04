#include<stdio.h>
#include<stdlib.h>

//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

int main()
{
	int nota1, nota2, nota3, nota4;
	float media;
	
	printf("Digite a primeira nota:\n");
	scanf("%d",&nota1);
	printf("Digite a segunda nota:\n");
	scanf("%d",&nota2);
	printf("Digite a terceira nota:\n");
	scanf("%d",&nota3);
	printf("Digite a quarta nota:\n");
	scanf("%d",&nota4);
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("A sua media e %.1f.", media);
}
