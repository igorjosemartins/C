/* Deseja-se fazer uma pesquisa a respeito do consumo mensal de 
energia el�trica em uma determinada cidade. Para isso s�o 
fornecidos os seguintes dados :
a) pre�o do kWh consumido
b) numero do consumidor
c) quantidade de Kwh consumidos durante o m�s
d) c�digo do tipo de consumidor (residencial, comercial, 
industrial)
O n�mero do consumidor igual a zero deve ser usado como condi��o 
de parada (flag).

Fazer um algoritmo que calcule e imprima :
� para cada consumidor o total a pagar
� o maior consumo verificado
� o menor consumo verificado
� o total do consumo para cada um dos tr�s tipos de consumidores
� a m�dia geral de consumo 

//vari�veis 
 PrecoKWHConsumido fracion�rio;
 NumConsumidor inteiro; //(flag == 0)bandeira de finaliza��o
 QtidadeKwhConsMes fracion�rio;
 CodTipoConsu inteiro; //(1-Residencial,2-Comercial,3-Industrial)
 TotalPagarConsu fracion�rio;
 MaiorConsumo fracion�rio;
 MenorCOnsumo fracion�rio;
 TotalConsumoRes fracion�rio;
 TotalConsumoCom fracion�rio;
 TotalConsumoInd fracion�rio;
 MediaGeralCons fracion�rio;
 QtidadeConsumidores inteiro;
 op caracter;
 
//entrada de dados

fa�a1 //geral - deseja continuar ou n�o do{
limpa tela;
MaiorConsumo = 0;
MenorConsumo = 9999999;
TotalConsumoRes = 0;
TotalConsumoCom = 0;
TotalConsumoInd = 0;
MediaGeralCons = 0;
QtidadeConsumidores = 0;
  escreva("Digite o pre�o do KWh:");
  leia(PrecoKWHConsumido);//0,53224

fa�a2 //flag n�mero do consumidor = 000  do{
limpa tela;  
  escreva("Digite a quantidade de Kwh consumidos durante o m�s:");
  leia(QtidadeKwhConsMes);
  
  escreva("Digite C�digo do tipo de consumidor");
  escreva("1-Residencial");
  escreva("2-Comercial");
  escreva("3-Industrial");
  leia(CodTipoConsu);
  
  escreva("Digite o numero do consumidor:")//001 ou 002 ou 003 ou 000
  leia(NumConsumidor);
  
//processamento dos dados

TotalPagarConsu = PrecoKWHConsumido * QtidadeKwhConsMes;
escreva("Total do consumo pelo Consumidor: ",TotalPagarConsu);
MediaGeralCons = MediaGeralCons + TotalPagarConsu ;

se(CodTipoConsu == 1) ent�o
escreva("Consumidor Tipo Residencial");
TotalConsumoRes = TotalConsumoRes + TotalPagarConsu;
escreva("Total do consumo pelo Consumidor Residencial: ",TotalConsumoRes);
fimse

se(CodTipoConsu == 2) ent�o
escreva("Consumidor Tipo Comercial");
TotalConsumoCom = TotalConsumoCom + TotalPagarConsu;
escreva("Total do consumo pelo Consumidor Comercial: ",TotalConsumoCom);
fimse

se(CodTipoConsu == 3) ent�o
escreva("Consumidor Tipo Industrial");
TotalConsumoInd = TotalConsumoInd + TotalPagarConsu;
escreva("Total do consumo pelo Consumidor Residencial: ",TotalConsumoRes);
fimse

se(TotalPagarConsu > MaiorConsumo) ent�o
    MaiorConsumo =  TotalPagarConsu;
fimse

se(TotalPagarConsu < MenorConsumo) ent�o
    MenorConsumo =  TotalPagarConsu;
fimse

escreva("Digite o n�mero do Consumidor:");
leia(NumConsumidor);

QtidadeConsumidores  = QtidadeConsumidores +1;


Enquanto2(NumConsumidor != 000);//flag n�mero do consumidor = 000
//while()
MediaGeralCons=MediaGeralCons/QtidadeConsumidores; 
escreva("A M�dia Geral de Consumo:",MediaGeralCons);
escreva(" Menor Consumo:", MenorConsumo);
escreva(" Maior Consumo:", MaiorConsumo);

escreva("Deseja novo valor de Pre�o KWh <S> ou <N>");
leia(op);
op=ma�sculo(op);
Enquanto1(op != 'N');//geral - deseja continuar ou n�o
//while()

fimalgoritmo; */


