/* Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um
algoritmo para converter este tempo em anos, meses e dias. Assume que cada mês possui
sempre 30 dias.

Variáveis
inteiro dias,meses,anos;

escreva("Quantos dias a fábrica está sem acidentes de trabalho?: ");
leia(dias);

meses = dias/30;

anos = meses/12;


escreva("\nA fábrica está há:");
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
do{ // faça até opção de sair - Comando condicional para repetição
system("cls"); // limpa tela (clear screen)
printf("Quantos dias a fábrica está sem acidentes de trabalho?: ");
scanf("%i",&TempoSemAcid);

//Meses = Dias/30;  por que não ?  -> como que 1333 dias são 8 meses ?
//Anos = Dias/360;  por que não ? 

Anos = TempoSemAcid/360; // tempo/360 = quociente da divisão
RestoAnos = TempoSemAcid % 360; // tempo % 360 = resto da divisão
Meses = RestoAnos/30;
RestoDias = RestoAnos % 30;
Dias = RestoDias;


printf("\n A fábrica está há:");
printf("\n\n %i dias sem acidentes de trabalho.",TempoSemAcid);
printf("\n\n %i meses sem acidentes de trabalho.",Meses);
printf("\n\n %i anos sem acidentes de trabalho.",Anos);

printf("\n\n");
fflush(stdin); // limpa buffer
printf("\n Deseja novos valores? <S> ou <N> ");
scanf("%c",&op); // ler valores caracteres do teclado
op=toupper(op); // comando que transforma o valor de op em maíusculo
}while(op != 'N'); // enquanto op teclada for diferente de N continue rodando o programa


}
