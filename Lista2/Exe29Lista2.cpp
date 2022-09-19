/* Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço,
sabendo-se que este sofreu um desconto de 10%.

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

char op;
float PrecoProduto,Desconto,PrecoFinal;

main(){
	
	setlocale(LC_ALL,"portuguese");
	
do{
	system("cls");
printf("Digite o preço do produto: ");
scanf("%f",&PrecoProduto);

Desconto = 0.1;
PrecoFinal = PrecoProduto - (PrecoProduto*Desconto);

printf("\n\nPreço final após 10 porcento de desconto: %.2f",PrecoFinal);

printf("\n\n");
fflush(stdin);
printf("Deseja inserir novos valores? <S> ou <N>:");
scanf("%c",&op);
op=toupper(op);
}while(op != 'N');
	

}


