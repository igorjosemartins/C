/* Algoritmo do Tri�ngulo. Fa�a um algoritmo para ler a base e a altura de um tri�ngulo. 
Em seguida, escreva a �rea do mesmo. �rea = (Base * Altura) / 2

Algoritmo em uma pseudo linguagem - Portugu�s estruturado

Vari�veis
fracion�rio: Base,Altura,�rea

escreva("Digite a base do tri�ngulo:");
leia(Base);

escreva("Digite a altura do tri�ngulo:");
leia(Altura);

�rea = (Base*Altura)/2;

escreva("A �rea do tri�ngulo �:",�rea);

Fim do algoritmo */

// transformar o algoritmo em um c�digo atrav�s de uma linguagem de programa��o C/C++

// chamar as bibliotecas de comandos/instru��es
#include<conio.h>
#include<stdio.h>
#include<iostream>

// declara��o das vari�veis

float Base,Altura,Area;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
printf("Digite a base do tri�ngulo em cent�metros:");
scanf("%f",&Base);

printf("Digite a altura do tri�ngulo em cent�metros:");
scanf("%f",&Altura);

Area = (Base*Altura)/2;

printf("A �rea do tri�ngulo �:%.2f cent�metros quadrados",Area);
	

} //fim do algoritmo




