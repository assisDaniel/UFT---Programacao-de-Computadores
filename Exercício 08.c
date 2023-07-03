#include <stdio.h>

int main(void){
    int n, menor=2147483647, index;

    scanf("%d", &n);
    while(n<1 || n>1000) scanf("%d", &n);
    int x[n];

    for(int i=0; i<n; i++){
        scanf("%d", &x[i]);
        if(x[i]< menor){
            menor=x[i];
            index= i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", index);
}