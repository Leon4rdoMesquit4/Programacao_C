#include <stdio.h>

int main(){
	char sexo, nome;
	int casada, tempoCasamento;
	
	printf("DIGITE SEU NOME: ");
	scanf("%s", &nome);
	fflush(stdin);
	printf("Digite seu sexo (M - MASCULINO, F - FEMININO, O - OUTRO): ");
	scanf("%c", &sexo);
	printf("Qual o seu estado civil: \n[1] - Casado\n[2] - Solteiro\n[3] - Outro\n");
	scanf("%i", &casada);
	
	if(sexo == 'F' || sexo == 'f'){
		if(casada == 1){
			printf("Quanto tempo de casamento? ");
			scanf("%i", &tempoCasamento);
		}
	} else if(sexo == 'M' or sexo == 'm'){
		
	}else{
		printf("ERRO");
	}
	
}
