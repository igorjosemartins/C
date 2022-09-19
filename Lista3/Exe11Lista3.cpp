/* 11. O cardápio de uma lancheria é o seguinte:

Especificação     Código   Preço
Cachorro quente    100     1,20
Bauru simples      101     1,30
Bauru com ovo      102     1,50
Hamburger          103     1,20
Cheeseburguer      104     1,30
Refrigerante       105     1,00

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule
o valor a ser pago por aquele lanche. Considere que a cada execução somente
será calculado um item.



variáveis

char op;
int quantidade;
int codigo;
float pedido;



escreva("Digite o código do item pedido: ");
leia("codigo");

escreva("\nDigite a quantidade do item pedido: ");
leia("quantidade");



se (codigo = 100) entao
	1,20*quantidade = pedido
	escreva("\n========================================================")
	escreva("\nPedido do cliente: %i Cachorro(s) Quente(s).")
	escreva("\n========================================================")
	escreva("\nValor total a pagar: %f",pedido);
	escreva("\n========================================================")
fimse

se (codigo = 101) entao
	1,30*quantidade = pedido
	escreva("\n========================================================")
	escreva("\nPedido do cliente: %i Bauru(s) Simples.")
	escreva("\n========================================================")
	escreva("\nValor total a pagar: %f",pedido);
	escreva("\n========================================================")
fimse

se (codigo = 102) entao
	1,50*quantidade = pedido
	escreva("\n========================================================")
	escreva("\nPedido do cliente: %i Bauru(s) com Ovo.")
	escreva("\n========================================================")
	escreva("\nValor total a pagar: %f",pedido);
	escreva("\n========================================================")
fimse

se (codigo = 103) entao
	1,20*quantidade = pedido
	escreva("\n========================================================")
	escreva("\nPedido do cliente: %i Hamburguer(s).")
	escreva("\n========================================================")
	escreva("\nValor total a pagar: %f",pedido);
	escreva("\n========================================================")
fimse

se (codigo = 104) entao
	1,30*quantidade = pedido
	escreva("\n========================================================")
	escreva("\nPedido do cliente: %i Cheeseburguer(s).")
	escreva("\n========================================================")
	escreva("\nValor total a pagar: %f",pedido);
	escreva("\n========================================================")
fimse

se (codigo = 105) entao
	1,00*quantidade = pedido
	escreva("\n========================================================")
	escreva("\nPedido do cliente: %i Refrigerante(s).")
	escreva("\n========================================================")
	escreva("\nValor total a pagar: %f",pedido);
	escreva("\n========================================================")
fimse

*/


#include <conio.h>
#include <stdio.h>
#include <iostream>


char op;
int quantidade;
int codigo;
float pedido;


main(){
	
do{
	
	setlocale(LC_ALL, "portuguese");
	
	system("cls");

printf("Digite o código do item pedido: ");
scanf("%i",&codigo);

printf("\nDigite a quantidade do item pedido: ");
scanf("%i",&quantidade);


if (codigo == 100) {
	pedido = 1.20 * quantidade;
	printf("\n========================================================");
	printf("\nPedido do cliente: %i Cachorro(s) Quente(s).",quantidade);
	printf("\n========================================================");
	printf("\nValor total a pagar: %.2f",pedido);
	printf("\n========================================================");
}

if (codigo == 101) {
	pedido = 1.30 * quantidade;
	printf("\n========================================================");
	printf("\nPedido do cliente: %i Bauru(s) Simples.",quantidade);
	printf("\n========================================================");
	printf("\nValor total a pagar: %.2f",pedido);
	printf("\n========================================================");
}

if (codigo == 102) {
	pedido = 1.50 * quantidade;
	printf("\n========================================================");
	printf("\nPedido do cliente: %i Bauru(s) com Ovo.",quantidade);
	printf("\n========================================================");
	printf("\nValor total a pagar: %.2f",pedido);
	printf("\n========================================================");
}

if (codigo == 103) {
	pedido = 1.20 * quantidade;
	printf("\n========================================================");
	printf("\nPedido do cliente: %i Hamburguer(s).",quantidade);
	printf("\n========================================================");
	printf("\nValor total a pagar: %.2f",pedido);
	printf("\n========================================================");
}

if (codigo == 104) {
	pedido = 1.30 * quantidade;
	printf("\n========================================================");
	printf("\nPedido do cliente: %i Cheeseburguer(s).",quantidade);
	printf("\n========================================================");
	printf("\nValor total a pagar: %.2f",pedido);
	printf("\n========================================================");
}

if (codigo == 105) {
	pedido = 1 * quantidade;
	printf("\n========================================================");
	printf("\nPedido do cliente: %i Refrigerante(s).",quantidade);
	printf("\n========================================================");
	printf("\nValor total a pagar: %.2f",pedido);
	printf("\n========================================================");
}

printf("\n\n");
fflush(stdin);
printf("Deseja inserir novos valores? Digite <S> ou <N>");
scanf("%c",&op);
op=toupper(op);
}while (op != 'N');


}













