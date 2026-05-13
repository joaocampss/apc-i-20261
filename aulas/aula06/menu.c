#include <stdio.h>

int main() {
    int opcao = 0;
do {
  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Recarregar\n");
  printf("3 - Ver mensagem\n");
  printf("4 - ver ligacoes\n");
  printf("5 - Sair\n");
  printf("Escolha uma opcao >");

  scanf("%i", &opcao);
  while(getchar() != '\n');

  switch(opcao) {
    case 1: printf("Seu slado eh R$ 10,10\n");break;
    case 2: printf("Escolha entre 10, 20 e 50 \n");break;
    case 3: printf("Voce nao tem mensagens\n");break;
    case 4: printf("Ultimas ligacoes: 9999-9999\n");break;
    case 5: printf("Opcao invalida! tente de novo.\n");break;
  }
} while(opcao != '\5');

printf("Obrigado pelo contato! ATE LOGO\n");

    return 0;
}