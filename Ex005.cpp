#include <stdio.h>

int main(){
	int a;
	printf("DIGITE SEU NUMERO A SEGUIR: ");
	scanf("%d", &a);
	
	if(a >= 0){
		printf("%d",a *= 2);
	} else if (a < 0){
		printf("%d",a *= 3);
	} else("ERRO");
}
