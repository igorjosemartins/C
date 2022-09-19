/* A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias
de queijo, uma fatia de presunto e uma rodela de hamb�rguer. Sabendo que cada fatia de
queijo ou presunto pesa 50 gramas, e que a rodela de hamb�rguer pesa 100 gramas, fa�a um
algoritmo em que o dono forne�a a quantidade de sandu�ches a fazer, e a m�quina informe as
quantidades (em quilos) de queijo, presunto e carne necess�rios para compra.

sanduiche = 2 queijo, 1 presunto, 1 hamb�rguer
1 queijo/presunto = 50 gramas
1 hamb�rguer = 100 gramas

1 sanduiche = 100 gramas de queijo + 50 gramas de presunto + 100 gramas de hamb�rguer

1 kg = 1000 gramas --> 1 grama = 1/1000 kg

caracter op��o;
inteiro sanduiches;
fracionado queijo,presunto,hamburguer;


sanduiche = (2*queijo)*QTDsanduiche + (1*presunto)*QTDsanduiche + (1*hamburguer)*QTDsanduiche
queijo = 50/1000 
presunto = 50/1000
hamburguer = 100/1000

QTDqueijo = (2*50/1000)*QTDsanduiche = 0.1*QTDsanduiche
QTDpresunto = (1*50/1000)*QTDsanduiche = 0.05*QTDsanduiche
QTDhamburguer = (1*100/1000)*QTDsanduiche = 0.1*QTDsanduiche





*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

char op;
int QTDsanduiches;
float QTDqueijo,QTDpresunto,QTDhamburguer;

main(){
	
	setlocale(LC_ALL,"portuguese");
	
do{
	system("cls");
printf("Quantos sandu�ches voc� vai fazer?: ");
scanf("%i",&QTDsanduiches);

QTDqueijo = 0.1*QTDsanduiches; //QTDqueijo = (2*50/1000)*QTDsanduiches;
QTDpresunto = 0.05*QTDsanduiches; // QTDpresunto = (1*50/1000)*QTDsanduiche;
QTDhamburguer = 0.1*QTDsanduiches; // QTDhamburguer = (1*100/1000)*QTDsanduiche;

printf("\n\n Voc� vai precisar de %.2f quilos de queijo.",QTDqueijo);

printf("\n\n Voc� vai precisar de %.2f quilos de presunto.",QTDpresunto);

printf("\n\n Voc� vai precisar de %.2f quilos de hamburguer.",QTDhamburguer);

printf("\n\n");

fflush(stdin);
printf("\n Deseja novos valores? <S> ou <N>");
scanf("%c",&op);
op=toupper(op);
}while(op != 'N');
	
}
