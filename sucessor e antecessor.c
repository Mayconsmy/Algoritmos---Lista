#include <stdio.h>
#include <locale.h>
/*Implemente um programa que solicita ao usu�rio a
entrada de um n�mero inteiro e apresenta seu antecessor e sucessor.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int x;
	printf("informe um n�mero inteiro: ");
	scanf("%i", &x);
	
	printf("o sucessor de %x � %x \n", x,x + 1);
	printf("o antecessor de %x � %x", x,x - 1);
	
	return(0);
}