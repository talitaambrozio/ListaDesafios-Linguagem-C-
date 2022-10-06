//1 – Programa para calcular se compensa abastecer com Etanol ou Gasolina

#include<stdio.h>
main(){
	float precoGasolina, precoEtanol, kmEtanol, kmGasolina, precoLitroGasolinaUmKM, precoLitroEtanolUmKM;
	printf("Informe o preco atual da gasolina: ");
	scanf("%f", &precoGasolina);
	printf("Informe o preco atual do etanol: ");
	scanf("%f", &precoEtanol);
	printf("Quantos Km seu veiculo faz por litro de gasolina?");
	scanf("%f", &kmGasolina);
	printf("Quantos Km seu veiculo faz por litro de etanol?");
	scanf("%f", &kmEtanol);
	precoLitroGasolinaUmKM = precoGasolina/kmGasolina;
	precoLitroEtanolUmKM = precoEtanol/kmEtanol;
	printf("Preco da Gasolina para 1km: R$%.2f", precoLitroGasolinaUmKM);
	printf("\nPreco do Etanol para 1km: R$%.2f", precoLitroEtanolUmKM);
	if(precoLitroEtanolUmKM<precoLitroGasolinaUmKM) {
		printf("\nE mais vantajoso abastecer com etanol");
	}else{
		printf("\nE mais vantajoso abastecer com gasolina");
	}
	
}
