#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Escreva um programa que solicita e l� um n�mero, calcula e exibe o seu cubo.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float x;
	printf("informe um n�mero: ");
	scanf("%f", &x);
	
	printf("o cudo de %.0f � %.0f", x, pow(x,3));
	
	return(0);
}