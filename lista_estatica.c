#include "lista_estatica.h"
#include <stdlib.h>
#include <stdio.h>

void insere(Lista* l, TipoItem x){
    if(l->pos_livre >= TAM_MAX)
         printf("Lista cheia \n");
    else
        l->item[l->pos_livre++] = x;
}

Lista* cria_lista_vazia(){
    Lista * nova_lista = (Lista*) malloc(sizeof(Lista));
    nova_lista->pos_livre = 0;
    return nova_lista;
}

int vazia(Lista * l){
    return (l->pos_livre == 0);
}

void retira(Lista* l, TipoItem x){
    
    if(vazia(l))
        printf("Lista vazia: sem elementos para retirar");
    else {
        int pos = 0;
        
        while(pos < l->pos_livre && x != l->item[pos])
            pos++;

        if(pos == l->pos_livre)
            printf("Elemento não encontrado");

        else { 

            int i;
            for(i = pos; i < l->pos_livre; i++)
                l->item[i] = l->item[i+1];
            }

        l->pos_livre--;
    }
}

Lista* retiraLista(Lista* l, TipoItem x){

    if(vazia(l))
        printf("Lista vazia: sem elementos para retirar");
    else{

          Lista * nl = (Lista*) malloc(sizeof(Lista));
        
         int n_index =  0;

         for (int i = 0; i <  l->pos_livre; i++)
         {
           if(x != l->item[i])
           {
                nl->item[n_index]=l->item[i];
                nl->pos_livre = l->pos_livre;
                n_index++;
           }
         }    
          if(nl->pos_livre>0)
            nl->pos_livre--;
         
          free(l);

          l = nl;

          return l;
    }
}

void imprime(Lista* l)
{
     printf("\n" );
      for (int i = 0; i <  l->pos_livre; i++){
          printf("%i - ", l->item[i] );
      }
       printf("\n" );
}
