#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int contador, numero;
	
	printf("digite um numero de 1 a 7:\n");
	scanf("%d", &numero);
	
	for(contador=1; contador<7; contador++){
	}if(numero==1){
		printf("hoje eh domingo:\n");
	}else if(numero==2){
		printf("hoje eh segunda feira:\n");
	}else if(numero==3){
		printf("hoje eh terca feira:\n");
	}else if (numero==4){
		printf("hoje eh quarta feira:\n");
	}else if(numero==5){
		printf("hoje eh quinta feira:\n");
	}else if (numero==6){
		printf("hoje eh sexta feira:\n");
	}else if (numero==7){
		printf("hoje eh sabado:\n");
	}else if (numero>=7){
		printf("---numero incorreto---:\n");
		printf("pls digite um numero de um 1 a 7:\n");
	}
}
