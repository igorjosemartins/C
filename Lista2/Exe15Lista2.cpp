/* Tr�s amigos, Carlos, Andr� e Felipe, decidiram rachar igualmente a conta de um bar. Fa�a
um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas fa�a
com que Carlos e Andr� n�o paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00
para Carlos, R$33,00 para Andr� e R$35,53 para Felipe.


Vari�veis
inteiro Carlos,Andre;
fracionado Felipe;Conta

escreva("Qual o valor total da conta?: ");
leia(Conta);

Carlos = Conta/3

Andre = Conta/3

Felipe = Conta/3


escreva("Carlos ter� de pagar %i reais.",Carlos);

escreva("Andr� ter� de pagar %i reais.",Andr�);

escreva("Felipe ter� de pagar %f reais.",Felipe);

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


printf("\n\nCarlos ter� de pagar %i reais.",Carlos);

printf("\n\nAndr� ter� de pagar %i reais.",Andre);

printf("\n\nFelipe ter� de pagar %.2f reais.",Felipe);


printf("\n\n");

system("pause");

}









