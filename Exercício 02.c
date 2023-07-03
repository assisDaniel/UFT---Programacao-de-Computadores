#include <stdio.h>

int main(void){
    char opt;
    int line;
    float m[12][12], soma=0;
    
    scanf("%d", &line);
    scanf(" %c", &opt);
   
    for(int i=0; i<12; i++) for(int j=0; j<12; j++) scanf(" %f", &m[i][j]);
        
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            if(i==line) continue;
            m[i][j]=0.0;
        }
    }
    for(int i=0; i<12; i++) for(int j=0; j<12; j++) soma+=m[i][j];

    switch(opt){
        case 'S':
        printf("%.1f\n", soma);
        break;

    case 'M':
        printf("%.1f\n", soma/12);
        break;
    }
}