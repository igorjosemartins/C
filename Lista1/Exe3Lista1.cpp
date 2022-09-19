/* Algoritmo Media Valor
Dado uma série de 05 valores inteiros de temperatura, leia este 5 valores e calcule a média
destes, e em seguida apresente esta média e caso esta seja maior e igual que 30 graus
escreva “temperatura acima da média, calor”, caso esta média seja inferior ou igual a 15 graus
“temperatura a baixo da média, frio “ e se esta estiver no intervalo entre estes dois valores,
“temperatura mediana, temperatura agradável”

Algoritmo em uma pseudo linguagem - Português estruturado

Variáveis
inteiro: temp1,temp2,temp3,temp4,temp5,media;

escreva("Digite a primeira temperatura:");
leia(temp1);

escreva("Digite a segunda temperatura:");
leia(temp2);

escreva("Digite a terceira temperatura:");
leia(temp3);

escreva("Digite a quarta temperatura:");
leia(temp4);

escreva("Digite a quinta temperatura:");
leia(temp5);

media = (temp1 + temp2 + temp3 + temp4 + temp5)/5;

escreva("Média das temperaturas:",media)

se (media >= 30) então
	escreva(“Temperatura acima da média, calor”);

se (media <= 15) então
	escreva(“Temperatura a baixo da média, frio”);

se (media > 16 e <30) então
	escreva(“Temperatura mediana, temperatura agradável”);
	
*/

#include<conio.h>
#include<stdio.h>
#include<iostream>


int temp1,temp2,temp3,temp4,temp5,media;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
printf("Digite a primeira temperatura:");
scanf("%i",&temp1);

printf("Digite a segunda temperatura:");
scanf("%i",&temp2);

printf("Digite a terceira temperatura:");
scanf("%i",&temp3);

printf("Digite a quarta temperatura:");
scanf("%i",&temp4);

printf("Digite a quinta temperatura:");
scanf("%i",&temp5);

media = (temp1 + temp2 + temp3 + temp4 + temp5)/5;

printf("\nMédia das temperaturas:%i graus celsius",media);

if (media >= 30) {
	printf("\nTemperatura acima da média, calor");}
	
if (media <= 15) {
	printf("\nTemperatura a baixo da média, frio");}
	
if (media > 15 && media < 30) {
	printf("\nTemperatura mediana, temperatura agradável");}
	
}







