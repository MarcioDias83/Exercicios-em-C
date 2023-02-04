#include<stdio.h>
#include<stdlib.h>

/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto, 
quanto pagou ao INSS, quanto pagou ao sindicato, o salário líquido, calcule os descontos e o salário líquido, conforme a tabela abaixo:

+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.*/

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
