#include <stdio.h>

float altura;

void alturaMulher(){
	if(altura < 1.60 and altura > 0){
		printf("VOCE E BAIXA");
	} else if(altura < 1.75){
		printf("VOCE E MEDIA");
	} else if(altura < 2.3){
		printf("VOCE E ALTA");
	} else{
		printf("VOCE NAO E HUMANO");
	}
}

void alturaHomem(){
	if(altura < 1.70 and altura > 0){
		printf("VOCE E BAIXO");
	} else if(altura < 1.79){
		printf("VOCE E MEDIO");
	} else if(altura < 2.3){
		printf("VOCE E ALTO");
	} else{
		printf("VOCE NAO E HUMANO");
	}
}

void alturaOutros(){
	if(altura < 1.60 and altura > 0){
		printf("VOCE E BAIXO");
	} else if(altura < 1.75){
		printf("VOCE E MEDIO");
	} else if(altura < 2.3){
		printf("VOCE E ALTO");
	} else{
		printf("VOCE NAO E HUMANO");
	}
}

int main(){
	char sexo;
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	fflush(stdin);
	printf("Digite seu sexo (M - MASCULINO, F - FEMININO, O - OUTRO): ");
	scanf("%c", &sexo);
	
	if(sexo == 'F' || sexo == 'f'){
		alturaMulher();		
	} else if(sexo == 'M' or sexo == 'm'){
		alturaHomem();
	} else if(sexo == 'O' or sexo == 'o'){
		alturaOutros();
	} else{
		printf("ERRO");
	}
}
