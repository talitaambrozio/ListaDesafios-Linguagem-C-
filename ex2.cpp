//2 – Programa que faz o cálculo do IMC (Índice de Massa Corporal) e apresentar o resultado
#include<stdio.h>
main(){
	float peso, altura, imc;
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	imc = peso/(altura*altura);
	if(imc <18.5){
		printf("IMC = %.2f. Abaixo do peso.", imc);
	}else if(imc >18.5 && imc<=24.9){
		printf("IMC = %.2f. Peso normal.", imc);
	}else if(imc>=25 && imc<=29.9){
		printf("IMC = %.2f. Sobrepeso.", imc);
	}else if(imc>=30 && imc<=34.9){
		printf("IMC = %.2f. Obesidade grau 1.", imc);
	}else if(imc>=35 && imc<=39.9){
		printf("IMC = %.2f. Obesidade grau 2.", imc);
	}else if(imc>40){
		printf("IMC = %.2f. Obesidade grau 3.", imc);
	}
}
