#include <stdio.h>

int main(void){
    int size;
        
    while(scanf("%d", &size)!= EOF){
        int m[size][size];
        int center= size/2;
            
        for(int i=0; i<size; i++)
            for(int j=0; j<size; j++){
                m[i][j]=0;
                if(i==j) m[i][j]= 2;
            }
                
        int idk= size-1;
        for(int i=0; i<size; i++){
            m[i][idk]= 3;
            idk--;
        }
                
        int preencher= size/3;
        for(int i=preencher; i<size-preencher; i++) for(int j=preencher;j< size-preencher; j++) m[i][j]=1;
                
        m[center][center]= 4;

        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++) printf("%d", m[i][j]);
            putchar('\n');
        }
        putchar('\n');
    }
}