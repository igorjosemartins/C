/* Algoritmo PA � Progress�o Aritm�tica
Fa�a um programa que imprima os elementos de uma PA e o somat�rio da mesma dados :
primeiro termo , numero de termos e raz�o. */


#include<conio.h>
#include<stdio.h>
#include<iostream>

char op;
float pt,nt,r,st,pa;


main(){
	
do{
	
	
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	printf("Digite o primeiro termo da PA: ");
	scanf("%f",&pt);
	
	printf("\nDigite o n�mero de termos da PA: ");
	scanf("%f",&nt);
	
	printf("\nDigite a raz�o da PA: ");
	scanf("%f",&r);
	
	pa = (pt),(pt+r),(pt+2*r),(pt+3*r);
	
	st = ((pt+tg)*nt)/2;
	
	printf("\n============================================");
	printf("\nElementos da PA: %.2f",tg);
	printf("\n============================================");
	printf("\nSomat�rio dos termos da PA: %.2f",st);
	printf("\n============================================");
	
	
printf("\n\n");
fflush(stdin);
printf("Deseja inserir novos valores? Digite <S> ou <N>");
scanf("%c",op);
op=toupper(op);
}while (op != 'N');

	
	
}
