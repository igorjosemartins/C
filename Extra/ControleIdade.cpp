/*Construa um algoritmo para ler o nome de um paciente, sua idade, peso e altura.
Na sequência, mostra na tela o nome, o peso e altura e a idade, dizendo se este 
é conforme a idade: Idade <= 12, é criança, Idade > 12 e idade <= 18 é adolescente,
e idade > 18 é adulto

Algoritmo em uma pseudo linguagem - Português estruturado

Variáveis
caracter: Nome_Paciente
inteiro: Idade
fracionário: Peso, Altura

escreva("Digite o nome do paciente");
leia(Nome_Paciente);

escreva("Digite a idade do paciente");
leia(Idade);

escreva("Digite o peso do paciente");
leia(Peso);

escreva("Digite a altura do paciente");
leia(Altura);

escreva("O paciente se chama:", Nome_Paciente);
escreva("Seu peso é:", Peso);
escreva("Sua altura é:", Altura);

Se (Idade <= 12) então 	
	escreva("Paciente é uma criança pois possui:", Idade, "Anos");
	
Se (Idade > 12 e Idade <= 18) então
	escreva("Paciente é um adolescente pois possui:", Idade, "Anos");
	
Se (Idade > 18) então 	
	escreva("Paciente é um adulto pois possui:", Idade, "Anos");

Fim do algoritmo */


// transformar o algoritmo em um código através de uma linguagem de programação C/C++

// chamar as bibliotecas de comandos/instruções


#include<conio.h>
#include<stdio.h>
#include<iostream>

// declaração das variáveis

char Nome_Paciente[30]; // variável conjunto de 30 caractéres para o Nome_Paciente - String (%s = operador percentual) = Conjunto de caractéres 
int Idade; // (%i = operador percentual)
float Peso,Altura; // variáveis do tipo fracionário (%f = operador percentual)

main(){ // programa principal - Início
	
	setlocale(LC_ALL, "portuguese"); // configuração para uso do português
	
	
printf("Digite o nome do paciente:"); // printf = escreva
scanf("%s",&Nome_Paciente); // scanf = leia

printf("Digite a idade do paciente:"); // printf = escreva
scanf("%i",&Idade); // scanf = leia

printf("Digite o peso do paciente:"); // printf = escreva
scanf("%f",&Peso); // scanf = leia

printf("Digite a altura do paciente:"); // printf = escreva
scanf("%f",&Altura); // scanf = leia

printf("\nO paciente se chama: %s", Nome_Paciente);

printf("\nSeu peso é: %.2f quilos", Peso); // ".2" antes do operador percentual significa "2" casas depois da vírgula


printf("\nSua altura é: %.2f metros", Altura); // ".2" antes do operador percentual significa "2" casas depois da vírgula


if (Idade <= 12) { 	
	printf("\nPaciente é uma criança pois possui: %i Anos",Idade);}
	
if (Idade > 12 && Idade <= 18) {
	printf("\nPaciente é um adolescente pois possui: %i Anos",Idade);}
	
if (Idade > 18) { 	
	printf("\nPaciente é um adulto pois possui: %.i Anos",Idade);}
	
	
} // fim do algoritmo


