#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

struct dados_contato {
char nome[50];
char email[50]; 
char telefone[15];
};

void Exibe(struct dados_contato cont[], char* contdesejado) {
int i;
for (i = 0; i < 3; i++) {
if (strcmp(cont[i].nome, contdesejado) == 0) {
	printf("telefone de %s:  %s ", cont[i].nome, cont[i].telefone);
	break;
} else {
printf("\ncontato não encontrado");
break;	
}
}
}


int main () {
	setlocale(LC_ALL, "portuguese");

struct dados_contato cont[3];
char contdesejado[50];
int i;

for (i = 0; i < 3; i++) {
printf("\nnome: ");
gets(cont[i].nome);
fflush(stdin);
printf("\nemail: ");
gets(cont[i].email);
fflush(stdin);
printf("\ntelefone: ");
gets(cont[i].telefone);
fflush(stdin);
}


printf("\n\nexibindo dados  \n");
for (i = 0; i < 3; i++) {
printf("\n\nnome: %s ", cont[i].nome);
printf("\nemail: %s ", cont[i].email);
printf("\ntelefone: %s ", cont[i].telefone);
}

fflush(stdin);

printf("\n\ncontato desejado:  ");
gets(contdesejado);

Exibe(cont, contdesejado);

	return 0;
}
