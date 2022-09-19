/* A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de
broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar
numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos
para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
broas, e depois calcular os dados solicitados.

1 pão = 0,12 reais
1 broa = 1,50 reais

valor total = x pão + y broa 

poupança = valor total*0.10

Variáveis
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
printf("Quantos pãezinhos você vendeu hoje?: ");
scanf("%i",&Pao);

printf("Quantas broas você vendeu hoje?: ");
scanf("%i",&Broa);

ValorTotal = (Pao*0.12) + (Broa*1.50);

Poupanca = ValorTotal*0.10;

printf("\nHoje você arrecadou %.2f reais",ValorTotal);
printf("\nVocê deve guardar %.2f reais na poupança",Poupanca);

printf("\n\n");

fflush(stdin);
printf("\n Deseja novos valores? <S> ou <N>");
scanf("%c",&op);
op=toupper(op);
}while(op != 'N');


}

