/* 8. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma
das seguintes categorias: 
infantil A = 5 - 7 anos
infantil B = 8-10 anos
juvenil A = 11-13 anos
juvenil B = 14-17 anos
adulto = maiores de 18 anos

variaveis

int idade;
int infantilA,infantilB,juvenilA,juvenilB,adulto;



printf("Digite a idade do nadador: ");
scanf("%i",&idade);

if (idade = 5 >= 7) {
	(idade = infantilA);}
	
if (idade = 8 >= 10) {
	(idade = infantilB);}
	
if (idade = 11 >= 13) {
	(idade = juvenilA);}
	
if (idade = 14 >= 17) {
	(idade = juvenilB);}

if (idade >= 18) {
	(idade = adulto);}
	
printf("\nCategoria do nadador: %i",idade); */


#include<conio.h>
#include<stdio.h>
#include<iostream>

char op;
int idade;

main(){

do{
	system("cls");

printf("Digite a idade do nadador: ");
scanf("%i",&idade);


if (idade >= 5 && idade<= 7) {
	printf("\n==============================================");
	printf("\nCategoria do nadador: infantil A");
	printf("\n==============================================");}
	
if (idade >= 8 && idade<= 10) {
	printf("\n==============================================");
	printf("\nCategoria do nadador: infantil B");
	printf("\n==============================================");}
	
if (idade >= 11 && idade<= 13) {
	printf("\n==============================================");
	printf("\nCategoria do nadador: juvenil A");
	printf("\n==============================================");}
	
if (idade >= 14 && idade<= 17) {
	printf("\n==============================================");
	printf("\nCategoria do nadador: juvenil B");
	printf("\n==============================================");}

if (idade >= 18) {
	printf("\n==============================================");
	printf("\nCategoria do nadador: adulto");
	printf("\n==============================================");}
	
	printf("\n\n");
	

printf("\nDeseja inserir novos valores? Digite <S> ou <N>.");
scanf("%s",&op);
op=toupper(op);
}while (op !='N');



}



	
