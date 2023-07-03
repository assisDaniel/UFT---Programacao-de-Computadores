#include <stdio.h>

int main(void){
    int t, n[1000], qty=1000;
    scanf("%d", &t);
    int compare= 1000-t;

    for(int i=0; i<1000; i++){
        n[i]= 1000-qty;
        printf("N[%d] = %d\n", i, n[i]);
        qty--;
        if(qty==compare) qty=1000;
    }
}