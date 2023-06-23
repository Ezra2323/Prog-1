#include <stdio.h>
#include <stdlib.h>


typedef struct produto
{
    int codigo;
    char nome[50];
    int QTD;
    float preco;
    char descricao[100];
} TProduto;

typedef struct celula
{
    TProduto item;
    struct celula *prox;
} TCelula;

typedef struct
{
    TCelula *primeiro;
    TCelula *ultimo;
    int tamanho;
} TLista;

void Inserir(TProduto x, TLista *Lista)
{
    Lista->ultimo->prox = (TCelula *)malloc(sizeof(TCelula));
    Lista->ultimo = Lista->ultimo->prox;
    Lista->ultimo->item = x;
    Lista->ultimo->prox = NULL;
    Lista->tamanho++;
}

void Imprimir(TLista Lista)
{
    TCelula *Aux;
    Aux = Lista.primeiro->prox;
    while (Aux != NULL)
    {
        printf("%d\n", Aux->item.codigo);
        Aux = Aux->prox;
    }
}

TCelula *Pesquisar(TLista Lista, TProduto Item)
{
    TCelula *Aux;
    Aux = Lista.primeiro;
    while (Aux->prox != NULL)
    {
        if (Aux->prox->item.codigo == Item.codigo)
            return Aux;
        Aux = Aux->prox;
    }
    return NULL;
}

void LerProduto(TProduto *x)
{
    printf("\nDigite o codigo: ");
    fflush(stdin);
    scanf("%d", &x->codigo);

    printf("\nDigite nome: ");
    fflush(stdin);
    fgets(x->nome, 50, stdin); // para strings

    printf("\nDigite a quantidade: ");
    fflush(stdin);
    scanf("%d", &x->QTD);

    printf("\nDigite a preco: ");
    fflush(stdin);
    scanf("%f", &x->preco);

    printf("\nDigite descricao: ");
    fflush(stdin);
    fgets(x->descricao, 100, stdin);
}

void Excluir(TLista *Lista, TProduto *Item)
{
    TCelula *Aux1, *Aux2;
    Aux1 = Pesquisar(*Lista, *Item);

    if (Aux1 != NULL)
    {
        Aux2 = Aux1->prox;
        Aux1->prox = Aux2->prox;
        *Item = Aux2->item;

        if (Aux1->prox == NULL)
        {
            Lista->ultimo = Aux1;
        }
        free(Aux2);
        Lista->tamanho--;
    }
    else
    {
        Item->codigo = -1;
    }
}

void ImprimirProduto(TProduto x)
{
    printf("\n Codigo:%d", x.codigo);
}
int main()
{
    TLista Lista;
    TProduto x;
    int n = 1, i = 0, escolha;

    // Inicialização da lista
    Lista.primeiro = (TCelula *)malloc(sizeof(TCelula));
    Lista.ultimo = Lista.primeiro;
    Lista.ultimo->prox = NULL;
    Lista.tamanho = 0;

    // Recebendo valores
    for (i = 0; i < n; i++)
    {
        LerProduto(&x);
        Inserir(x, &Lista);
    }

    // Pesquisar
    TCelula *p;
    printf("\nDigite um codigo que deseja pesquisar: ");
    fflush(stdin);
    scanf("%d", &x.codigo);
    p = Pesquisar(Lista, x);
    
    if (p != NULL)
    {
        printf("\nCodigo: %d", p->prox->item.codigo);

        ImprimirProduto(p->prox->item);
    }
    else
    {
        printf("\nProduto não encontrado");
    }

    // Excluir
    printf("\nDigite o codigo que deseja excluir: ");
    fflush(stdin);
    scanf("%d", &x.codigo);
    Excluir(&Lista, &x);

    // teste
    if (x.codigo == -1)
    {
        printf("\nCodigo nao encontrado");
        
    }
    else
    {
        printf("\nCodigo excluido com sucesso");
    }

    // Imprimir produto
    ImprimirProduto(x);

    return 0;
}
