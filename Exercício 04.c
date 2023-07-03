#include <stdio.h>

int main(void){
    int qtyplayers, s, b, a, ss, sb, sa, ts=0, tb=0, ta=0, tss=0, tsb=0, tsa=0;
    char nome[100];
    double perc[3];

    scanf("%d", &qtyplayers);
    for(int i=0; i<qtyplayers; i++){
        scanf("%*s", nome);
        scanf("%d%d%d", &s, &b, &a);
        scanf("%d%d%d", &ss, &sb, &sa);
        ts+=s; 
        tb+=b;
        ta+=a;
        tss+=ss; 
        tsb+=sb; 
        tsa+=sa;
    }
    perc[0]= (tss*1.0/ts*1.0)*100; 
    perc[1]= (tsb*1.0/tb*1.0)*100; 
    perc[2]= (tsa*1.0/ta*1.0)*100;
    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n", perc[0], perc[1], perc[2]);
}