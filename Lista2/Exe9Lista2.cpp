/* Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma sendo
vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usu�rio
forne�a a quantidade de camisetas pequenas, m�dias e grandes referentes a uma venda, e a
m�quina informe quanto ser� o valor arrecadado.

camisa P = 10 reais
camisa M = 12 reais
camisa G = 15 reais

fracionado camisaP,camisaM,camisaG;

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

int camisaP,camisaM,camisaG;
float ValorTotal;
char op;

main(){
	
	setlocale(LC_ALL,"portuguese");

do{
	system("cls");
printf("Quantas camisas pequenas?: ");
scanf("%i",&camisaP);

printf("Quantas camisas m�dias?: ");
scanf("%i",&camisaM);

printf("Quantas camisas grandes?: ");
scanf("%i",&camisaG);

ValorTotal = (camisaP*10) + (camisaM*12) + (camisaG*15);

printf("\n\nTotal de %i camisetas P, %i camisetas M e %i camisetas G.",camisaP,camisaM,camisaG);

printf("\n\nValor arrecadado na venda: %.2f reais",ValorTotal);

printf("\n\n");

fflush(stdin);
printf("\n Deseja novos valores? <S> ou <N>");
scanf("%c",&op);
//op=toupper(op);
}while(toupper(op) != 'N');
	
}
