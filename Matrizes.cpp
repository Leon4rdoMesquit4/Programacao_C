#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota[4][4], total[4];
	int i, g, f;
		
	for(i = 0; i < 4; ++i){
		printf("\nDIGITE AS NOTAS DO ALUNO %d:", i+1);
		for(g = 0; g < 4; ++g){
			scanf("%f", &nota[i][g]);
			total[i] += nota[i][g];
		}
	}
			
	for(f = 0; f < 4; ++f){
		printf("A MEDIA DO ALUNO %d FOI DE %.2f\n", f + 1, total[f]/4);
	}
}
