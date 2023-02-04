#include<stdio.h>
#include<stdlib.h>

/*Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s.

Calcule e mostre o total do seu sal�rio no referido m�s, sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�: sal�rio bruto, 
quanto pagou ao INSS, quanto pagou ao sindicato, o sal�rio l�quido, calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:

+ Sal�rio Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Sal�rio Liquido : R$
Obs.: Sal�rio Bruto - Descontos = Sal�rio L�quido.*/

int main()
{
	float salarioBruto, inss, ir, sindicato, SalarioLiquido;
	
	printf("Qual e o salario bruto?\n");
	scanf("%f",&salarioBruto);
	ir = (salarioBruto * 11) / 100;
	
	if(salarioBruto <= 1903.98)
	{
		ir = 0;
	}
	if(salarioBruto >= 1903.99 && salarioBruto <= 2826.65)
	{
		ir = (salarioBruto * 7.5) / 100;
	}
	if(salarioBruto >= 2826.66 && salarioBruto <= 3751.05)
	{
		ir = (salarioBruto * 15) / 100;
	}
	if(salarioBruto >= 3751.06 && salarioBruto <= 4664.68)
	{
		ir = (salarioBruto * 22.5) / 100;
	}
	else
	{
		ir = (salarioBruto * 27.5) / 100;
	}
	inss = (salarioBruto * 8) /100;
	sindicato = (salarioBruto * 5) /100;
	SalarioLiquido = salarioBruto - ir - inss - sindicato;
	printf("O seu salario liquido e de %.2f.",SalarioLiquido);
}
