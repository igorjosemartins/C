/* Algoritmo Media Valor
Dado uma s�rie de 05 valores inteiros de temperatura, leia este 5 valores e calcule a m�dia
destes, e em seguida apresente esta m�dia e caso esta seja maior e igual que 30 graus
escreva �temperatura acima da m�dia, calor�, caso esta m�dia seja inferior ou igual a 15 graus
�temperatura a baixo da m�dia, frio � e se esta estiver no intervalo entre estes dois valores,
�temperatura mediana, temperatura agrad�vel�

Algoritmo em uma pseudo linguagem - Portugu�s estruturado

Vari�veis
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

escreva("M�dia das temperaturas:",media)

se (media >= 30) ent�o
	escreva(�Temperatura acima da m�dia, calor�);

se (media <= 15) ent�o
	escreva(�Temperatura a baixo da m�dia, frio�);

se (media > 16 e <30) ent�o
	escreva(�Temperatura mediana, temperatura agrad�vel�);
	
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

printf("\nM�dia das temperaturas:%i graus celsius",media);

if (media >= 30) {
	printf("\nTemperatura acima da m�dia, calor");}
	
if (media <= 15) {
	printf("\nTemperatura a baixo da m�dia, frio");}
	
if (media > 15 && media < 30) {
	printf("\nTemperatura mediana, temperatura agrad�vel");}
	
}







