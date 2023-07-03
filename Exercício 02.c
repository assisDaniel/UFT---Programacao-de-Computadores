#include <stdio.h>
#include <math.h>

int main(void){
    double n;
    int result[2][6]; for(int i=0; i<2; i++){for(int j=0; j<6; j++){result[i][j]=0;}}
    

    scanf("%lf", &n);
    int notas= (int)n;
    n-=notas;
    int moedas= n*100;

    while(notas!=0){
        if(notas>=100){
            result[0][0]= notas/100;
            notas%=100;
        }else if(notas>=50){
            result[0][1]= notas/50;
            notas%=50;
        }else if(notas>=20){
            result[0][2]= notas/20;
            notas%=20;
        }else if(notas>=10){
            result[0][3]= notas/10;
            notas%=10;
        }else if(notas>=5){
            result[0][4]= notas/5;
            notas%=5;
        }else if(notas>=2){
            result[0][5]= notas/2;
            notas%=2;
        }else{
            notas*=100;
            moedas+=notas;
            break;
        }
    }
    while(moedas!=0){
        if(moedas>=100){
            result[1][0]=moedas/100;
            moedas%=100;
        }else if(moedas>=50){
            result[1][1]= moedas/50;
            moedas%=50;
        }else if(moedas>=25){
            result[1][2]= moedas/25;
            moedas%=25;
        }else if(moedas>=10){
            result[1][3]=moedas/10;
            moedas%=10;
        }else if(moedas>=5){
            result[1][4]= moedas/5;
            moedas%=5;
        }else{
            result[1][5]= moedas/1;
            moedas%=1;  
        }
    }


    

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", result[0][0]);
    printf("%d nota(s) de R$ 50.00\n", result[0][1]);
    printf("%d nota(s) de R$ 20.00\n", result[0][2]);
    printf("%d nota(s) de R$ 10.00\n", result[0][3]);
    printf("%d nota(s) de R$ 5.00\n", result[0][4]);
    printf("%d nota(s) de R$ 2.00\n", result[0][5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", result[1][0]);
    printf("%d moeda(s) de R$ 0.50\n", result[1][1]);
    printf("%d moeda(s) de R$ 0.25\n", result[1][2]);
    printf("%d moeda(s) de R$ 0.10\n", result[1][3]);
    printf("%d moeda(s) de R$ 0.05\n", result[1][4]);
    printf("%d moeda(s) de R$ 0.01\n", result[1][5]);
}