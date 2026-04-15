#include <stdio.h>

int main(){
  int idade;

  printf("Entre com a sua idade: ");
  scanf ("%i", &idade);
  while(getchar() != '\n');

  printf("voce eh uma crianca? %i\n", idade >= 0 && idade <= 12);
  //&& => 0 falso E quanquer coisa = Sempre Falso
  printf("voce eh um adolecente? %i\n", idade > 12 && idade < 16);
  printf("voce eh um jovem? %i\n", idade >= 16 && idade <= 20);
  //|| => 1 verdadeiro ou qualqer coisa =Sempre Verdadeiro
  printf("voce tem prioridade para vacinar? %i\n",
    idade <= 6 || idade >= 60);
  
  // ! => NAO Verdadeiro = Falso, NAO falso = Verdadeiro
  printf("voce naum pode votar? %i\n", !(idade >= 16) );






    return 0;
}