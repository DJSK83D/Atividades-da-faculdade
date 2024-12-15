#include <stdio.h>

int main(){
	
	int num=99;
	printf("----1----:\n");
	for(num=99;num>=3;num-=3){
		printf("comandorfor %d :\n",num);
	}
	
	printf("---2--- :\n");
	int num2=99;
	while(num2>=3){
		printf("comandorwhile %d :\n",num2);
		num2-=3;
	}
	
		printf("---3--- :\n");
	int num3=99;
	do{printf("comandordo %d :\n",num3);
		num3-=3;
}while(num3>=3);
}
