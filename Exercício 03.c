#include <stdio.h>
#define maxEven 5
#define maxOdd 5

int main(void){
    int num, qtyEven=0, qtyOdd=0, even[maxEven], odd[maxOdd];

    for(int i=0; i<15; i++){
        scanf("%d", &num);
        if(num%2==0){
            even[qtyEven]= num;
            if(qtyEven==4){
                for(int j=0; j<5; j++){
                    printf("par[%d] = %d\n", j, even[j]);
                }
                qtyEven=-1;
            }
            qtyEven++;
        }else{
            odd[qtyOdd]= num;
            if(qtyOdd==4){
                for(int k=0; k<5; k++){
                    printf("impar[%d] = %d\n",k, odd[k]);
                }
                qtyOdd=-1;
            }
            qtyOdd++;
        }
    }

    for(int j=0; j<qtyOdd; j++){
        printf("impar[%d] = %d\n", j, odd[j]);
    }
    for(int i=0; i<qtyEven; i++){
        printf("par[%d] = %d\n", i, even[i]);
    }
}