/* Algoritmo 3 Menores
Fa�a um algoritmo que leia 3 n�meros inteiros e imprima o menor deles.

Algoritmo em uma pseudo linguagem - Portugu�s estruturado

Vari�veis
inteiros num1,num2,num3,menor;


escreva("Digite o primeiro n�mero:");
leia(num1);

escreva("Digite o segundo n�mero:");
leia(num2);

escreva("Digite o terceiro n�mero:");
leia(num3);

menor = num1;

se (num2 < menor) ent�o
	menor = num2;
	
se (num3 < menor) ent�o
	menor = num3;
	
escreva("Primeiro n�mero:",num1,"Segundo n�mero:",num2,"Terceiro n�mero",num3);
escreva("O menor n�mero �:",menor);



*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

int num1,num2,num3,menor;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
printf("Digite o primeiro n�mero: ");
scanf("%i",&num1);

printf("Digite o segundo n�mero: ");
scanf("%i",&num2);

printf("Digite o terceiro n�mero: ");
scanf("%i",&num3);

// processamento para descobrir o menor n�mero

menor = num1; // atribui��o = atribuindo o valor de num1 para a vari�vel menor

if (num2 < menor) { 
	menor = num2;}
	
if (num3 < menor) {
	menor = num3;}
	
// mostrar os valores e o menor
	
printf("\nPrimeiro n�mero: %i",num1);
printf("\nSegundo n�mero: %i",num2);
printf("\nTerceiro n�mero: %i",num3);
printf("\n\nO menor n�mero �: %i",menor);

printf("\n\n");

system("pause");

	
} // fim do algoritmo

	
	
	
	
