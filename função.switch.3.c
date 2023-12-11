#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

struct produto {
	char nome [50];
	int opcao;
	float preco;
	float quantidade;
};

void escolha(){
printf("1 - realizar uma compra \n");
printf("2 - consultar estoque \n");
printf("3 - sair do programa \n");
}

void estoque() {
	printf("consultando estoque");
	printf("\n1 - feijão -- R$ 8,60");
	printf("\n2 - arroz -- R$ 5,20");
	printf("\n3 - leite -- R$ 5,60");
	printf("\n4 - sabão liquido -- R$ 2,50");
	printf("\n5 - alcool -- R$ 10,70");
	printf("\n6 - agua sanitaria -- R$ 3,60");
	printf("\n7 - lamen -- R$ 1,40");
}

int main () {
	setlocale(LC_ALL, "portuguese");

struct produto produto;

escolha();

printf("\nescolha uma opção: ");
scanf("%d",&produto.opcao);


switch (produto.opcao) {
	case 1:
	printf("fazendo compra");
	printf("\no que deseja compra?: ");
	scanf("%c",&produto.nome);
	estoque();
	break;
	case 2:
	printf("consultando estoque");
	printf("\n1 - feijão -- R$ 8,60");
	printf("\n2 - arroz -- R$ 5,20");
	printf("\n3 - leite -- R$ 5,60");
	printf("\n4 - sabão liquido -- R$ 2,50");
	printf("\n5 - alcool -- R$ 10,70");
	printf("\n6 - agua sanitaria -- R$ 3,60");
	printf("\n7 - lamen -- R$ 1,40");
	printf("\n\npreço total do estoque R$ 37,60");
	break;
	case 3:
	break;
	default:
	printf("opção invalida.");		
	break;
}

	return 0;
}
