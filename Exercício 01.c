#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct no{
    float price;
    char prod[50];
    struct no *next;
}node;

typedef struct lista{
    node* inicio;
}list;

list *listCreate(){
    list *new= malloc(sizeof(list));
    if(new){
        new->inicio= NULL;
    }
    return new;
}

node *nodeCreate(float info, char *name){
    node *new= malloc(sizeof(node));
    if(new){
        new->next= NULL;
        new->price= info;
        strcpy(new->prod, name);
    }
    return new;
}

bool add(list *lista, float info, char *name){
    node *new= nodeCreate(info, name);
    if(!new) return false;
    if(lista->inicio==NULL) lista->inicio= new;
    else{
        node *aux= lista->inicio;
        while(aux->next!=NULL){
            aux= aux->next;
        }
        aux->next= new;
    }
    return true;
}

float returnPrice(list *lista, char *name){
    node *ant= NULL;
    node *p= lista->inicio;

    while(p!=NULL && strcmp(p->prod, name)!=0){
        ant= p;
        p= p->next;
    }
    return p->price;
}

void listPrint(list *lista){
    node *new= lista->inicio;
    while(new){
        printf("Name: %s -> Price: %.2f\n", new->prod, new->price);
        new= new->next;
    }
}
int main(void){
    int n, qty, qtyProd;
    float price, soma=0;
    char name[50];

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        list *lista= listCreate();
        scanf("%d", &qty);
        for(int j=0; j<qty; j++){
            scanf(" %s", name);
            scanf("%f", &price);
            add(lista, price, name);
        }
        scanf("%d", &qty);
        for(int k=0; k<qty; k++){
            scanf(" %s", name);
            scanf("%d", &qtyProd);
            soma+=(returnPrice(lista, name)*qtyProd);
        }
        printf("R$ %.2f\n", soma);
        soma=0;
        free(lista);
    }
}