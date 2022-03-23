#include <stdio.h>

int main(){
	int a;
	printf("DIGITE UM NUMERO PRA DESCOBRIR SE E IMPAR OU PAR: ");
	scanf("%i", &a);
	if(a % 2 == 0){
		printf("Numero par");
	} else if(a % 2 == 1){
		printf("Numero impar");
	}
}
