#include <stdio.h>

int main(){
	int opcao;
	
	printf("digete um dos numero (1,2 e 3)\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("opcao 1 selecionada\n");
			break;
			
			case 2:
				printf("opcao 2 selecionada\n");
				break;
				
				case 3:
					printf("opcao 3 selecionada\n");
					break;
					
					dafualt:
						printf("opcao invalida\n");
						break;
					
	}
}
