/*Construa uma matriz (3x5) - 3 - Colunas para 5 Linhas com valores inteiros
e dois menus que realizem as seguintes opções:
Menu Principal:
A - Preencher a Matriz por leitura;
B - Preencher a Matriz por Randomização;
S - Sair do Sistema
Somente após o usuário ter realizado a opção 1 ou 2, o sistema apresenta
o próximo menu para operacionalizar atividades com matriz
Menu Secundário:
1 - Imprimir os valores da Matriz (3x5)
2 - Localizar valores inteiros pares - Mostrar o número par e seu índice
3 - Localizar o Maior e o Menor valor e seus repsectivos índices
4 - Gerar a soma de todos os valores da Matriz e mostra o resultado
5 - Pedir para o usuário digitar um número e localizar se este existe
na matriz e qual o seu índice de localização.
6 - Volta ao Menu Principal 

//Variáveis

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
escreva("B - Preencher a Matriz por Randomização");
escreva("S - Sair do Sistema");
leia(op);
op=maíscula(op);


se (op == 'A') então
  escreva("Preecher Matriz por leitura - Valores 0-100");
  para(int C=0;C<3;C++) //laço do índice das colunas
    para(int L=0;L<5;L++) //laço do índice das linhas
      escreva("Digite o valor da Matriz[",C,L,"] : ");
      leia(Matriz[C,L]);
    fimpara 
  fimpara
vá para Menu Secundário
fimse opção 'A'   


se (op == 'B') então
  escreva("Preecher Matriz Randomicamente");
  para(int C=0;C<3;C++) //laço do índice das colunas
    para(int L=0;L<5;L++) //laço do índice das linhas
     Matriz[C,L] = aleatório 0-100
    fimpara 
  fimpara
vá para Menu Secundário
fimse opção 'B'   


se (op == 'S') então
  escreva("Sair do Sistema................");
  sair sistema;
fimse opção 'S'

//final Menu Principal

Menu Secundário:
limpa tela
escreva("Menu Secundário");
escreva("1 - Imprimir os valores da Matriz (3x5)");
escreva("2 - Localizar valores inteiros pares - Mostrar o número par e seu índice");
escreva("3 - Localizar o Maior e o Menor valor e seus repsectivos índices");
escreva("4 - Gerar a soma de todos os valores da Matriz e mostra o resultado");
escreva("5 - Pedir para o usuário digitar um número e localizar se este existe
na matriz e qual o seu índice de localização");
escreva("6 - Volta ao Menu Principal");
leia(op);


se(op == '1') então
escreva("Valores da Matriz");
  para(int C=0;C<3;C++) //laço do índice das colunas
    para(int L=0;L<5;L++) //laço do índice das linhas
     escreva("Matriz[",C,L,"] = ",Matriz[C,l];
    fimpara 
  fimpara
  vá para Menu Secundário;
fimse opção'1'  

  
se(op == '2') então
escreva("Valores Pares da Matriz");
  para(int C=0;C<3;C++) //laço do índice das colunas
    para(int L=0;L<5;L++) //laço do índice das linhas
     se(Matriz[C,L] / 2 = resto 0) então //se ele é par todo número divido por 2 e o res ta da divisão der 0 ele é par
       escreva("Número Par: ",Matriz[C,L]);
       escreva("indíces = Coluna:",C, " e a Linha: ",L);
    fimse	
   fimpara 
  fimpara
  vá para Menu Secundário;
fimse opção'2' 


se(op == '3') então
Menor = Matriz[0,0];//101;
Maior = Matriz[0,0];//-1
escreva("Menor e Maior Valores da Matriz");
  para(int C=0;C<3;C++) //laço do índice das colunas
    para(int L=0;L<5;L++) //laço do índice das linhas
     se(Matriz[C,L] < Menor )então
       Menor = Matriz[C,L];
       CMenor = C;
       LMenor = L;
     fimseMenor
     se(Matriz[C,l] > Maior) então
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

  vá para Menu Secundário;
  
fimse opção'3' 


se(op == '4') então
Soma=0;
escreva("Soma dos valores da Matriz");
  para(int C=0;C<3;C++) //laço do índice das colunas
    para(int L=0;L<5;L++) //laço do índice das linhas
     Soma = Soma + Matriz[C,l];
   fimpara 
  fimpara
  escreva("Soma dos valores da matriz[3,5] = ",Soma);
  vá para Menu Secundário;
fimse opção'4'


se(op == '5') então
int flag=0;
escreva("Número definido pelo usuário");
escreva("Digite o número a ser pesquisado na Matriz");
leia(Num);
  para(int C=0;C<3;C++) //laço do índice das colunas
    para(int L=0;L<5;L++) //laço do índice das linhas
     se(Num == Matriz[C,l]) então
        escreva("Número existe na Matriz: ",Matriz[C,l]);
        escreva("Na Coluna: ",C," e na linha: ",L);
        flag=1;
     fimse   
   fimpara 
  fimpara
  se (flag == 0) então
   escreva("Número: ",Num," não encontrado na Matriz");
  fimse
  vá para Menu Secundário;
fimse opção'5'


se(op == '6') então
vá para Menu Principal;
fimse opção '6'
fim algoritmo*/


