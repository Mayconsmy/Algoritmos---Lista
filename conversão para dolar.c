#include <stdio.h>
#include <locale.h>
/*Crie um programa que solicita e l� a cota��o do d�lar atual e o valor em real
a ser convertido e, em seguida, calcula e exibe o resultado da convers�o.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float x1,x2;
	printf("Informe a cota��o do dolar atual: \n");
	scanf("%f", &x1);
	
	printf("Informe quantos reais voc� deseja converte: ");
    scanf("%f",&x2);
	
	printf("A convers�o resultou em aproximadamente: %.2f", x2/x1 );
	return(0);
}