#include <stdio.h>

int main() {

  int idade= 0;

  printf("Entre com a idade");
  scanf("%i", &idade);

   if (idade < 13) {
        printf("Com %i anos voce eh crianca\n", idade);
    }
    else if (idade < 18) {
        printf("Com %i anos voce eh adolescente\n", idade);
    }
    else if (idade < 65) {
        printf("Com %i anos voce eh adulto\n", idade);
    }
    else {
        printf("Com %i anos voce eh idoso\n", idade);
    }

return 0;
}