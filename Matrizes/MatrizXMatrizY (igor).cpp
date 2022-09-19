/*Construa um programa que realize a manipula��o  de matrizes conforme
o menu de op��es:
Menu Principal
1 - Entrada MatrizX[3][2] tipo Inteiro;
2 - Entrada MatrizY[2][3] tipo caracter;
3 - Sair Sistema

Menu Secundario MatrizX[3][2]
1.1 - Imprimir valores da Matriz;
1.2 - Localizar n�mero digitado pelo usu�rio;
1.3 - Voltar Menu Principal;

Menu Secundario MatrizY[2][3]
2.1 - Imprimir valores da Matriz;
2.2 - Localizar caracter digitado pelo usu�rio;
2.3 - Voltar Menu Principal;
*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//Vari�veis

int MatrizX[3][2];
char MatrizY[2][3];
char op;
int Numero;
char Caracter;


main()
{
	setlocale(LC_ALL,"portuguese");
	system("cls");
	
	Menu_Principal:
	system("cls");
	printf("\n Menu Principal:");
	printf("\n 1 - Entrada de valores para a MatrizX[3][2] tipo Inteiro");
	printf("\n 2 - Entrada de valores para a MatrizY[2][3] tipo Caracter");
	printf("\n 3 - Sair do Sistema");
	printf("\n\n Digite sua op��o: ");
	op=getche();
	
	
	if(op == '1')
	{
		system("cls");
		printf("\n 1 - Entrada de valores para a MatrizX[3][2] do tipo Inteiro");
		for(int C=0;C<3;C++)
		{
			for(int L=0;L<2;L++)
			{
				printf("\n\n Digite o valor para a MatrizX[%i][%i]: ",C,L);
				scanf("%i",&MatrizX[C][L]);
			}
		}
		
		printf("\n\n Tecle enter para continuar para o Menu Secund�rio da MatrizX...");
		getche();
		goto Menu_SecundarioX;
	}
	
	
	if(op == '2')
	{
		system("cls");
		printf("\n 2 - Entrada de valores para a MatrizY[2][3] do tipo Caract�r");
		for(int C=0;C<2;C++)
		{
			for(int L=0;L<3;L++)
			{
				printf("\n Digite o valor para a MatrizY[%i][%i]: ",C,L);
				fflush(stdin);
				scanf("%c",&MatrizY[C][L]);
				fflush(stdin);
			}
		}
		
		printf("\n\n Tecle enter para continuar para o Menu Secund�rio da MatrizY...");
		getche();
		goto Menu_SecundarioY;
	}
	
	
	if(op == '3')
	{
		printf("\n 3 - Sair do Sistema...");
		exit(0);
	}
	
	
	Menu_SecundarioX:
	system("cls");
	printf("\n Menu Secund�rio da MatrizX");
	printf("\n 1 - Imprimir os valores da MatrizX[3][2]");
	printf("\n 2 - Localizar um n�mero na matriz digitado pelo usu�rio");
	printf("\n 3 - Voltar ao Menu Principal");
	printf("\n\n Digite sua op��o: ");
	op=getche();
	
	
	if(op == '1')
	{
		system("cls");
		printf("\n Impress�o dos valores da MatrizX[3][2]");
		for(int C=0;C<3;C++)
		{
			for(int L=0;L<2;L++)
			{
				printf("\n MatrizX[%i][%i]: %i",C,L,MatrizX[C][L]);
			}
		}
		
		printf("\n\n Tecle enter para voltar ao Menu Secund�rio da MatrizX");
		op=getche();
		goto Menu_SecundarioX;
	}
	
	if(op == '2')
	{
		int flag=0;
		system("cls");
		printf("\n Localizar um n�mero na MatrizX[3][2] tipo Inteiro...");
		printf("\n Digite um n�mero inteiro: ");
		scanf("%i",&Numero);
		for(int C=0;C<3;C++)
		{
			for(int L=0;L<2;L++)
			{
				if(Numero == MatrizX[C][L])
				{
					printf("\n N�mero encontrado na MatrizX: %i",MatrizX[C][L]);
					printf("\n Na Coluna: %i e na Linha: %i",C,L);
					flag=1;
				}
			}
		}
		
		if(flag == 0)
		{
			printf("\n\n N�mero '%i' n�o encontrado na MatrizX, digite outro novamente...",Numero);
		}
		
		printf("\n\n Tecle enter para voltar ao Menu Secund�rio da MatrizX");
		op=getche();
		goto Menu_SecundarioX;
	}
	
	
	if(op == '3')
	{
		system("cls");
		printf("\n Voltando ao Menu Principal");
		printf("\n\n Tecle enter para continuar...");
		op=getche();
		goto Menu_Principal;
	}
	
	
	Menu_SecundarioY:
	system("cls");
	printf("\n Menu Secund�rio da MatrizY");
	printf("\n 1 - Imprimir os valores da MatrizY[2][3]");
	printf("\n 2 - Localizar um n�mero na matriz digitado pelo usu�rio");
	printf("\n 3 - Voltar ao Menu Principal");
	printf("\n\n Digite sua op��o: ");
	op=getche();
	
	
	if(op == '1')
	{
		system("cls");
		printf("\n Impress�o dos valores da MatrizY[2][3]");
		for(int C=0;C<2;C++)
		{
			for(int L=0;L<3;L++)
			{
				printf("\n MatrizY[%i][%i]: %c",C,L,MatrizY[C][L]);
			}
		}
		
		printf("\n\n Tecle enter para voltar ao Menu Secund�rio da MatrizY");
		op=getche();
		goto Menu_SecundarioY;
	}
	
	if(op == '2')
	{
		int flag=0;
		system("cls");
		printf("\n Localizar um n�mero na MatrizY[2][3] tipo Caract�r...");
		printf("\n Digite um caract�r inteiro: ");
		scanf("%c",&Caracter);
		for(int C=0;C<2;C++)
		{
			for(int L=0;L<3;L++)
			{
				if(Caracter == MatrizY[C][L])
				{
					fflush(stdin);
					printf("\n Caract�r encontrado na MatrizY: %c",MatrizY[C][L]);
					fflush(stdin);
					printf("\n Na Coluna: %i e na Linha: %i",C,L);
					flag=1;
				}
			}
		}
		
		if(flag == 0)
		{
			fflush(stdin);
			printf("\n\n Caract�r '%c' n�o encontrado na MatrizY, digite outro novamente...",Caracter);
			fflush(stdin);
		}
		
		printf("\n\n Tecle enter para voltar ao Menu Secund�rio da MatrizY");
		op=getche();
		goto Menu_SecundarioY;
	}
	
	
	if(op == '3')
	{
		system("cls");
		printf("\n Voltando ao Menu Principal");
		printf("\n\n Tecle enter para continuar...");
		op=getche();
		goto Menu_Principal;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
