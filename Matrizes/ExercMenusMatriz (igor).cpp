/*Construa uma matriz (3x5) - 3 - Colunas para 5 Linhas com valores inteiros
e dois menus que realizem as seguintes op��es:
Menu Principal:
A - Preencher a Matriz por leitura;
B - Preencher a Matriz por Randomiza��o;
S - Sair do Sistema
Somente ap�s o usu�rio ter realizado a op��o 1 ou 2, o sistema apresenta
o pr�ximo menu para operacionalizar atividades com matriz
Menu Secund�rio:
1 - Imprimir os valores da Matriz (3x5)
2 - Localizar valores inteiros pares - Mostrar o n�mero par e seu �ndice
3 - Localizar o Maior e o Menor valor e seus repsectivos �ndices
4 - Gerar a soma de todos os valores da Matriz e mostra o resultado
5 - Pedir para o usu�rio digitar um n�mero e localizar se este existe
na matriz e qual o seu �ndice de localiza��o.
6 - Volta ao Menu Principal 

//Vari�veis

Matriz[3,5] do tipo inteiro;
op tipo caracter;
Maior, Menor tipo inteiro;
CMenor,LMenor,CMaior,LMaior tipo inteiro;
Soma tipo inteiro;
Num tipo inteiro;


Inicio

Menu Principal:
limpa tela
escreva("Menu Principal");
escreva("A - Preencher a Matriz por leitura");
escreva("B - Preencher a Matriz por Randomiza��o");
escreva("S - Sair do Sistema");
leia(op);
op=ma�scula(op);


se (op == 'A') ent�o
  escreva("Preecher Matriz por leitura - Valores 0-100");
  para(int C=0;C<3;C++) //la�o do �ndice das colunas
    para(int L=0;L<5;L++) //la�o do �ndice das linhas
      escreva("Digite o valor da Matriz[",C,L,"] : ");
      leia(Matriz[C,L]);
    fimpara 
  fimpara
v� para Menu Secund�rio
fimse op��o 'A'   


se (op == 'B') ent�o
  escreva("Preecher Matriz Randomicamente");
  para(int C=0;C<3;C++) //la�o do �ndice das colunas
    para(int L=0;L<5;L++) //la�o do �ndice das linhas
     Matriz[C,L] = aleat�rio 0-100
    fimpara 
  fimpara
v� para Menu Secund�rio
fimse op��o 'B'   


se (op == 'S') ent�o
  escreva("Sair do Sistema................");
  sair sistema;
fimse op��o 'S'

//final Menu Principal

Menu Secund�rio:
limpa tela
escreva("Menu Secund�rio");
escreva("1 - Imprimir os valores da Matriz (3x5)");
escreva("2 - Localizar valores inteiros pares - Mostrar o n�mero par e seu �ndice");
escreva("3 - Localizar o Maior e o Menor valor e seus repsectivos �ndices");
escreva("4 - Gerar a soma de todos os valores da Matriz e mostra o resultado");
escreva("5 - Pedir para o usu�rio digitar um n�mero e localizar se este existe
na matriz e qual o seu �ndice de localiza��o");
escreva("6 - Volta ao Menu Principal");
leia(op);


se(op == '1') ent�o
escreva("Valores da Matriz");
  para(int C=0;C<3;C++) //la�o do �ndice das colunas
    para(int L=0;L<5;L++) //la�o do �ndice das linhas
     escreva("Matriz[",C,L,"] = ",Matriz[C,l];
    fimpara 
  fimpara
  v� para Menu Secund�rio;
fimse op��o'1'  

  
se(op == '2') ent�o
escreva("Valores Pares da Matriz");
  para(int C=0;C<3;C++) //la�o do �ndice das colunas
    para(int L=0;L<5;L++) //la�o do �ndice das linhas
     se(Matriz[C,L] / 2 = resto 0) ent�o //se ele � par todo n�mero divido por 2 e o res ta da divis�o der 0 ele � par
       escreva("N�mero Par: ",Matriz[C,L]);
       escreva("ind�ces = Coluna:",C, " e a Linha: ",L);
    fimse	
   fimpara 
  fimpara
  v� para Menu Secund�rio;
fimse op��o'2' 


se(op == '3') ent�o
Menor = Matriz[0,0];//101;
Maior = Matriz[0,0];//-1
escreva("Menor e Maior Valores da Matriz");
  para(int C=0;C<3;C++) //la�o do �ndice das colunas
    para(int L=0;L<5;L++) //la�o do �ndice das linhas
     se(Matriz[C,L] < Menor )ent�o
       Menor = Matriz[C,L];
       CMenor = C;
       LMenor = L;
     fimseMenor
     se(Matriz[C,l] > Maior) ent�o
        Maior = Matriz[C,L];
        CMaior = C;
        LMaior = L;
     fimseMaior   
   fimpara 
  fimpara
  escreva("Menor Valor na Matriz[3,5] = ",Menor)
  escreva("Coluna:",CMenor, "Linha: ,"LMenor);
  escreva("Maior Valor na Matriz[3,5] = ",Maior)
  escreva("Coluna:",CMaior, "Linha: ,"LMaior);

  v� para Menu Secund�rio;
  
fimse op��o'3' 


se(op == '4') ent�o
Soma=0;
escreva("Soma dos valores da Matriz");
  para(int C=0;C<3;C++) //la�o do �ndice das colunas
    para(int L=0;L<5;L++) //la�o do �ndice das linhas
     Soma = Soma + Matriz[C,l];
   fimpara 
  fimpara
  escreva("Soma dos valores da matriz[3,5] = ",Soma);
  v� para Menu Secund�rio;
fimse op��o'4'


se(op == '5') ent�o
int flag=0;
escreva("N�mero definido pelo usu�rio");
escreva("Digite o n�mero a ser pesquisado na Matriz");
leia(Num);
  para(int C=0;C<3;C++) //la�o do �ndice das colunas
    para(int L=0;L<5;L++) //la�o do �ndice das linhas
     se(Num == Matriz[C,l]) ent�o
        escreva("N�mero existe na Matriz: ",Matriz[C,l]);
        escreva("Na Coluna: ",C," e na linha: ",L);
        flag=1;
     fimse   
   fimpara 
  fimpara
  se (flag == 0) ent�o
   escreva("N�mero: ",Num," n�o encontrado na Matriz");
  fimse
  v� para Menu Secund�rio;
fimse op��o'5'


se(op == '6') ent�o
v� para Menu Principal;
fimse op��o '6'
fim algoritmo*/


