/* Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de
vida ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma
pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ
VIVEU 6935 DIAS 5.

Variáveis
caracter Nome
inteiro Idade,Dias



escreva("Digite seu nome:");
leia("Nome");

escreva("Digite sua idade:");
leia("Idade");

Dias = Idade*365

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

char Nome[30];
int Idade,Dias;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
	
printf("Digite o nome da pessoa: ");
scanf("%s",&Nome);

printf("\nDigite a idade da pessoa: ");
scanf("%i",&Idade);

Dias = Idade*365;

printf("\n%s tem %i dias de vida",Nome,Dias);
	
printf("\n\n");
	
system("pause");
	
}


