/* 8. Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele
possui. */

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>


int Vetor[40],QtdPar,QtdImpar;
char op;


main(){

do{

setlocale(LC_ALL,"portuguese");

	system("cls");
	
QtdPar = 0;
QtdImpar = 0;

printf("\n Gerando 40 números inteiros...\n");
for(int i=0;i<40;i++) {
	Vetor[i] = rand() % 100;
	printf("\nVetor[%i]: %i\n",i,Vetor[i]);
}

printf("\nSelecionando os números pares...\n");
for(int i=0;i<40;i++) {
	if(Vetor[i] % 2 == 0) { // / 2 - resto = 0
	printf("\n Vetor[%i]: %i é par\n",i,Vetor[i]);
	QtdPar++; 
	}
}

printf("\nSelecionando os números ímpares...\n");
for(int i=0;i<40;i++) {
	if(Vetor[i] % 2 != 0) {
	printf("\nVetor[%i]: %i é ímpar\n",i,Vetor[i]);
	QtdImpar++;
}
}
printf("\nQuantidade de números pares: %i\n",QtdPar);
printf("\nQuantidade de números ímpares: %i\n",QtdImpar);

printf("\n\n");

printf("\n Deseja novos valores ? Digite <S> ou <N>");
op=getche();
op=toupper(op);
}while(op != 'N');

}
	





