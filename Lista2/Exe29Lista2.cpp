/* Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o,
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
printf("Digite o pre�o do produto: ");
scanf("%f",&PrecoProduto);

Desconto = 0.1;
PrecoFinal = PrecoProduto - (PrecoProduto*Desconto);

printf("\n\nPre�o final ap�s 10 porcento de desconto: %.2f",PrecoFinal);

printf("\n\n");
fflush(stdin);
printf("Deseja inserir novos valores? <S> ou <N>:");
scanf("%c",&op);
op=toupper(op);
}while(op != 'N');
	

}