#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//Vari�veis

int Matriz[3][5];
char op;
int Maior,Menor;
int CMenor,LMenor,CMaior,LMaior;
int Soma;
int Num;


main(){   //Inicio
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
Menu_Principal:
	system("cls");   //limpa tela
	printf("\n Menu Principal");
	printf("\n A - Preencher a Matriz por leitura");
	printf("\n B - Preencher a Matriz por Randomiza��o");
	printf("\n S - Sair do Sistema");
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Digite sua op��o: ");
	op=getche();
	op=toupper(op);


if (op == 'A') 
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Preencha a Matriz com valores de 0-100\n");
		for(int C=0;C<3;C++)   //la�o do �ndice das colunas
		{   
			for(int L=0;L<5;L++)   //la�o do �ndice das linhas
			{   
				printf("\nDigite o valor da Matriz[%i][%i]: ",C,L);
				scanf("%i",&Matriz[C][L]);
			}   //fimpara
		}   //fimpara
	
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //v� para Menu Secund�rio
}   //fimse op��o 'A'


if (op == 'B') 
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Preenchendo Matriz Randomicamente...\n");
		for(int C=0;C<3;C++)   //la�o do �ndice das colunas
		{
			for(int L=0;L<5;L++) //la�o do �ndice das linhas
			{
				Matriz[C][L] = rand() % 100;
			}   //fimpara 
		}
		
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //v� para Menu Secund�rio
}   //fimse op��o 'B'   


if (op == 'S')
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Sair do Sistema................");
	exit(0);   //sair sistema;
}   //fimse op��o 'S'

//final Menu Principal

