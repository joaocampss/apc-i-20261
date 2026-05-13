#include <stdio.h>

int main() {
  int numero =0;

  printf("Entrar com numero de 1 a 10");
  scanf ("%i", &numero);

//  printf("A tabuada de %i:\n");
//  printf("%i x %i = %i\n", 1,numero,1 * numero); 
// printf("%i x %i = %i\n", 2,numero,2 * numero); 
//  printf("%i x %i = %i\n", 3,numero,3 * numero); 
//  printf("%i x %i = %i\n", 4,numero,4 * numero); 
//  printf("%i x %i = %i\n", 5,numero,5 * numero); 
// printf("%i x %i = %i\n", 6,numero,6 * numero); 
//printf("%i x %i = %i\n", 7,numero,7 * numero); 
//printf("%i x %i = %i\n", 8,numero,8 * numero); 
// printf("%i x %i = %i\n", 9,numero,9 * numero); 
// printf("%i x %i = %i\n", 10,numero,10 * numero); 

// repete de 1 ate 10
  for(int i=1; i<=10; i++) {
   printf("%i,x %i= %i\n", i, numero, i * numero);
  }
 // repete de 10 ate 1
  for(int i=10; i>0; i--) {
    printf("%i x %i = %i\n", i, numero, i * numero);

  }

// cuidado!!!
//for(int i=1; i>0; i++)
// printf("Ao infinito e alem\n");

  return 0;
}