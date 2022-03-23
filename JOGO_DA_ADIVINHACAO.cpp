#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int coxinha(){
	srand(time(NULL));
	int aleatorio = rand() % 1000;
	return aleatorio;
}

int carregando(){
	int i;
	for(i = 1; i < 6; i += 1){
		printf(".");
		Sleep(500);
	}
}

int frango(){
	int b = coxinha(), a, x =0;
	do{
	printf("=======================================\nQUAL O SEU PALPITE: ");
	scanf("%d", &a);
	
	if(a < 0 or a > 1000){
		printf("\n\Numero fora do intervalo tente novamente\n");
		x += 1;
	} else if(a < b){
		printf("\nO NUMERO ALEATORIO E MAIOR DO QUE ISSO\n");
		x += 1;
	} else if(a > b){
		printf("\nO NUMERO ALEATORIO E MENOR DO QUE ISSO\n");
		x += 1;
	} else if(a == b){
		x += 1;
	} else{
		printf("\nERRO\n");
		x += 1;
	} }while(a != b);
	printf("\n\nPARABENS VC ACERTOU EM %d TENTATIVAS\n\n", x);
}

int main(){
	char opcao;
	printf("Jogo da adivinhacao\nRegras:\n\n- Adivinhe o numero aleatorio em menos tentativas que seu amigo\n- Tente adivinhar um numero de 1 a 1000");
	printf("\n\nDeseja iniciar o programa? (DIGITE s PARA CONTINUAR ou QUALQUER TECLA PARA FINALIZAR O PROGRAMA): ");
	scanf("%c", &opcao);
	fflush(stdin);
	carregando();
	
	while(opcao == 'S' || opcao == 's'){
	system("cls");
	frango();
	fflush(stdin);
	Sleep(2500);
	printf("\nGOSTARIA DE JOGAR DE NOVO? (DIGITE s PARA CONTINUAR ou QUALQUER TECLA PARA FINALIZAR O PROGRAMA): ");
	scanf("%c", &opcao);
	fflush(stdin);
	carregando();
	}
	
	system("cls");
	printf("OBRIGADO POR JOGAR!!!");
}


