/*Construir um algoritmo que leia o valor de compra de um cliente e 
calcule o % de desconto conforme:
 - Valor at� R$ 100,00 - 10% desconto
 - Valor at� R$ 101,00 at� R$ 150,00 - 15% desconto
 - Valor at� R$ 151,00 at� R$ 200,00 - 20% desconto
 - Valor at� R$ 201,00 at� R$ 300,00 - 30% desconto
 - Valor at� R$ 301,00 at� R$ 400,00 - 40% desconto
 - Valor at� R$ 401,00 at� qualquer outro valor  - 50% desconto
Apresente o nome do cliente, CPF, fone,e o valor da compra, o % de desconto 
e valor total pago. 

Vari�veis
caracter NomeCliente;
inteiro  CPF,Telefone;
fracionario  ValorCompra,ValorFinal,Desconto;

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

char NomeCliente[30],CPF[14];
int Telefone,Percentual;
float ValorCompra,ValorFinal,Desconto;

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	
printf("Digite o seu nome:");
scanf("%s",&NomeCliente);

printf("Digite seu CPF:");
scanf("%s",&CPF);

printf("Digite seu telefone:");
scanf("%i",&Telefone);

printf("Digite o valor de sua compra:");
scanf("%f",&ValorCompra);


if (ValorCompra <= 100.00) {
	Desconto = ValorCompra*0.10;Percentual = 10;}

if (ValorCompra >= 101.00 && ValorCompra <= 150.00) {
	Desconto = ValorCompra*0.15;Percentual = 15;}

if (ValorCompra >= 151.00 && ValorCompra <= 200.00) {
	Desconto = ValorCompra*0.20;Percentual = 20;}

if (ValorCompra >= 201.00 && ValorCompra <= 300.00) {
	Desconto = ValorCompra*0.30;Percentual = 30;}

if (ValorCompra >= 301.00 && ValorCompra <= 400.00) {
	Desconto = ValorCompra*0.40;Percentual = 40;}

if (ValorCompra >= 401.00) {
	Desconto = ValorCompra*0.50;Percentual = 50;}
	
ValorFinal = ValorCompra - Desconto;

	
printf("\nNome do Cliente: %s",NomeCliente);

printf("\nCPF do Cliente: %s",CPF);

printf("\nTelefone do Cliente: %i",Telefone);

printf("\nValor da compra: %.2f reais",ValorCompra);

printf("\nDesconto da compra: %.2f reais, b�nus de %i porcento",Desconto,Percentual);

printf("\nValor final da compra: %.2f reais",ValorFinal);


printf("\n\n");

system("pause");

	
}






 

 
