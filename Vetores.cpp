#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota[5], total;
	int i;

	printf("Insira as 5 notas: ");
	for(i = 0; i < 5; ++i){
		scanf("%f", &nota[i]);
	}
	for(i = 0; i < 5; ++i){
		total += nota[i];
	}
	printf("\n%f", total / 5);
}

/* float nota[5] = {5, 6.88, 9.90, 4.66, 5.78}; 

	for(i = 0; i < 5; ++i){
	
	printf("%.2f\n", nota[i]);} */
