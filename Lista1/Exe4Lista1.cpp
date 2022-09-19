/* Algoritmo 3 Menores
Faça um algoritmo que leia 3 números inteiros e imprima o menor deles.

Algoritmo em uma pseudo linguagem - Português estruturado

Variáveis
inteiros num1,num2,num3,menor;


escreva("Digite o primeiro número:");
leia(num1);

escreva("Digite o segundo número:");
leia(num2);

escreva("Digite o terceiro número:");
leia(num3);

menor = num1;

se (num2 < menor) então
	menor = num2;
	
se (num3 < menor) então
	menor = num3;
	
escreva("Primeiro número:",num1,"Segundo número:",num2,"Terceiro número",num3);
escreva("O menor número é:",menor);



*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

int num1,num2,num3,menor;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
printf("Digite o primeiro número: ");
scanf("%i",&num1);

printf("Digite o segundo número: ");
scanf("%i",&num2);

printf("Digite o terceiro número: ");
scanf("%i",&num3);

// processamento para descobrir o menor número

menor = num1; // atribuição = atribuindo o valor de num1 para a variável menor

if (num2 < menor) { 
	menor = num2;}
	
if (num3 < menor) {
	menor = num3;}
	
// mostrar os valores e o menor
	
printf("\nPrimeiro número: %i",num1);
printf("\nSegundo número: %i",num2);
printf("\nTerceiro número: %i",num3);
printf("\n\nO menor número é: %i",menor);

printf("\n\n");

system("pause");

	
} // fim do algoritmo

	
	
	
	
