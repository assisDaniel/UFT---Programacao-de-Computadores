#include <stdio.h>

int main(void){
    FILE *arq= fopen("test.txt", "w");
    int n=20;

    fprintf(arq, "O valor de n = %d\n", n);
    fclose(arq);
}