#include<stdio.h>
#include<stdlib.h>

//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

int main()
{
	float valorHora, total;
	int HorasMes;
	
	printf("Quanto voce ganha por hora?\n");
	scanf("%f",&valorHora);
	printf("Quantas horas foram trabalhadas no mes?\n");
	scanf("%d",&HorasMes);
	total = HorasMes * valorHora;
	printf("O total do seu salario no mes em questao e de %.2f.",total);
}
