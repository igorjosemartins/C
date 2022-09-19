/* Construa um algoritmo que leia um Vetor de 10 posições com valores inteiros.

Variáveis
Vetor[10] do tipo inteiro;
op tipo caracter;


Inicio

faça
limpa tela

escreva("Entrada de dados do Vetor[10]: ");
para(ind=0;ind<10;ind=ind+1){
	escreva("Digite o valor inteiro do Vetor[",ind",]: ");
	leia(Vetor[ind]);}
	
escreva("Saída de dados do Vetor[10]: ");
para(ind=0;ind<10;ind=ind+1){
	escreva("Vetor[",ind",]: ",Vetor[ind]);
}

escreva("Deseja novos valores ? Digite <S> ou <N>");
leia(op);
op=maiusculo(op);
Enquanto (op <> 'N');

fim algoritmo */ 

// converter para linguagem C


#include<conio.h>
#include<stdio.h>
#include<iostream>


int Vetor[10];
char op;



main(){  //Inicio

	setlocale(LC_ALL,"portuguese");
	
do{  //faça

system("cls"); //limpa tela

printf("Entrada de dados do Vetor[10]:");
for(int ind=0;ind<10;ind=ind+1){ // laço de repetição
	printf("\nDigite o valor inteiro do Vetor[%i]:",ind);
	scanf("%i",&Vetor[ind]);}
	
printf("\nSaída de dados do Vetor[10]: ");
for(int ind=0;ind<10;ind=ind+1){
	printf("\nVetor[%i]: %i",ind,Vetor[ind]);
}

/* usando o "do/while" como "for"

int i=0
do{
	printf("\nVetor[%i]: %i",i,Vetor[i]);
	i++;
}while(i<10);

*/


fflush(stdin);
printf("\nDeseja novos valores ? Digite <S> ou <N>");
scanf("%c",&op);
op = toupper(op);
}while (op != 'N'); 

}
// fim algoritmo



	
