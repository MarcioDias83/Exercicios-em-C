#include<stdio.h>
#include<stdlib.h>

//Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7

int main()
{
	float altura, pesoIdeal;
	int sexo;
	
	printf("Qual e a sua altura?\n");
	scanf("%f",&altura);
	printf("Voce e homem ou mulher?\n");
	scanf("%d",&sexo);
	if(sexo == 1)
	{
		pesoIdeal = (72.7*altura) - 58;
	}
	else
	{
		pesoIdeal = (62.1 * altura) - 44.7;
	}
	printf("Seu peso ideal e %.1f.",pesoIdeal);
}
