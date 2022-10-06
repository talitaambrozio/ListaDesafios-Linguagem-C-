//6 - Encontrar números primos de um intervalo 
#include<stdio.h>
main(){
	int divisor = 0, num =0, i =0;
	for(i =1; i <=10; i++){
		divisor = 0;
		for(num = 1; num <= i; num++){
			if(i%num == 0){
				divisor++;
			}
		}
	if(divisor == 2){
		printf("%d \n", i);			
	}
	}
}
