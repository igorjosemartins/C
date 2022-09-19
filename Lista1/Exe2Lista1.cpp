/* Algoritmo Preço de Automóvel
O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos
impostos (45% do preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica).
Faça um algoritmo que leia o nome do automóvel e o preço de fábrica e imprima o nome do
automóvel e o preço final.

Algoritmo em uma pseudo linguagem - Português estruturado

Variáveis
caractér: Nome_Carro;
fracionário: Preço_fabrica,Preço_impostos,Revendedor,Preço_final;

escreva("Digite o nome do automóvel:");
leia(Nome_Carro);

escreva("Digite o preço de fábrica:");
leia(Preço_fabrica);

Preço_impostos = Preço_fabrica*45/100

Revendedor = Preço_fabrica*28/100

Preço_final = Preço_fabrica + Preço_impostos + Revendedor

escreva("Nome do automóvel:");

escreva("Preço final:");
leia(Preço_final);

*/ 

#include<conio.h>
#include<stdio.h>
#include<iostream>

char Nome_Carro[30]; // String (%s)
float Preco_fabrica,Preco_impostos,Revendedor,Preco_final;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
printf("Digite o nome do automóvel: ");
scanf("%s",&Nome_Carro);

printf("Digite o preço de fábrica: ");
scanf("%f",&Preco_fabrica);

Preco_impostos = Preco_fabrica*0.45; 

Revendedor = Preco_fabrica*0.28; 

Preco_final = Preco_fabrica + Preco_impostos + Revendedor; 

printf("\nNome do automóvel: %s",Nome_Carro);

printf("\nPreço final: %.2f Reais",Preco_final);


}




