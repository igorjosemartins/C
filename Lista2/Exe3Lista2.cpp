/* A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de
broas a cada dia. Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
quer saber quanto arrecadou com a venda dos p�es e broas (juntos), e quanto deve guardar
numa conta de poupan�a (10% do total arrecadado). Voc� foi contratado para fazer os c�lculos
para o dono. Com base nestes fatos, fa�a um algoritmo para ler as quantidades de p�es e de
broas, e depois calcular os dados solicitados.

1 p�o = 0,12 reais
1 broa = 1,50 reais

valor total = x p�o + y broa 

poupan�a = valor total*0.10

Vari�veis
fracionado ValorTotal,Poupanca;
inteiro Pao,Broa;

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

float ValorTotal,Poupanca;
int Pao,Broa;
char op;

main(){

setlocale(LC_ALL, "portuguese");

do{
	system("cls");
printf("Quantos p�ezinhos voc� vendeu hoje?: ");
scanf("%i",&Pao);

printf("Quantas broas voc� vendeu hoje?: ");
scanf("%i",&Broa);

ValorTotal = (Pao*0.12) + (Broa*1.50);

Poupanca = ValorTotal*0.10;

printf("\nHoje voc� arrecadou %.2f reais",ValorTotal);
printf("\nVoc� deve guardar %.2f reais na poupan�a",Poupanca);

printf("\n\n");

fflush(stdin);
printf("\n Deseja novos valores? <S> ou <N>");
scanf("%c",&op);
op=toupper(op);
}while(op != 'N');


}

