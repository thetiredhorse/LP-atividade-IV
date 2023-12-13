#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define TAM 2

float calcular(float notas[]) {
    int i;
    float soma = 0;
    float media;
   
    for(i = 0; i < TAM; i++) {
        soma += notas[i];
    }
   
    media = soma / TAM;
   
    return media;
}

char* Situacao(float media) {
    char* resultado[50];
   
    if(media >= 7) {
        strcpy(resultado, "Aprovado!");    
    } else {
        strcpy(resultado, "Reprovado!");    
    }
   
    return resultado;
}

int main() {
    setlocale(LC_ALL, "portuguese");
   
   	char nome[TAM] [50], nascimento [TAM] [50];
    float notas[TAM];
    float media;
    int i, j;
   
   
for(i = 0; i < TAM; i++) {
    	fflush(stdin);
    	
    	printf("\nDigite o %dª nome: ", i + 1);
        gets(nome[i]);
        
        printf("\ndata de nascimento: ", i + 1);
        gets(nascimento[i]);
        
        fflush(stdin);
        
	for(j = 0; j < TAM; j++) {
        printf("\nDigite a %dª nota: ", j + 1);
        scanf("%f",&notas[j]);
    }
    }

system("clear || cls");

media = calcular(notas);

for(i = 0; i < TAM; i++) {
	printf("\nnome: %s ", nome[i]);
	printf("\ndata de nascimento: %s ", nascimento[i]);
	printf("\n");
	for(j = 0; j < TAM; j++) {
		printf("\nnota:  %.2f ", notas[j]);
}
printf("\n");
    printf("\nMédia: %.1f ", media);
    printf("\nResultado: %s ", Situacao(media));
}

    return 0;
}
