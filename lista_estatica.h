#ifndef LISTA_ESTATTICA_H
#define LISTA_ESTATTICA_H

#define TAM_MAX 10

typedef int TipoItem;

typedef struct {
    TipoItem item[TAM_MAX];
    int pos_livre;
} Lista;


//Cria uma lista vazia
Lista* cria_lista_vazia();

//Testa se uma lista e vazia
int vazia(Lista * l);

//Insere um item na lista
void insere(Lista* l, TipoItem x);

//Retira o item da lista
void retira(Lista* l, TipoItem x);

//Imprime os itens da lista
void imprime(Lista* l);


#endif  
