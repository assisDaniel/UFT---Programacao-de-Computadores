#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool checkLine(int **m, int line){
    int freq[10] = {0};

    for(int i=0; i<9; i++) freq[m[line][i]]++;
    for(int i=1; i<=9; i++) if(freq[i] != 1) return false;

    return true;
}

bool checkColumn(int **m, int column){
    int freq[10] = {0};

    for(int i=0; i<9; i++) freq[m[i][column]]++;
    for(int i=1; i<=9; i++) if(freq[i] != 1) return false;

    return true;
}

bool checkRegions(int **m, int region){
    int begLine, endLine, begCol, endCol;
    int freq[10] = {0};
    
    if(region==0){
        begLine=0; endLine=3; begCol=0; endCol=3;
    }else if(region==1){
        begLine=0; endLine=3; begCol=3; endCol=6;
    }else if(region==2){
        begLine=0; endLine=3; begCol=6; endCol=9;
    }else if(region==3){
        begLine=3; endLine=6; begCol=0; endCol=3;
    }else if(region==4){
        begLine=3; endLine=6; begCol=3; endCol=6;
    }else if(region==5){
        begLine=3; endLine=6; begCol=6; endCol=9;
    }else if(region==6){
        begLine=6; endLine=9; begCol=0; endCol=3;
    }else if(region==7){
        begLine=6; endLine=9; begCol=3; endCol=6;
    }else if(region==8){
        begLine=6; endLine=9; begCol=6; endCol=9;
    }

    for(int i=begLine; i<endLine; i++)
        for(int j=begCol; j<endCol; j++) freq[m[i][j]]++;
    
    for(int i=1;i<=9;i++) if(freq[i]!=1) return false;
    
    return true;     
}

int main(void){
    int n, **m;
    bool search;
    scanf("%d", &n);

    m=(int **)malloc(sizeof(int*) * 9);
    if(m) for(int i=0;i<9;i++) m[i]= (int*)malloc(sizeof(int) * 9);
    

    for(int i = 0;i< n;i++){
        for(int j = 0;j< 9;j++)
            for(int k = 0;k< 9;k++) scanf("%d", &m[j][k]);

        search = true;
        for(int j = 0;j< 9;j++){
            if(!checkColumn(m, j) || !checkLine(m, j) || !checkRegions(m, j)){
                search = false;
                break;
            }
        }
        printf("Instancia %d\n", i + 1);
        if(search) printf("SIM\n");
        else printf("NAO\n");
        putchar('\n');
    }
}