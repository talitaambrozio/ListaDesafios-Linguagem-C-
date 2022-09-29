//ex4. calculadora
#include<stdio.h>
main(){
	float num1, num2, resultado;
	int operacao;
	char opcao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	printf("Digite a operacao desejada: \n1 - Soma \n2 - Subtracao \n3 - Multiplicacao \n4 - Divisao\n");
	scanf("%d", &operacao);
	
	if((operacao == 4) &&(num2 == 0)){
		printf("Impossivel dividir por zero. Digite o segundo numero novamente: ");
		scanf("%f", &num2);
	}
	switch(operacao){
		case 1: resultado = num1 + num2; break;
		case 2: resultado = num1 - num2; break;
		case 3: resultado = num1 * num2; break;
		case 4: resultado = num1 / num2; break;
		default: printf("Operacao invalida!"); break;
	}
	printf("Resultado: %.2f", resultado);
	
}
