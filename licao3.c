#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i;

    printf("Digite um numero inteiro pls:\n");
    scanf("%d", &numero);

    for(i=2;i* i <= numero; i++) {
        if (numero % i == 0) {
            printf("O numero nao eh primo.\n");
          return 0;
        }
    }
    printf("O numero eh primo.\n");
    
}
