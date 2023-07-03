#include <stdio.h>

int main(void){
    int a,b,e,f,q,r;
    scanf("%d %d", &a, &b);
    
    if(a<0){
        e=b;
        if(b<0) e= b*-1;          //ta na existência do teorema se b<0 b'= -b;
        for(r=0; r<e; r++){
            f=a-r;
            if(f%b==0) break;
        }
        q=f/b;
    }else{
        q=a/b;
        r=a%b;
    }
    printf("%d %d\n", q, r);
}