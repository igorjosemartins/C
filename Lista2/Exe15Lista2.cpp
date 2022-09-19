/* Três amigos, Carlos, André e Felipe, decidiram rachar igualmente a conta de um bar. Faça
um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça
com que Carlos e André não paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00
para Carlos, R$33,00 para André e R$35,53 para Felipe.


Variáveis
inteiro Carlos,Andre;
fracionado Felipe;Conta

escreva("Qual o valor total da conta?: ");
leia(Conta);

Carlos = Conta/3

Andre = Conta/3

Felipe = Conta/3


escreva("Carlos terá de pagar %i reais.",Carlos);

escreva("André terá de pagar %i reais.",André);

escreva("Felipe terá de pagar %f reais.",Felipe);

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

int Carlos,Andre;
float Felipe,Conta;

main(){
	
	setlocale(LC_ALL, "portuguese");

printf("Qual o valor total da conta?: ");
scanf("%f",&Conta);


Carlos = Conta/3;

Andre = Conta/3;

Felipe = Conta - (Carlos + Andre);


printf("\n\nCarlos terá de pagar %i reais.",Carlos);

printf("\n\nAndré terá de pagar %i reais.",Andre);

printf("\n\nFelipe terá de pagar %.2f reais.",Felipe);


printf("\n\n");

system("pause");

}









