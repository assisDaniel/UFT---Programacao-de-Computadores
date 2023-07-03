#include <stdio.h>

int main(void){
    int t, pa, pb, percg1, percg2;
    double g1, g2;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d %d", &pa, &pb);
        scanf("%lf %lf", &g1, &g2);
        int tempo=0;

        while(pb>=pa){
            percg1= (g1/100)*pa; percg2=(g2/100)*pb;
            pa+=percg1;
            pb+=percg2;
            tempo++;
        }
        if(tempo>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", tempo);
        }
    }
}