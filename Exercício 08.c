#include <stdio.h>

int checkDigits(int info){
    int digits=1;
    while(info>9){
        info/=10;
        digits++;
    }
    return digits;
}

int main(void){
    int size;
    scanf("%d", &size);

    while(size!=0){
        int m[size][size];
    
        for(int i=0; i<size; i++){
            if(i==0){
                m[0][i]= 1;
                m[i][0]= 1;
            }else{
                m[0][i]= m[0][i-1]*2;
                m[i][0]= m[i-1][0]*2;
            }
        }
        for(int i=1; i<size; i++){
            for(int j=1; j<size; j++){
                m[i][j]= m[i][j-1]*2;
            }
        }

        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                int space= checkDigits(m[size-1][size-1]);
                if(j==0) printf("%*d",space, m[i][j]);
                else printf(" %*d",space, m[i][j]);
            }
            putchar('\n');
        }
        putchar('\n');
        scanf("%d", &size);
    }
}