/* Algoritmo Pre�o de Autom�vel
O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica com o pre�o dos
impostos (45% do pre�o de f�brica) e a percentagem do revendedor (28% do pre�o de f�brica).
Fa�a um algoritmo que leia o nome do autom�vel e o pre�o de f�brica e imprima o nome do
autom�vel e o pre�o final.

Algoritmo em uma pseudo linguagem - Portugu�s estruturado

Vari�veis
caract�r: Nome_Carro;
fracion�rio: Pre�o_fabrica,Pre�o_impostos,Revendedor,Pre�o_final;

escreva("Digite o nome do autom�vel:");
leia(Nome_Carro);

escreva("Digite o pre�o de f�brica:");
leia(Pre�o_fabrica);

Pre�o_impostos = Pre�o_fabrica*45/100

Revendedor = Pre�o_fabrica*28/100

Pre�o_final = Pre�o_fabrica + Pre�o_impostos + Revendedor

escreva("Nome do autom�vel:");

escreva("Pre�o final:");
leia(Pre�o_final);

*/ 

#include<conio.h>
#include<stdio.h>
#include<iostream>

char Nome_Carro[30]; // String (%s)
float Preco_fabrica,Preco_impostos,Revendedor,Preco_final;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
printf("Digite o nome do autom�vel: ");
scanf("%s",&Nome_Carro);

printf("Digite o pre�o de f�brica: ");
scanf("%f",&Preco_fabrica);

Preco_impostos = Preco_fabrica*0.45; 

Revendedor = Preco_fabrica*0.28; 

Preco_final = Preco_fabrica + Preco_impostos + Revendedor; 

printf("\nNome do autom�vel: %s",Nome_Carro);

printf("\nPre�o final: %.2f Reais",Preco_final);


}




