#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *repeated(char *vector){
    int lenght= strlen(vector);
    for(int i=0; i<lenght; i++){
        for(int j=i+1; j<lenght;){
            if(vector[j]==vector[i]){
                for(int k=j; k<lenght; k++) vector[k]= vector[k+1];
                lenght--;
            }else j++;
        }
    }
    return vector;
}

char *removeSpecial(char *vector){
    for(int i=0; i<strlen(vector); i++){
        if(ispunct(vector[i])){
            vector[i]=' ';
        }
    }
    return vector;
}

char *removeSpace(char *vector){
    for (int j=0; j<strlen(vector); j++){
        if(isspace(vector[j])) vector[j]= vector[j+1];
    }
    return vector;
}

int main(void){
    char sentence[1001], rptPhrase[1001];
    int n, size;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf(" %[^\n]", sentence);
        strcpy(rptPhrase, removeSpecial(sentence));
        strcpy(rptPhrase, repeated(rptPhrase));
        strcpy(rptPhrase, removeSpace(rptPhrase));
        strcpy(rptPhrase, repeated(rptPhrase));
        size= strlen(rptPhrase);
        if(size==26) printf("frase completa\n");
        else if(size>=13) printf("frase quase completa\n");
        else printf("frase mal elaborada\n");
    }
}