//5 - Cálculo da área de uma circunferência e comprimento da circunferência
#include<stdio.h>
#include<math.h>
#define PI 3.14
main(){
	float raio, comprimento, area;
	printf("Informe o raio: ");
	scanf("%f", &raio);
	comprimento = 2 * PI * raio;
	area = PI * pow(raio, 2);
	printf("Area da circunferencia: %.2f", area);
	printf("\nComprimento da circunferencia: %.2f", comprimento);
	
}

