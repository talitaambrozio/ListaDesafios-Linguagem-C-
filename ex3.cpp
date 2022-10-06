//3 – Encontrar X1 e X2 de uma equação de segundo grau utilizando Bhaskara (mostrar a equação na tela) 
#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,delta,x1,x2;
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	delta = pow(b,2) - (4*a*c);
	if(delta == 0){
		x1 = (-b + sqrt(delta))/2*a;
		printf("Delta: %.2f, x: %.2f", delta, x1);
	}else if(delta>0){
		x1 = (-(b) + sqrt(delta))/(2*a);
		x2 = (-(b) - sqrt(delta))/(2*a);
		printf("Delta: %.2f, x1: %.2f, x2: %.2f", delta, x1, x2);
	}else if(delta<0){
		printf("Nao ha valores reais.");
	}
}

