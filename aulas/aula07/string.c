#include<stdio.h>
#include<string.h>

int main () {

char texto[11]; //sabor string
//tamanho da tring=qdte de char +1 do\0 char *string // ponteiro para char

texto[0] ='o';
texto[1] ='l';
texto[2] ='a';
texto[3] =' ';
texto[4] ='p';
texto[5] ='e';
texto[6] ='s';
texto[7] ='s';
texto[8] ='o';
texto[9] ='a';
texto[10] ='\0'; //necessario, sempre

printf("%s\n", texto);

texto[3] ='\0';

printf("%s\n", texto);

for(int i= 0; i<11;i++){
    printf("%c", texto[i]);
}
printf("\n");

//Nao pode:
//texto = "ola";
// texto = texto+ "pessoal";

//copia string
strcpy(texto, "Bom"); //como atribuir uma string
printf("%s\n",texto);

//concatena string
strcat(texto, "dia");
printf("%s\n", texto);

// tamanho da string(Aqui que precisa dp '\0', senao da ruim)
int tamanho = strlen(texto);
printf("O tamanho do texto e %i\n", tamanho);
int capacidade = sizeof(texto);
printf("O tamanho do texto e %i\n", capacidade);

//preencher uma tring com um caracter
memset(texto, 'a',8);
printf("%s\n", texto);

//limpa a tring
memset(texto, '\0', capacidade);

int compara = strcmp("banana", "laraja");
printf("banana == laranja? %i\n", compara);
// -1(banana vem antes de laranja na ordem alfabetica)

compara = strcmp ("banana", "banana");
printf("laranja == banana? %i\n", compara);
// 1 (laranjavem depois de banana na ordem alfabetica)

compara = strcmp("banana", "banana");
printf("banana == banana? %i\n", compara);
// 0 (sao igual)

compara = strcmp("banana", "BANANA");
printf("banana == BANANA? %i\n", compara);
//1 (maiusulo e primeiro que minusculo, por isso banana vem depois de BANANA)

char *tem_letra_a = strchr("sergipe", 'a');
printf("a palavra sergipe tem letra a? %s\n", tem_letra_a);
tem_letra_a = strchr("roraima", 'a');
printf("a palavra roraima tem letra a? %s\n", tem_letra_a);

char*tem_silva = strstr("leonardo da silva", "silva");
printf("o nome joao da silva tem silva? %s\n", tem_silva);

tem_silva = strstr("joao silva", "SILVA");
printf("o nome joao da silva tem SILVA? %s\n", tem_silva);

    return 0;
}