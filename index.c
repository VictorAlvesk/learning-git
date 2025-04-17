#include<stdio.h>

int main(void) {
	int soma,num1,num2;

	printf("Informe o primeiro numero para a soma:");
	scanf("%d", &num1);

	printf("Informe o segundo número:");
	scanf("%d", &num2);

	soma = num1 + num2;
	printf("%d + %d = %d", num1, num2, soma);
	
	printf("\n Hello World!");

	return 0;
}
