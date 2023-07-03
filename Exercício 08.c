#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define max 151

struct pokedex{
    char nome[128];
};

typedef struct list{
    int qty;
    struct pokedex data[max];
}plist;

bool canAdd(plist *lista){
    return lista->qty <max;
}

plist *listCreate(){
    plist *new= malloc(sizeof(plist));
    if(new!=NULL){
        new->qty= 0;
    }
    return new;
}

bool add(plist *lista, char *nome){
    if(canAdd(lista)){
        strcpy(lista->data[lista->qty].nome, nome);
        lista->qty++;
        return true;
    }
    return false;
}

bool repeated(plist *lista, char *nome){
    for(int i=0; i<lista->qty; i++){
        if(strcmp(lista->data[i].nome, nome)==0) return true;
    }
    return false;
}
int size(plist *lista){
    return lista->qty;
}

int main(void){
    char nome[128];
    plist *pokedex= listCreate();
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", nome);
        if(!repeated(pokedex, nome)) add(pokedex, nome);
    }
    int tamanho= 151 - size(pokedex);
    printf("Falta(m) %d pomekon(s).\n", tamanho);
}