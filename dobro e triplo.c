#include <stdio.h>
#include <locale.h>
/*Fa�a um programa que solicita e l� dois n�meros, calcula e exibe o dobro do
primeiro e o triplo do segundo.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int n1,n2;
	printf("informe um n�mero inteiro: \n");
	scanf("%i", &n1);
 	printf("informe o segundo n�mero inteiro: \n");	
	scanf("%i",&n2);
	
	printf("\no dobro de %i � %i ", n1, n1 * 2);
	printf("\no triplo de %i � %i", n2, n2 * 3);
	
	return(0);
}