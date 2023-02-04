#include<stdio.h>
#include<stdlib.h>

/*Faça um Programa que peça 2 números inteiros e um número real. 
Calcule e mostre: o produto do dobro do primeiro com metade do segundo. 
A soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.*/

int main()
{
	int numero1, numero2, resultado1;
	float real, resultado2, resultado3;
	
	printf("Digite o primeiro numero inteiro:\n");
	scanf("%d",&numero1);
	printf("Digite o segundo numero inteiro:\n");
	scanf("%d",&numero2);
	printf("Digite um numero real. Ex.: 2.25\n");
	scanf("%f",&real);
	resultado1 = (numero1 * 2) * (numero2 / 2); 
	resultado2 = (numero1 * 3) + real;
	resultado3 = pow(real,3);
	printf("\nO produto do dobro do primeiro com metade do segundo e %d.\n",resultado1);
	printf("A soma do triplo do primeiro com o terceiro e %.2f.\n",resultado2);
	printf("O terceiro elevado ao cubo e %.2f.",resultado3);
}
