/*Construa um vetor de 5 posi��es com valores inteiros e na 
sequ�ncia localize o maior valor e seu �ndice e o menor valor e
seu �ndice. 
Primeiramente entre com os valores, mostre o vetor original e 
na sequ�ncia localize o maior e o menor mostrando eles na tela com 
seu respectivo �ndice.

Vari�veis

int VetorInt[5];
char op;
int Maior;
int Menor;

In�cio

fa�a
	limpa tela
//entre com os valores
Para(indice=0,indice < 5,indice=indice+1);
escreva("Digite o valor do VetorInt",[indice]: ");
leia(VetorInt[indice]);
fimpara


//localizar o menor

Menor = VetorInt[0];
para(indice=0,indice < 5, i++);

se(VetorInt[indice] < Menor)
	Menor = VetorInt[indice]; 
fimse

fimpara

//localizar o maior

Maior = VetorInt[0];
para(indice=0,indice < 5, i++);

se(VetorInt[indice] > Maior)
	Maior = VetorInt[indice]; 
fimse

fimpara

//mostre o vetor original

Para(indice=0,indice < 5,indice=indice+1);
escreva("\n VetorInt[",indice,"]: ",VetorInt[indice]);
fimpara

escreva("\nMenor vetor: %i ",Menor);
escreva("\nMaior vetor: %i ",Maior);
escreva("\n\n");

escreva("\nDeseja fazer outro calculo? Digite <S> ou <N>.");
leia("%s",&op);
op=toupper(op);
enquanto (op !='N'); */

#include <conio.h>
#include <stdio.h>
#include <iostream>

int VetorInt[5];
char op;
int Maior;
int Menor;

main(){

do{
	setlocale(LC_ALL, "portuguese");
	
	system("cls");
//entre com os valores
for(int indice=0; indice < 5; indice++) {
printf("Digite o valor do Vetor[%i]: ",indice);
scanf("%i",&VetorInt[indice]);
}


//localizar o menor

Menor = VetorInt[0];
for(int indice=0; indice < 5; indice++) {

if(VetorInt[indice] < Menor) {

	Menor = VetorInt[indice]; 
}

}

//localizar o maior

Maior = VetorInt[0];
for(int indice=0; indice < 5; indice++) {

if(VetorInt[indice] > Maior) {

	Maior = VetorInt[indice]; 
}

}

//mostre o vetor original

for(int indice=0; indice < 5; indice++) {

printf("\nVetor[%i] original: %i",indice,VetorInt[indice]);
}

printf("\nMenor vetor: %i ",Menor);
printf("\nMaior vetor: %i ",Maior);
printf("\n\n");

printf("\nDeseja fazer outro calculo? Digite <S> ou <N>.");
scanf("%s",&op);
op=toupper(op);
}while (op !='N');


}










