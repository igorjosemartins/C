/* Faça um algoritmo para ler o salário de um funcionário e 
aumentá-lo em 15%. Após o aumento, desconte 8% de impostos. 
Imprima o salário inicial, o salário com o aumento e o salário final.


Variáveis
SalarioInicial
SalarioAumento
Aumento
SalarioFinal
Impostos

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

float SalarioInicial,SalarioAumento,SalarioFinal;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
printf("Digite seu salário: ");
scanf("%f",&SalarioInicial);

SalarioAumento = SalarioInicial*1.15;

SalarioFinal = SalarioAumento - (SalarioAumento*0.08);


printf("\nSalário Inicial: %.2f",SalarioInicial);

printf("\nSalário com o aumento: %.2f",SalarioAumento);

printf("\nSalário Final: %.2f",SalarioFinal);


printf("\n\n");

system("pause");

	

	
	
	
	
	
}
