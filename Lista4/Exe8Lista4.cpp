/* 8. Leia um vetor de 40 posi��es. Contar e escrever quantos valores pares ele
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

printf("\n Gerando 40 n�meros inteiros...\n");
for(int i=0;i<40;i++) {
	Vetor[i] = rand() % 100;
	printf("\nVetor[%i]: %i\n",i,Vetor[i]);
}

printf("\nSelecionando os n�meros pares...\n");
for(int i=0;i<40;i++) {
	if(Vetor[i] % 2 == 0) { // / 2 - resto = 0
	printf("\n Vetor[%i]: %i � par\n",i,Vetor[i]);
	QtdPar++; 
	}
}

printf("\nSelecionando os n�meros �mpares...\n");
for(int i=0;i<40;i++) {
	if(Vetor[i] % 2 != 0) {
	printf("\nVetor[%i]: %i � �mpar\n",i,Vetor[i]);
	QtdImpar++;
}
}
printf("\nQuantidade de n�meros pares: %i\n",QtdPar);
printf("\nQuantidade de n�meros �mpares: %i\n",QtdImpar);

printf("\n\n");

printf("\n Deseja novos valores ? Digite <S> ou <N>");
op=getche();
op=toupper(op);
}while(op != 'N');

}
	





