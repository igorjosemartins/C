/* Uma f�brica controla o tempo de trabalho sem acidentes pela quantidade de dias. Fa�a um
algoritmo para converter este tempo em anos, meses e dias. Assume que cada m�s possui
sempre 30 dias.

Vari�veis
inteiro dias,meses,anos;

escreva("Quantos dias a f�brica est� sem acidentes de trabalho?: ");
leia(dias);

meses = dias/30;

anos = meses/12;


escreva("\nA f�brica est� h�:");
escreva("\n%i dias sem acidentes de trabalho.",dias);
escreva("\n%i meses sem acidentes de trabalho.",meses);
escreva("\n%i anos sem acidentes de trabalho.",anos);

*/

#include<conio.h>
#include<stdio.h>
#include<iostream>

int Dias,Meses,Anos,TempoSemAcid,RestoAnos,RestoDias;
char op;

main(){

	setlocale(LC_ALL, "portuguese");
do{ // fa�a at� op��o de sair - Comando condicional para repeti��o
system("cls"); // limpa tela (clear screen)
printf("Quantos dias a f�brica est� sem acidentes de trabalho?: ");
scanf("%i",&TempoSemAcid);

//Meses = Dias/30;  por que n�o ?  -> como que 1333 dias s�o 8 meses ?
//Anos = Dias/360;  por que n�o ? 

Anos = TempoSemAcid/360; // tempo/360 = quociente da divis�o
RestoAnos = TempoSemAcid % 360; // tempo % 360 = resto da divis�o
Meses = RestoAnos/30;
RestoDias = RestoAnos % 30;
Dias = RestoDias;


printf("\n A f�brica est� h�:");
printf("\n\n %i dias sem acidentes de trabalho.",TempoSemAcid);
printf("\n\n %i meses sem acidentes de trabalho.",Meses);
printf("\n\n %i anos sem acidentes de trabalho.",Anos);

printf("\n\n");
fflush(stdin); // limpa buffer
printf("\n Deseja novos valores? <S> ou <N> ");
scanf("%c",&op); // ler valores caracteres do teclado
op=toupper(op); // comando que transforma o valor de op em ma�usculo
}while(op != 'N'); // enquanto op teclada for diferente de N continue rodando o programa


}
