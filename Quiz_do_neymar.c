#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char questoes[][100] = {"Questão 1: \nQual a data de aniversário do adulto ney?",
						    "Questão 2: \nQual a altura de adulto ney?",
						    "Questão 3: \nQuantas champions o neymar tem?"};
	char alternativas[][100] = {"A) 5 de maio", "B) 7 de fevereiro", "C) 5 de fevereiro", "D) 7 de maio",
								"A) 1,77", "B) 1,75", "C) 1,73", "D) 1,74",
								"A) Nenhuma", "B) Uma", "C) Duas", "D) Tres"};
	char nivelDeNeymar[][30] = {"Você é Hater do neymar", "Você não é Fã do Neymar",
								"Você é um Fã normal do Neymar", "Você é Neymarzete"};
	char resposta[3] = {'C', 'B', 'B'};
	int numeroDeQuestoes = sizeof(questoes)/sizeof(questoes[0]);

	char pergunta;
	int acertos;
	
	printf("QUIZ DO ADULTO NEY\n");
	
	for(int i = 0; i < numeroDeQuestoes; i++){
		printf("-------------------------------\n");
		printf("%s\n", questoes[i]);
		
		for(int j = (i * 4); j < (i * 4) + 4; j++){
			printf("%s\n", alternativas[j]);
		}
		printf("R.:");
		scanf("%c", &pergunta);
		scanf("%c");
		
		pergunta = toupper(pergunta);
		
		pergunta == resposta[i] ? printf("Acertou!!\n") , acertos++ : printf("ERROU!!\n");
	}
	
	printf("\nPlacar final: %d/%d\n%s", acertos, numeroDeQuestoes, nivelDeNeymar[acertos]);
	
}
