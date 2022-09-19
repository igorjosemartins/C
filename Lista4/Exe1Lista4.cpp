/*1 - Construa um programa em C/C++ que tenha as 
seguintes opções de Menu:
1.1 - Leia um vetor de 10 posições com valores
aleatórios 0-100 e na sequência selecione
aleatoriamente três posições/índices deste 
vetor e apresente os seus valores e a multiplicação 
destes.
1.2 - Leia dois vetores de 5 posições com valores 
inteiros cada e gere um terceiro com os resultados 
da soma dos valores sendo a lógica: soma o 1ª elemento 
do 1º vetor com o 5º elemento do 2º vetor, 2ª elemento
do 1º vetor com o 4º elemento do 2º vetor, 
e assim sucessivamente.
1.3 - Construa um vetor de 13 posições com valores 
caracteres aleatórios e na sequência pedir para o 
usuário digitar um caracter e localizar onde 
este está no vetor e quantas vezes aparece.

//Varáveis 
//1.1
Vetor[10] tipo inteiro;
Pos1,Pos2,Pos3 tipo inteiro;
MultiElementos tipo inteiro;
//1.2
V1,V2,V3 tipo inteiro;
//1.3
VetorChar[13] tipo caracter;
caracter tipo caracter;
QtdVezes tipo inteiro;

op tipo caracter;

Inicio
//rótulo
Menu: 
limpa tela
escreva("Menu de opções");
escreva("1 - Leia um vetor[10] valores inteiros");
escreva("2 - Leia dois vetor[5] valores inteiros");
escreva("3 - Leia vetor[13] valores caracteres");
escreva("4 - Sair do Sistema");
escreva("Digite a opção deseja");
leia(op);

se(op == '1') então
escreva("Preencher aleatoriamente Vetor[10]");
para(int i=0;i<10;i++)
   Vetor[i] = randomizar 0-100;
fimpara

escreva("Digite a primeira posição desejada");
leia(Pos1);
escreva("Digite a segunda posição desejada");
leia(Pos2);
escreva("Digite a terceira posição desejada");
leia(Pos3);   

escreva("Pos1:",Pos1,"contém:",Vetor[Pos1]);
escreva("Pos2:",Pos2,"contém:",Vetor[Pos2]);
escreva("Pos3:",Pos3,"contém:",Vetor[Pos3]);
MultiElementos = Pos1*Pos2*Pos3;
escreva("Multiplicação das 3 posições:",MultiElementos);

escreva("Tecle <enter> para voltar ao Menu Principal");
leia();
Vá para Menu;// direciona-se ao rótulo Menu
fimse

se(op == '2') então
escreva("Preencher dois Vetores V1[5] e V2[5] e gerar V3[5]");
escreva("Preencher o V1[5]");
para(int i=0;i<5;i++)
 escreva("V1[",i,"]: ");
 leia(V1[i]);
fimpara

escreva("Preencher o V2[5]");
para(int i=0;i<5;i++)
 escreva("V2[",i,"]: ");
 leia(V2[i]);
fimpara

escreva(" V1[5] e V2[5]");
para(int i=0;i<5;i++)
  escreva("V1[",i,"]:",V1[i]," + V2[",4-i,"]:",V2[4-i]);
fimpara

escreva("Gerar o V3[5]");
para(int i=0;i<5;i++)
   V3[i] = V1[i] + V2[4-i];
   escreva("V3[",i,"]: ",V3[i]);
 fimpara

escreva("Tecle <enter> para voltar ao Menu Principal");
leia();
Vá para Menu;// direciona-se ao rótulo Menu
fimse

se(op == '3') então
escreva("Preencher VetorChar[13] com caracteres A-Z");
para(int i=0;i<13;i++)
VetorChar[i] = randomizar A-Z;
 escreva("VetorChar[",i,"]: ");
fimpara

escreva("Digite um caracter aleatório de A-Z") 
leia(caracter);
caracter=maísculo(caracter);
QtdVezes = 0;
para(int i=0;i<13;i++)
  se(caracter == VetorChar[i])
      QtiVezes= QtiVezes + 1;
      escreva("Caracter na Pos:",i,:",VetorChar[i]);
  fimse    
  fimpara
escreva("O caracter:",caracter," Aparaceu ",QtdVezes, Vezes no Vetor");

escreva("Tecle <enter> para voltar ao Menu Principal");
leia();
Vá para Menu;// direciona-se ao rótulo Menu
fimse
      
se(op == '4') então
escreva("Sair do Sistema, Tecle enter)";
leia();
sair sistema;

fimalgoritmo. */

#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<cstdlib>

//Variáveis 
//1.1
int Vetor10[10];
int Pos1,Pos2,Pos3;
int MultiElementos;

//1.2
int Vetor1[5],Vetor2[5],Vetor3[5];

//1.3
char VetorChar[13];
char caracter;
int QtdVezes;

