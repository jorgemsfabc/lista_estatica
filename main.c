#include "lista_estatica.c"

Lista* preencherItensLista(Lista *l)
{
    for (int i = 0; i < TAM_MAX; i++)
      insere(l,i);    
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
    // Lista *l2 = cria_lista_vazia();
    
    preencherItensLista(l1);
    // preencherItensLista(l2);


    retirarItens(l1);
 
}

