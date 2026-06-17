#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct
{
    int id;
    char nome[50];
    char filme[50];
    int sala;
    char dia[20];
    char horario[10];
    char assento[5];
    float valor;
} Ingresso;

int main()
{
    Ingresso ingressos[MAX];

    int quantidade = 0;
    int opcao;

    do
    {
        printf("\n====================================\n");
        printf(" SISTEMA DE INGRESSOS DE CINEMA\n");
        printf("====================================\n");
        printf("1 - Cadastrar ingresso\n");
        printf("2 - Listar ingressos\n");
        printf("3 - Buscar ingresso\n");
        printf("4 - Atualizar ingresso\n");
        printf("5 - Remover ingresso\n");
        printf("6 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
            {
                if(quantidade == MAX)
                {
                    printf("\nLimite de registros atingido!\n");
                    break;
                }

                int id;
                int existe = 0;

                printf("\nDigite o ID: ");
                scanf("%d", &id);

                for(int i = 0; i < quantidade; i++)
                {
                    if(ingressos[i].id == id)
                    {
                        existe = 1;
                        break;
                    }
                }

                if(existe)
                {
                    printf("ID ja cadastrado!\n");
                    break;
                }

                ingressos[quantidade].id = id;

                printf("Nome: ");
                scanf(" %[^\n]", ingressos[quantidade].nome);

                printf("Filme: ");
                scanf(" %[^\n]", ingressos[quantidade].filme);

                printf("Sala: ");
                scanf("%d", &ingressos[quantidade].sala);

                printf("Dia: ");
                scanf(" %[^\n]", ingressos[quantidade].dia);

                printf("Horario: ");
                scanf(" %[^\n]", ingressos[quantidade].horario);

                printf("Assento: ");
                scanf(" %s", ingressos[quantidade].assento);

                printf("Valor: ");
                scanf("%f", &ingressos[quantidade].valor);

                quantidade++;

                printf("\nIngresso cadastrado com sucesso!\n");
                break;
            }

            case 2:
            {
                if(quantidade == 0)
                {
                    printf("\nNenhum ingresso cadastrado.\n");
                    break;
                }

                printf("\n===== LISTA DE INGRESSOS =====\n");

                for(int i = 0; i < quantidade; i++)
                {
                    printf("\nRegistro %d\n", i + 1);
                    printf("ID: %d\n", ingressos[i].id);
                    printf("Nome: %s\n", ingressos[i].nome);
                    printf("Filme: %s\n", ingressos[i].filme);
                    printf("Sala: %d\n", ingressos[i].sala);
                    printf("Dia: %s\n", ingressos[i].dia);
                    printf("Horario: %s\n", ingressos[i].horario);
                    printf("Assento: %s\n", ingressos[i].assento);
                    printf("Valor: R$ %.2f\n", ingressos[i].valor);
                }

                break;
            }

            case 3:
            {
                if(quantidade == 0)
                {
                    printf("\nNenhum ingresso cadastrado.\n");
                    break;
                }

                int idBusca;
                int encontrado = 0;

                printf("\nDigite o ID para buscar: ");
                scanf("%d", &idBusca);

                for(int i = 0; i < quantidade; i++)
                {
                    if(ingressos[i].id == idBusca)
                    {
                        printf("\nIngresso encontrado!\n");
                        printf("ID: %d\n", ingressos[i].id);
                        printf("Nome: %s\n", ingressos[i].nome);
                        printf("Filme: %s\n", ingressos[i].filme);
                        printf("Sala: %d\n", ingressos[i].sala);
                        printf("Dia: %s\n", ingressos[i].dia);
                        printf("Horario: %s\n", ingressos[i].horario);
                        printf("Assento: %s\n", ingressos[i].assento);
                        printf("Valor: R$ %.2f\n", ingressos[i].valor);

                        encontrado = 1;
                        break;
                    }
                }

                if(!encontrado)
                {
                    printf("\nID nao encontrado.\n");
                }

                break;
            }

            case 4:
            {
                if(quantidade == 0)
                {
                    printf("\nNenhum ingresso cadastrado.\n");
                    break;
                }

                int idAtualizar;
                int encontrado = -1;

                printf("\nDigite o ID para atualizar: ");
                scanf("%d", &idAtualizar);

                for(int i = 0; i < quantidade; i++)
                {
                    if(ingressos[i].id == idAtualizar)
                    {
                        encontrado = i;
                        break;
                    }
                }

                if(encontrado == -1)
                {
                    printf("\nID nao encontrado.\n");
                    break;
                }

                printf("Novo nome: ");
                scanf(" %[^\n]", ingressos[encontrado].nome);

                printf("Novo filme: ");
                scanf(" %[^\n]", ingressos[encontrado].filme);

                printf("Nova sala: ");
                scanf("%d", &ingressos[encontrado].sala);

                printf("Novo dia: ");
                scanf(" %[^\n]", ingressos[encontrado].dia);

                printf("Novo horario: ");
                scanf(" %[^\n]", ingressos[encontrado].horario);

                printf("Novo assento: ");
                scanf(" %s", ingressos[encontrado].assento);

                printf("Novo valor: ");
                scanf("%f", &ingressos[encontrado].valor);

                printf("\nRegistro atualizado com sucesso!\n");

                break;
            }

            case 5:
            {
                if(quantidade == 0)
                {
                    printf("\nNenhum ingresso cadastrado.\n");
                    break;
                }

                int idRemover;
                int posicao = -1;

                printf("\nDigite o ID para remover: ");
                scanf("%d", &idRemover);

                for(int i = 0; i < quantidade; i++)
                {
                    if(ingressos[i].id == idRemover)
                    {
                        posicao = i;
                        break;
                    }
                }

                if(posicao == -1)
                {
                    printf("\nID nao encontrado.\n");
                    break;
                }

                for(int i = posicao; i < quantidade - 1; i++)
                {
                    ingressos[i] = ingressos[i + 1];
                }

                quantidade--;

                printf("\nRegistro removido com sucesso!\n");

                break;
            }

            case 6:
            {
                printf("\nEncerrando sistema...\n");
                break;
            }

            default:
            {
                printf("\nOpcao invalida!\n");
            }
        }

    } while(opcao != 6);

    return 0;
}