#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//Variáveis

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
	printf("\n B - Preencher a Matriz por Randomização");
	printf("\n S - Sair do Sistema");
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Digite sua opção: ");
	op=getche();
	op=toupper(op);


if (op == 'A') 
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Preencha a Matriz com valores de 0-100\n");
		for(int C=0;C<3;C++)   //laço do índice das colunas
		{   
			for(int L=0;L<5;L++)   //laço do índice das linhas
			{   
				printf("\nDigite o valor da Matriz[%i][%i]: ",C,L);
				scanf("%i",&Matriz[C][L]);
			}   //fimpara
		}   //fimpara
	
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //vá para Menu Secundário
}   //fimse opção 'A'


if (op == 'B') 
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Preenchendo Matriz Randomicamente...\n");
		for(int C=0;C<3;C++)   //laço do índice das colunas
		{
			for(int L=0;L<5;L++) //laço do índice das linhas
			{
				Matriz[C][L] = rand() % 100;
			}   //fimpara 
		}
		
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //vá para Menu Secundário
}   //fimse opção 'B'   


if (op == 'S')
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Sair do Sistema................");
	exit(0);   //sair sistema;
}   //fimse opção 'S'

//final Menu Principal

Menu_Secundario:
	system("cls");   //limpa tela
	printf("\n Menu Secundário");
	printf("\n 1 - Imprimir os valores da Matriz (3x5)");
	printf("\n 2 - Localizar valores inteiros pares - Mostrar o número par e seu índice");
	printf("\n 3 - Localizar o Maior e o Menor valor e seus respectivos índices");
	printf("\n 4 - Gerar a soma de todos os valores da Matriz e mostra o resultado");
	printf("\n 5 - Pedir para o usuário digitar um número e localizar se este existe na matriz e qual o seu índice de localização");
	printf("\n 6 - Volta ao Menu Principal");
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Digite sua opção: ");
	op=getche();   //leia(op);


if(op == '1') 
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Valores da Matriz");
		for(int C=0;C<3;C++) //laço do índice das colunas
		{
			for(int L=0;L<5;L++) //laço do índice das linhas
			{
			printf("\n Matriz[%i,%i] = %i",C,L,Matriz[C][L]);	
			}
		}
		
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //vá para Menu Secundário;
}   //fimse opção'1'  

  
if(op == '2')
{
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Valores Pares da Matriz:\n");
	for(int C=0;C<3;C++)   //laço do índice das colunas
	{
		for(int L=0;L<5;L++)   //laço do índice das linhas
		{
			if(Matriz[C][L] % 2 == 0)   //se ele é par todo número divido por 2 e o resto da divisão der 0 ele é par (******FAZER O FLAG AQUI******)
			{
				printf("\n Número Par: %i",Matriz[C][L]);
				printf("\n Indíces = Coluna: %i e a Linha: %i \n",C,L);
			}   //fimse
		}   //fimpara
	}   //fimpara
	
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //vá para Menu Secundário;
}   //fimse opção'2' 


if(op == '3')
{
	Menor = Matriz[0][0];   //101;
	Maior = Matriz[0][0];   //-1
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Menor e Maior Valores da Matriz \n");
		for(int C=0;C<3;C++)   //laço do índice das colunas
		{
			for(int L=0;L<5;L++)   //laço do índice das linhas
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
	goto Menu_Secundario;   ///vá para Menu Secundário;
}   ///fimse opção'3' 


if(op == '4')
{
	Soma=0;
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Soma dos valores da Matriz \n");
		for(int C=0;C<3;C++) //laço do índice das colunas
		{
			for(int L=0;L<5;L++) //laço do índice das linhas
			{
				Soma = Soma + Matriz[C][L];
			}   //fimpara 
		}   //fimpara
	printf("\n Soma dos valores da Matriz[3,5] = %i",Soma);
	
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //vá para Menu Secundário;
}   //fimse opção'4'


if(op == '5')
{
	int flag=0;
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	printf("\n Número definido pelo usuário"); 
	printf("\n Digite o número a ser pesquisado na Matriz: ");
	scanf("%i",&Num);   //leia(Num);
		for(int C=0;C<3;C++) //laço do índice das colunas
		{
			for(int L=0;L<5;L++) //laço do índice das linhas
			{
				if(Num == Matriz[C][L])
				{
					printf("\n Número existe na Matriz: %i",Matriz[C][L]);
					printf("\n Na Coluna: %i e na linha: %i",C,L);	
					flag=1;
				}   //fimse
			}   //fimpara 
		}   //fimpara

	if(flag == 0)
	{
		printf("\n Número: %i não encontrado na Matriz",Num);
	}   //fimse
	
	printf("\n\n Tecle enter para continuar...");
	getche();
	goto Menu_Secundario;   //vá para Menu Secundário;
}   //fimse opção'5'


if(op == '6')
{
	goto Menu_Principal;   //vá para Menu Principal;
}   //fimse opção '6'
	
}//fim algoritmo



