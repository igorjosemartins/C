/* Fa�a um algoritmo para ler o sal�rio de um funcion�rio e 
aument�-lo em 15%. Ap�s o aumento, desconte 8% de impostos. 
Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final.


Vari�veis
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
	
	
printf("Digite seu sal�rio: ");
scanf("%f",&SalarioInicial);

SalarioAumento = SalarioInicial*1.15;

SalarioFinal = SalarioAumento - (SalarioAumento*0.08);


printf("\nSal�rio Inicial: %.2f",SalarioInicial);

printf("\nSal�rio com o aumento: %.2f",SalarioAumento);

printf("\nSal�rio Final: %.2f",SalarioFinal);


printf("\n\n");

system("pause");

	

	
	
	
	
	
}
