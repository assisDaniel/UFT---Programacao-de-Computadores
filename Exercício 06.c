#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    while(n!=0){
        int m[n][n];
        int lps=0;
        int value=1;

        while(lps<= (n/2)){
            for(int i=lps; i<n-lps; i++){
                for(int j=lps; j<n-lps; j++){
                    m[i][j]= value;
                }
            }
            value++;
            lps++;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j==0) printf("%3d", m[i][j]);
                else printf("%4d", m[i][j]);
            }
            putchar('\n');
        }
        
        putchar('\n');
        scanf("%d", &n);
    }
}