#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
#include<string.h>

char op;
int NumConsumidor,CodTipoConsu,QtidadeConsumidores;
float PrecoKWHConsumido,QtidadeKwhConsMes,TotalPagarConsu,MaiorConsumo,MenorConsumo;
float TotalConsumoRes,TotalConsumoCom,TotalConsumoInd,MediaGeralCons;

main(){
	
	setlocale(LC_ALL,"portuguese");
	
do{ //geral - deseja continuar ou n�o do{
	
	system("cls");
MaiorConsumo = 0;
MenorConsumo = 9999999;
TotalConsumoRes = 0;
TotalConsumoCom = 0;
TotalConsumoInd = 0;
MediaGeralCons = 0;
QtidadeConsumidores = 0;

	printf("Digite o pre�o do KWh: ");
	scanf("%f",&PrecoKWHConsumido); //0,53224

do{ //flag n�mero do consumidor = 000  do{

printf("\nDigite o n�mero do Consumidor: (Para N�o Buscar Mais Informa��es de Consumidor Digitar 00)");
scanf("%i" ,&NumConsumidor);


if(NumConsumidor != 0){

printf("\nDigite a quantidade de Kwh consumidos durante o m�s: ");
scanf("%f",&QtidadeKwhConsMes);

	printf("\nDigite C�digo do tipo de consumidor: ");
	printf("\n1-Residencial");
	printf("\n2-Comercial");
	printf("\n3-Industrial");
	printf("\nDigite a op��o: ");
	scanf("%i",&CodTipoConsu);
	
	
TotalPagarConsu = PrecoKWHConsumido * QtidadeKwhConsMes;
printf("\nTotal do consumo pelo Consumidor: %2.f",TotalPagarConsu);
MediaGeralCons = MediaGeralCons + TotalPagarConsu;

if (CodTipoConsu == 1) {
	printf("\nConsumidor Tipo Residencial");
	TotalConsumoRes = TotalConsumoRes + TotalPagarConsu;
	printf("\nTotal do consumo pelo Consumidor Residencial: %.2f",TotalConsumoRes);
	}

if (CodTipoConsu == 2) {
	printf("\nConsumidor Tipo Comercial");
	TotalConsumoCom = TotalConsumoCom + TotalPagarConsu;
	printf("\nTotal do consumo pelo Consumidor Comercial: %.2f",TotalConsumoCom);
	}

if (CodTipoConsu == 3) {
	printf("\nConsumidor Tipo Industrial");
	TotalConsumoInd = TotalConsumoInd + TotalPagarConsu;
	printf("\nTotal do consumo pelo Consumidor Industrial: %.2f",TotalConsumoInd);
	}
	

if (TotalPagarConsu > MaiorConsumo) {
    MaiorConsumo =  TotalPagarConsu;}


if (TotalPagarConsu < MenorConsumo) {
    MenorConsumo =  TotalPagarConsu;}
    

QtidadeConsumidores  = QtidadeConsumidores +1;}


}while(NumConsumidor != 0);//flag n�mero do consumidor = 000 //while()

MediaGeralCons=MediaGeralCons/QtidadeConsumidores; 
printf("\nA M�dia Geral de Consumo: %.2f",MediaGeralCons);
printf("\nMenor Consumo: %.2f",MenorConsumo);
printf("\nMaior Consumo: %.2f",MaiorConsumo);

printf("\n\n");

fflush(stdin);
printf("\nDeseja novos valores <S> ou <N>");
scanf("%c",&op);

op=toupper(op);
}while(op != 'N');//geral - deseja continuar ou n�o //while()
	
}



	
















