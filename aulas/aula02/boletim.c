#include <stdio.h>

int main(){
  /*========================
    BOLETIM DE NOTAS
    ========================
    Diciplina       A1   A2   A3   Mf
    APC 1           5.2  2.3  6.0  5.6
    Matematica disc 6.0  5.0  -    5.5
    calculo         4.0  4.0  4.0  4.0
    */

    char tecla_pressionada ='A';
    int inteiro = 10;
    float decimal = 5.2f; //ate 6 casas decimais
    double duplo = 5.2; //ate 12 casas decimais
  printf("========================\n");
  printf("BOLETIM DE NOTAS\n");
  printf("========================\n");

   int codigo_disciplina; 
   float nota_a1; 
   float nota_a2;
   float nota_a3;
   float nota_final;
    
   codigo_disciplina= 100;
   nota_a1= 5.2f;
   nota_a2= 2.3f;
   nota_a3= 6.0f;
   nota_final= 5.6f;

  printf("%05i  %5.1f  %5.1f  %5.1f  %5.1f\n");

  printf("%05i %5.1f  %5.1f  %5.1f  %5.1f\n",codigo_disciplina, nota_a1, nota_a2, nota_a3, nota_final);
  
  printf("%05i  %5.1f  %5.1f  %5.1f  %5.1f\n",codigo_disciplina, nota_a1, nota_a2, nota_a3, nota_final); 
  codigo_disciplina= 118;
  nota_a1= 6.0f;
  nota_a2= 5.0f;
  nota_a3= 0.0f;
  nota_final= 5.5f;

  printf("%05i %5.1f  %5.1f  %5.1f %5.1f\n",codigo_disciplina, nota_a1, nota_a2, nota_a3, nota_final);
  codigo_disciplina= 257;
  nota_a1= 4.0f;
  nota_a2= 4.0f;
  nota_a3= 4.0f;
  nota_final= 4.0f;


    return 0;
}