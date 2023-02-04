#include<stdio.h>
#include<stdlib.h>

//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

int main()
{
	float altura, pesoIdeal, temp;
	
	printf("Qual e a sua altura?\n");
	scanf("%f",&altura);
	pesoIdeal = (72.7*altura) - 58;
	printf("Seu peso ideal e %.1f.",pesoIdeal);
}
