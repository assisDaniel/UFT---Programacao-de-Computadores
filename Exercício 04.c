#include <stdio.h>
#include <time.h>

int main(void){
    int h0, m0, h, m, tempo, tempo0;
    scanf("%d%d%d%d", &h0, &m0, &h, &m);
    if(h==h0 && m0>=m){
        h= 24*3600;
        h0=0;
        m*=60;
        m0*=60;
        tempo= h+m;
        tempo0= h0+m0;
    }else if(h==h0 && m0<m){
        h=0;
        m*=60;
        h0=0;
        m0*=60;
        tempo= h+m;
        tempo0= h0+m0;
    } else if(h< h0){
        int diff= h0-h;
        h= (24*3600) -(diff*3600);
        h0=0;
        m*=60;
        m0*=60;
        tempo= h+m;
        tempo0= h0+m0;
    }else{
        h*=3600;
        h0*=3600;
        m*=60;
        m0*=60;
        tempo= h+m;
        tempo0= h0+m0;
    }

    int difftempo= tempo- tempo0;
    h=0; m=0;
    while(difftempo!=0){
        if(difftempo>=3600){
            h= difftempo/3600;
            difftempo%=3600;
        }else{
            m= difftempo/60;
            difftempo%=60;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
}