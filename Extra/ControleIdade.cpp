/*Construa um algoritmo para ler o nome de um paciente, sua idade, peso e altura.
Na sequ�ncia, mostra na tela o nome, o peso e altura e a idade, dizendo se este 
� conforme a idade: Idade <= 12, � crian�a, Idade > 12 e idade <= 18 � adolescente,
e idade > 18 � adulto

Algoritmo em uma pseudo linguagem - Portugu�s estruturado

Vari�veis
caracter: Nome_Paciente
inteiro: Idade
fracion�rio: Peso, Altura

escreva("Digite o nome do paciente");
leia(Nome_Paciente);

escreva("Digite a idade do paciente");
leia(Idade);

escreva("Digite o peso do paciente");
leia(Peso);

escreva("Digite a altura do paciente");
leia(Altura);

escreva("O paciente se chama:", Nome_Paciente);
escreva("Seu peso �:", Peso);
escreva("Sua altura �:", Altura);

Se (Idade <= 12) ent�o 	
	escreva("Paciente � uma crian�a pois possui:", Idade, "Anos");
	
Se (Idade > 12 e Idade <= 18) ent�o
	escreva("Paciente � um adolescente pois possui:", Idade, "Anos");
	
Se (Idade > 18) ent�o 	
	escreva("Paciente � um adulto pois possui:", Idade, "Anos");

Fim do algoritmo */


// transformar o algoritmo em um c�digo atrav�s de uma linguagem de programa��o C/C++

// chamar as bibliotecas de comandos/instru��es


#include<conio.h>
#include<stdio.h>
#include<iostream>

// declara��o das vari�veis

char Nome_Paciente[30]; // vari�vel conjunto de 30 caract�res para o Nome_Paciente - String (%s = operador percentual) = Conjunto de caract�res 
int Idade; // (%i = operador percentual)
float Peso,Altura; // vari�veis do tipo fracion�rio (%f = operador percentual)

main(){ // programa principal - In�cio
	
	setlocale(LC_ALL, "portuguese"); // configura��o para uso do portugu�s
	
	
printf("Digite o nome do paciente:"); // printf = escreva
scanf("%s",&Nome_Paciente); // scanf = leia

printf("Digite a idade do paciente:"); // printf = escreva
scanf("%i",&Idade); // scanf = leia

printf("Digite o peso do paciente:"); // printf = escreva
scanf("%f",&Peso); // scanf = leia

printf("Digite a altura do paciente:"); // printf = escreva
scanf("%f",&Altura); // scanf = leia

printf("\nO paciente se chama: %s", Nome_Paciente);

printf("\nSeu peso �: %.2f quilos", Peso); // ".2" antes do operador percentual significa "2" casas depois da v�rgula


printf("\nSua altura �: %.2f metros", Altura); // ".2" antes do operador percentual significa "2" casas depois da v�rgula


if (Idade <= 12) { 	
	printf("\nPaciente � uma crian�a pois possui: %i Anos",Idade);}
	
if (Idade > 12 && Idade <= 18) {
	printf("\nPaciente � um adolescente pois possui: %i Anos",Idade);}
	
if (Idade > 18) { 	
	printf("\nPaciente � um adulto pois possui: %.i Anos",Idade);}
	
	
} // fim do algoritmo


