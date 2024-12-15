#include <stdio.h>
#include <stdlib.h>
	  
int main(){
int np1, np2, pim, somar=0;

printf("digite a nota da np1\n");
scanf("%d", &np1);

printf("digite a nota da np2\n");
scanf("%d", &np2);

printf("digte a nota do pim\n");
scanf("%d", &pim);

somar=np1+np2+pim;

somar=somar/3;

printf("a media eh: %d", somar);
}
