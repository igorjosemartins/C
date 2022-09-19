/* Algoritmo PA – Progressão Aritmética
Faça um programa que imprima os elementos de uma PA e o somatório da mesma dados :
primeiro termo , numero de termos e razão. */


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
	
	printf("\nDigite o número de termos da PA: ");
	scanf("%f",&nt);
	
	printf("\nDigite a razão da PA: ");
	scanf("%f",&r);
	
	pa = (pt),(pt+r),(pt+2*r),(pt+3*r);
	
	st = ((pt+tg)*nt)/2;
	
	printf("\n============================================");
	printf("\nElementos da PA: %.2f",tg);
	printf("\n============================================");
	printf("\nSomatório dos termos da PA: %.2f",st);
	printf("\n============================================");
	
	
printf("\n\n");
fflush(stdin);
printf("Deseja inserir novos valores? Digite <S> ou <N>");
scanf("%c",op);
op=toupper(op);
}while (op != 'N');

	
	
}
