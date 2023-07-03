#include <stdio.h>

int organize(int *a, int *b, int *c){
    int temp;
    
    if(*a < *b && *a < *c){             //caso o primeiro elemento for o menor
        if(*c < *b){
            temp= *c;
            *c= *b;
            *b= temp;
        }
    
    }else if(*b < *a && *b < *c){      //caso o segundo elemento for o menor
        temp= *a;
        *a= *b;
        *b= temp;
        if(*c < *b){
            temp= *c;
            *c= *b;
            *b= temp;
        }
    
    }else if(*c < *a && *c < *b){      //caso o último elemento for o menor
        temp= *a;
        *a= *c;
        *c= temp;
        if(*c < *b){
            temp= *c;
            *c= *b;
            *b= temp;
        }
    }
}

int main(void){
    int n1, n2, n3;
    n1= 100;
    n2= 300;
    n3=200;

    organize(&n1, &n2, &n3);
    printf("\n%d \n%d \n%d", n1, n2, n3);

    putchar('\n');
    system("\npause");
}