#include <stdio.h>
#include <windows.h>

#define TAMANHO 5

void adicionar(int numero);
int quantidadeElementos();
int buscarPorIndice(int indice);
int buscarPorValor(int valor);
void excluir(int valor);
void ordenar();
void expandir();

void menu();

int posicao = 0;
int lista[TAMANHO];
int opcao;
int numero;
int indice;

int l = 0;

int c = 0;
int guardarnumero;

int main()
{
    opcao = 0;
    while(opcao !=8)
    {
        mostrar();
        menu();
        switch(opcao)
        {
        case 1:
            printf("Digite o numero: ");
            scanf("%d", &numero);
            adicionar(numero);
            c++;
            break;
        case 2:
            printf("A lista possui %d elementos.\n", quantidadeElementos());
            Sleep(5000);
            break;
        case 3:
            printf("Digite o indice: ");
            scanf("%d", &indice);

            numero = buscarPorIndice(indice);
            if(numero == -1)
                printf("Indice invalido!\n");
            else
                printf("Valor encontrado no indice %d = %d\n", indice, numero);
            break;
        case 4:
            printf("Digite o numero: ");
            scanf("%d", &numero);

            indice = buscarPorValor(numero);
            system("cls");
            if(indice == -1)
                printf("Nao encontrei %d na lista!\n", numero);
            else
                printf("Encontreio valor %d no indice %d\n", numero, indice);
            break;
        case 5: // exclir algo da lista
            printf("Digite o valor para excluir: ");
            scanf("%d", &numero);
            excluir(numero);
            break;
        case 6:
            printf("Ordenando...\n");
            ordenar();
            break;
        case 7:
            for(l=0; l < quantidadeElementos(); l++)
                printf("lista[%d]=%d\n", l, buscarPorIndice(l));
            break;
        case 9:
            for(int i=0 ; i < 5 ; i++)
                {
                    lista [i] = i + 1;
                    c++;
                }
            mostrar();
            break;
        case 10:
                mostrar();
        break;
        }
    }
}

void menu()
{
    printf("\n-------------------------------------");
    printf("\n\t1 - Adicionar\n");
    printf("\t2 - Quantidade de Elementos\n");
    printf("\t3 - Buscar por Indice\n");
    printf("\t4 - Buscar por Valor\n");
    printf("\t5 - Excluir\n");
    printf("\t6 - Ordenar\n");
    printf("\t7 - Listar\n");
    printf("\t8 - Sair\n");
    printf("opcao: ");
    scanf("%d", &opcao);
    system("cls");
}

int mostrar()
{
    printf("-----------------------\n");
    for(int i=0 ; i<c ; i++)
    {
        printf("\n\t[%d]", lista[i]);
    }
    printf("\n-----------------------\n");

}
void adicionar(int numero)
{
  lista[c] = numero;
}

int quantidadeElementos()
{
    return c;
}

int buscarPorIndice(int indice)
{
    return lista[indice];
}

int buscarPorValor(int valor)
{
    for(int i=0 ; i < c ; i++)
    {
        if(lista[i] == valor)
        {
            indice = i;
            return lista[i], indice;
        }
    }
}

void excluir(int valor)
{
    for(int i=0 ; i < c ; i++)
    {
        if(lista[i] == valor)
        {
            numero = lista[i];
            for(int ii=i ; ii<c ; ii++)
            {
                lista[ii] = lista[ii + 1];
            }
            c--;
            break;
        }
    }
}

void ordenar()
{

}
