#include<stdio.h>
#include<stdlib.h>

//Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.

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
