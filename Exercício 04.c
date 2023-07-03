#include <stdio.h>

int main(void){
    float m[12][12], soma=0;
    char opt;

    scanf("%c", &opt);
    for(int i=0; i<12; i++) for(int j=0; j<12; j++) scanf("%f", &m[i][j]);

    for(int i=0; i<=11; i++) for(int j=i; j<=11; j++) m[i][j]= 0.0;
        
    for(int i=0; i<12; i++) for(int j=0; j<12; j++) soma+=m[i][j];

    switch(opt){
        case 'S':
        printf("%.1f\n", soma);
        break;

        case 'M':
        printf("%.1f\n", soma/66);
        break;
    }
}