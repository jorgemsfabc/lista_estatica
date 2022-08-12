#include "lista_estatica.c"

Lista* preencherItensLista(Lista *l)
{
    for (int i = 0; i <= TAM_MAX; i++)
      insere(l,i);    
}


int main()
{
    Lista *l1 = cria_lista_vazia();
    Lista *l2 = cria_lista_vazia();
    
    preencherItensLista(l1);
    preencherItensLista(l2);

    imprime(l1);
    imprime(l2);

    retira(l1, 5);
    retira2(l2,5);

    imprime(l1);
    imprime(l2);
}