//ferramentas globais
char op;

//Inicio
main(){
	
setlocale(LC_ALL,"portuguese");

//rótulo
Menu: 
system("cls");
printf("Menu de opções");
printf("\n1 - Gerar um vetor de 10 posições com valores aleatórios, mostrando 3 valores e multiplicando-os");
printf("\n2 - Gerar dois vetores de 5 posições com valores inteiros e gerar um terceiro a partir da soma dos dois primeiros");
printf("\n3 - Vetor de 13 posições com caractéres aleatórios");
printf("\n4 - Sair do Sistema");
printf("\nDigite a opção desejada: ");
scanf("%c",&op);


// OPÇÃO 1

if(op == '1') {
printf("\nGerar 10 valores inteiros aleatórios");
for(int i=0;i<10;i++) {
	
   Vetor10[i] = rand() % 100;
   
   printf("Vetor[%i]= %i",i,Vetor10[i]);
}

//N1

do{
printf("\nDigite a primeira posição desejada: ");
scanf("%i",&Pos1);
if (Pos1 < 0 || Pos1 > 9) {
	printf("\nNúmero inválido. Digite um valor entre 0 e 9.");
}
}while (Pos1 < 0 || Pos1> 9);


//N2
do{
printf("\nDigite a segunda posição desejada: ");
scanf("%i",&Pos2);
if (Pos2 < 0 || Pos2 > 9) {
	printf("\nNúmero inválido. Digite um valor entre 0 e 9.");
}
}while (Pos2 < 0 || Pos2 > 9);


//N3
do{
printf("\nDigite a terceira posição desejada: ");
scanf("%i",&Pos3);  
if (Pos3 < 0 || Pos3 > 9) {
	printf("\nNúmero inválido. Digite um valor entre 0 e 9.");
}
}while (Pos3 < 0 || Pos3 > 9); 

printf("\nVetor10[%i]= %i",Pos1,Vetor10[Pos1]);
printf("\nVetor10[%i]= %i",Pos2,Vetor10[Pos2]);
printf("\nVetor10[%i]= %i",Pos3,Vetor10[Pos3]);		


MultiElementos = Pos1*Pos2*Pos3;
printf("\nValor da multiplicação das 3 posições: %i",MultiElementos);

printf("\nTecle <enter> para voltar ao Menu Principal");
getche();
goto Menu;// direciona-se ao rótulo Menu
}



// OPÇÃO 2

if (op == '2') {
printf("\nPreencher dois vetores de 5 posições e gerar um terceiro vetor a partir deles");

//VETOR 1

printf("\nPreencher o Vetor1[5]");
for(int i=0;i<5;i++) {
 printf("\nDigite o valor do Vetor1[%i]: ",i);
 scanf("%i",&Vetor1);
}

// VETOR 2

printf("\nPreencher o Vetor2[5]");
for(int i=0;i<5;i++) {
 printf("\nDigite o valor do Vetor2[%i]: ");
 scanf("%i",&Vetor2);
}

// GERANDO O VETOR 3

printf("\nGerar o Vetor3[5] a partir dos últimos dois vetores");
for(int i=0;i<5;i++) {
   Vetor3[i] = Vetor1[i] + Vetor2[4-i];
   printf("Vetor3[%i]: %i"),i,Vetor3[i];
}

printf("\nTecle <enter> para voltar ao Menu Principal");
getche();
goto Menu;// direciona-se ao rótulo Menu
}



// OPÇÃO 3 

if(op == '3') {
printf("\nPreencher um vetor de 13 posições com caracteres aleatórios de A-Z");
for(int i=0;i<13;i++) {
VetorChar[i] = rand() % 25 + 65;
 printf("\nVetorChar[%i]: %c",i,VetorChar[i]);
}

do{
printf("\nDigite um caracter aleatório de A-Z: ");
fflush(stdin);
scanf("%c",&caracter);
caracter=toupper(caracter);
if (caracter < 65 || caracter > 90) {
	printf("\nCaracter não está entre A-Z, digite novamente.");
}
}while (caracter < 65 || caracter > 90);

	QtdVezes = 0;
  if(caracter == VetorChar[i]) {
      printf("Caracter procurado: %c",caracter);
      for(int i = 0, i < 13, i++) {
      	if (caracter == VetorChar[i]) {
      	
      	  printf("VetorChar[%i]= %c",i,VetorChar[i]);
      	  QtdVezes = QtdVezes + 1;
      }
	}    
  }
    
printf("\nO caracter: %c apareceu %i vezes no Vetor"),caracter,QtdVezes;

printf("\nTecle <enter> para voltar ao Menu Principal");
getche();
goto Menu;// direciona-se ao rótulo Menu
}

}
      
      
/* OPÇÃO 4

if (op == '4') {
printf("\nSair do Sistema, Tecle <enter>)";
scanf();


}
} */

