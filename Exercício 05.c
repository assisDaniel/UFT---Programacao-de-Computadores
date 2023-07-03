#include <stdio.h>

int main(void){
    float m[12][12], soma=0;
    char opt;
    int lps=0;
    scanf(" %c", &opt);
    for(int i=0; i<12; i++) for(int j=0; j<12; j++) scanf("%f", &m[i][j]);
    
    for(int i=11; i>=0; i--) for(int j=i; j>=0; j--) m[i][j]=0;
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12-lps; j++){
            m[i][j]=0;
        }
        lps++;
    }
    
    for(int i=0; i<12; i++) for(int j=0; j<12; j++) soma+= m[i][j];

    switch(opt){
        case 'S':
        printf("%.1f\n", soma);
        break;

        case 'M':
        printf("%.1f\n", soma/30);
        break;
    }
}