#include "lista_estatica.c"

Lista* preencherItensLista(Lista *l)
{
    for (int i = 0; i < TAM_MAX; i++)
      insere(l,rand() % 10);    
}

void retirarItens(Lista *l)
{
    for (int i = 0; i < TAM_MAX; i++)
    {
         retiraLista(l, l->item[0]);
    }
}



int main()
{
    Lista *l1 = cria_lista_vazia();
    Lista *l2 = cria_lista_vazia();
    
    preencherItensLista(l1);
    preencherItensLista(l2);

    imprime(l1);
    printf("#########");
    imprime(l2);
   

    retira(l1,1);
    l2 = retiraLista(l2,1);

    imprime(l1);
    printf("#########");
    imprime(l2);

    
 
}

