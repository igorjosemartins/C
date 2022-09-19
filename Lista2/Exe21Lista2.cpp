/* A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml,
garrafa de 600 ml e garrafa de 2 litros. Se um comerciante compra uma determinada
quantidade de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele
comprou.

Variáveis
Lata
Garrafa600
Garrafa2L
LitrosComprados

1000ml = 1 L  -> 

escreva("Quantas Latas de refrigerante você comprou?: ");
leia(Lata);

escreva("Quantas garrafas de 600 ml de refrigerante você comprou?: ");
leia(Garrafa600);

escreva("Quantas garrafas de 2 litros de refrigerante você comprou?: ");
leia(Garrafa2L);


LitrosComprados = (Lata + Garrafa600)/1000 + Garrafa2L

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

float Lata,Garrafa600,Garrafa2L,LitrosComprados;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
printf("Quantas latas de 350 ml de refrigerante você comprou?: ");
scanf("%f",&Lata);

printf("Quantas garrafas de 600 ml de refrigerante você comprou?: ");
scanf("%f",&Garrafa600);

printf("Quantas garrafas de 2 litros de refrigerante você comprou?: ");
scanf("%f",&Garrafa2L);

Lata = Lata*350;
Garrafa600 = Garrafa600*600;
Garrafa2L = Garrafa2L*2;


LitrosComprados = (Lata + Garrafa600)/1000 + Garrafa2L;

printf("\nVocê comprou %.2f litros de refrigerante.",LitrosComprados);

printf("\n\n");

system("pause");



}


