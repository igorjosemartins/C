/*1. Escreva um algoritmo que leia o nome de duas cidades,
 em seguida a dist�ncia em KM. Supondo que voc� ir� viajar 
 de uma para outra e o seu carro possui um tanque de combust�vel 
 de 45 litros de gasolina, e este faz uma m�dia de 10km/litro. 
 Apresente quantos litros voc� ir� gastar e quantos tanques. 
 Pe�a para inserir o pre�o da gasolina e calcule o custo da viagem.
 
CidadePartida caracter
CidadeChegada caracter
Distancia fracionario
QtidadeLitrosGasto fracionario
PrecoCombustivel fracionario
CustoViagem Fracionario
QtidadeTanques fracionario

escreva("Digite a Cidade de Partida");
leia(CidadePartida);
escreva("Digite a Cidade de Chegada");
leia(CidadeChegada);
escreva("Digite a dist�ncia entre as Cidades");
leia(Distancia);
escreva("Digite o pre�o do combust�vel");
leia(PrecoCombustivel);

QtidadeLitrosGasto = Distancia/10;
CustoViagem  = QtidadeLitrosGasto * PrecoCombustivel;

QtidadeTamques = QtidadeLitrosGasto /45;

*/ 

#include<conio.h>
#include<stdio.h>
#include<iostream>

char CidadePartida[30],CidadeChegada[30];
float Distancia,QtidadeLitrosGasto,PrecoCombustivel,CustoViagem,QtidadeTanques;

main(){

	setlocale(LC_ALL, "portuguese");
	
	
printf("Digite a Cidade de Partida: ");
scanf("%s",&CidadePartida);

printf("Digite a Cidade de Chegada: ");
scanf("%s",&CidadeChegada);

printf("Digite a dist�ncia entre as Cidades: ");
scanf("%f",&Distancia);

printf("Digite o pre�o do combust�vel: ");
scanf("&f",&PrecoCombustivel);

QtidadeLitrosGasto = Distancia/10;

CustoViagem  = QtidadeLitrosGasto*PrecoCombustivel;

QtidadeTanques = QtidadeLitrosGasto/45;

printf("\nQuantos litros voc� ir� gastar: %.2f",QtidadeLitrosGasto);

printf("\nQuantos tanques voc� ir� usar: %.2f",QtidadeTanques);

printf("\nCusto da viagem: %.2f",CustoViagem);

printf("\n\n");

system("pause");	


}

 
