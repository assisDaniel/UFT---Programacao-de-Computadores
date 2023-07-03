#include <stdio.h>
 
int main(void){
    int n, hora=0, min=0, sec=0;
    
    scanf("%d", &n);
    while(n!=0){
        if(n>=3600){
            hora= n/3600;
            n%=3600;
        }else if(n>=60){
            min= n/60;
            n%=60;
        }else{
            sec= n;
            n%=1;
        }
    }
    
    printf("%d:%d:%d\n", hora, min, sec);
}