 /* A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No
p� direito do frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is
para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa
R$4,00 e o anel de alimento custa R$3,50, fa�a um algoritmo para calcular o gasto total da
granja para marcar todos os seus frangos


AnelChip = 4 reais
AnelAlimento = 2*3,50 reais

1 frango = AnelChip + AnelAlimento

GastoTotal = QTDfrango*AnelChip + QTDfrango*AnelAlimento

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

char op;
int QTDfrango;
float AnelChip,AnelAlimento,GastoTotal;

main(){
	
	setlocale(LC_ALL,"portuguese");
	
do{
	system("cls");
printf("Quantos frangos sua granja tem?: ");
scanf("%i",&QTDfrango);

AnelChip = 4;
AnelAlimento = 2*3.50;

GastoTotal = QTDfrango*AnelChip + QTDfrango*AnelAlimento;

printf("\nCusto do anel com chip de identifica��o por frango: 4 reais.");

printf("\nCusto do anel de alimenta��o por frango: 7 reais.");

printf("\n\nGasto total da marca��o dos frangos: %.2f reais.",GastoTotal);

printf("\n\n");

fflush(stdin);
printf("Deseja inserir novos valores? <S> ou <N>");
scanf("%c",&op);
op=toupper(op);
}while(op != 'N');
	
}




