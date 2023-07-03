#include <stdio.h>
#include <strings.h>

void convert(char *vector, char idk, int skips){
    char alphabet[27]= {'-','Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
    
    for(int j=1; j<27; j++){
        if(idk==alphabet[j]){
            if((j+skips)>26){
                int diff= (j+skips)-26;
                printf("%c", alphabet[diff]);
                break;
            }else{
                printf("%c", alphabet[j+skips]);
                break;
            }
        }
    }
}

int main(void){
    int skips, n, cont=0;
    char teste[51], idk;
    scanf("%d", &n);
    while(cont<n){
        cont++;
        scanf("%s", teste);
        scanf("%d", &skips);
        for(int i=0; i<strlen(teste); i++){
            idk=teste[i];
            convert(teste,idk,skips);
        }
        putchar('\n');
    }
}