Menu_Secundario:
	system("cls");   //limpa tela
	printf("\n Menu Secund�rio");
	printf("\n 1 - Imprimir os valores da Matriz (3x5)");
	printf("\n 2 - Localizar valores inteiros pares - Mostrar o n�mero par e seu �ndice");
	printf("\n 3 - Localizar o Maior e o Menor valor e seus respectivos �ndices");
	printf("\n 4 - Gerar a soma de todos os valores da Matriz e mostra o resultado");
	printf("\n 5 - Pedir para o usu�rio digitar um n�mero e localizar se este existe na matriz e qual o seu �ndice de localiza��o");
	printf("\n 6 - Volta ao Menu Principal");
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Digite sua op��o: ");
	op=getche();   //leia(op);


if(op == '1') 
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Valores da Matriz");
		for(int C=0;C<3;C++) //la�o do �ndice das colunas
		{
			for(int L=0;L<5;L++) //la�o do �ndice das linhas
			{
			printf("\n Matriz[%i,%i] = %i",C,L,Matriz[C][L]);	
			}
		}
		
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //v� para Menu Secund�rio;
}   //fimse op��o'1'  

  
if(op == '2')
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Valores Pares da Matriz:\n");
	for(int C=0;C<3;C++)   //la�o do �ndice das colunas
	{
		for(int L=0;L<5;L++)   //la�o do �ndice das linhas
		{
			if(Matriz[C][L] % 2 == 0)   //se ele � par todo n�mero divido por 2 e o resto da divis�o der 0 ele � par (******FAZER O FLAG AQUI******)
			{
				printf("\n N�mero Par: %i",Matriz[C][L]);
				printf("\n Ind�ces = Coluna: %i e a Linha: %i \n",C,L);
			}   //fimse
		}   //fimpara
	}   //fimpara
	
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //v� para Menu Secund�rio;
}   //fimse op��o'2' 


if(op == '3')
{
	Menor = Matriz[0][0];   //101;
	Maior = Matriz[0][0];   //-1
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Menor e Maior Valores da Matriz \n");
		for(int C=0;C<3;C++)   //la�o do �ndice das colunas
		{
			for(int L=0;L<5;L++)   //la�o do �ndice das linhas
			{
				if(Matriz[C][L] < Menor )
				{
				Menor = Matriz[C][L];
				CMenor = C;
				LMenor = L;
				}   //fimseMenor
				
				if(Matriz[C][L] > Maior)
				{
				Maior = Matriz[C][L];
				CMaior = C;
				LMaior = L;
				}   //fimseMaior   
				
			}   //fimpara
		}   //fimpara
		
	printf("\n Menor Valor na Matriz[3,5] = %i",Menor);
	printf("\n Coluna: %i e Linha: %i \n",CMenor,LMenor);
	printf("\n Maior Valor na Matriz[3,5] = %i",Maior);
	printf ("\n Coluna: %i e Linha: %i \n",CMaior,LMaior);
	
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   ///v� para Menu Secund�rio;
}   ///fimse op��o'3' 


if(op == '4')
{
	Soma=0;
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Soma dos valores da Matriz \n");
		for(int C=0;C<3;C++) //la�o do �ndice das colunas
		{
			for(int L=0;L<5;L++) //la�o do �ndice das linhas
			{
				Soma = Soma + Matriz[C][L];
			}   //fimpara 
		}   //fimpara
	printf("\n Soma dos valores da Matriz[3,5] = %i",Soma);
	
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //v� para Menu Secund�rio;
}   //fimse op��o'4'


if(op == '5')
{
	int flag=0;
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n N�mero definido pelo usu�rio"); 
	printf("\n Digite o n�mero a ser pesquisado na Matriz: ");
	scanf("%i",&Num);   //leia(Num);
		for(int C=0;C<3;C++) //la�o do �ndice das colunas
		{
			for(int L=0;L<5;L++) //la�o do �ndice das linhas
			{
				if(Num == Matriz[C][L])
				{
					printf("\n N�mero existe na Matriz: %i",Matriz[C][L]);
					printf("\n Na Coluna: %i e na linha: %i",C,L);	
					flag=1;
				}   //fimse
			}   //fimpara 
		}   //fimpara

	if(flag == 0)
	{
		printf("\n N�mero: %i n�o encontrado na Matriz",Num);
	}   //fimse
	
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //v� para Menu Secund�rio;
}   //fimse op��o'5'


if(op == '6')
{
	goto Menu_Principal;   //v� para Menu Principal;
}   //fimse op��o '6'
	
}//fim algoritmo



