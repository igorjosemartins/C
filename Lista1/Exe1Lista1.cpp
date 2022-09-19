/* Algoritmo do Triângulo. Faça um algoritmo para ler a base e a altura de um triângulo. 
Em seguida, escreva a área do mesmo. Área = (Base * Altura) / 2

Algoritmo em uma pseudo linguagem - Português estruturado

Variáveis
fracionário: Base,Altura,Área

escreva("Digite a base do triângulo:");
leia(Base);

escreva("Digite a altura do triângulo:");
leia(Altura);

Área = (Base*Altura)/2;

escreva("A área do triângulo é:",Área);

Fim do algoritmo */

// transformar o algoritmo em um código através de uma linguagem de programação C/C++

// chamar as bibliotecas de comandos/instruções
#include<conio.h>
#include<stdio.h>
#include<iostream>

// declaração das variáveis

float Base,Altura,Area;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
printf("Digite a base do triângulo em centímetros:");
scanf("%f",&Base);

printf("Digite a altura do triângulo em centímetros:");
scanf("%f",&Altura);

Area = (Base*Altura)/2;

printf("A área do triângulo é:%.2f centímetros quadrados",Area);
	

} //fim do algoritmo




