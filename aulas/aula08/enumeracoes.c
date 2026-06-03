#include <stdio.h>
#include <stdbool.h> 

int main() {
  enum dias_da_semana_e {
    domingo = 1,
    segunda = 2,
    terca = 3,
    quarta = 4,
    quinta = 5,
    sexta = 6,
    sabado = 7
  };

  enum meses_do_ano_e {
    janeiro = 1,
    fevereiro = 2,
    marco = 3,
    abril = 4,
    maio = 5,
    julho = 6, 
    junho = 7,
    agosto = 8,
    setembro = 9,
    outubro = 10, 
    novembro = 11,
    dezembro = 12
  };

  enum sexo_e {
    masculino = 1,
    feminino = 2
  };

  enum tipo_contato_e {
    particular,
    publico
  };

  struct contato_t {
    char nome[61];
    long int telefone;
    enum tipo_contato_e tipo;
  };

  bool esta_presente;
  esta_presente= false;
    return 0;
}