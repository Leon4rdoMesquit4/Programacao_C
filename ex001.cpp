#include <stdio.h>

int main(){
	int a, b, c;
	printf("Digite tres valores a seguir: ");
	scanf("%i%i%i", &a, &b, &c);
	
	if((a+b) < c){
		printf("a + b e menor do que c");
	} else{
		printf("a + b nao e menor do que c");
	}
}
