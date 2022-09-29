//7. Programa para calcular media usando vetor e for

#include<stdio.h>
main(){
	
	float media, soma = 0;
	int qtdNotas;
	printf("Informe a quantidade de notas: ");
	scanf("%d", &qtdNotas);
	float notas[qtdNotas];
	
	for(int i = 0; i<qtdNotas; i++){
		printf("Digite a nota: ");
		scanf("%f", &notas[i]);
		soma+=notas[i];
	}
	
	media =soma/qtdNotas;
	printf("\nSoma: %.2f",soma);
	printf("\nMedia = %.2f", media);
}
