#include <stdio.h>

int main(void){
    int n, cont=1;
    
    
    for(int i=1; scanf("%d", &n)==1; i++){
        for(int i=0; i<=n; i++){
            cont= cont+ (i*1);
        }
        printf("Caso %d: %d numero%s", i, cont, (cont>1)?"s":"");
        printf("\n0");
        for(int j=1; j<=n; j++){
            for(int k=0; k<j; k++){
                printf(" %d", j);
            }
        }
        printf("\n\n");
        cont=1;
    }
}
