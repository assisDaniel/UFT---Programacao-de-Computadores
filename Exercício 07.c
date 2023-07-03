#include <stdio.h>

int main(void){
    int size, value;
    scanf("%d", &size);

    while(size!=0){
        int m[size][size];

        for(int i=0; i<size; i++){
            m[i][0]= i+1;
            m[0][i]= i+1;
        }

        for(int i=1; i<size; i++){
            value= m[i][0];
            for(int j=1; j<size; j++){
                if(value>1){
                    value--;
                    m[i][j]= value;
                }else{
                    m[i][j]= m[i][j-1]+1;
                }
            }
        }

        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(j==0) printf("%3d", m[i][j]);
                else printf("%4d", m[i][j]);
            }
            putchar('\n');
        }
        putchar('\n');
        scanf("%d", &size);
    }
}
