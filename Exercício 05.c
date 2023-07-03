#include <stdio.h>

int main(void){
    float n1, n2, n3, n4;
    scanf("%f %f %f %f", &n1,&n2,&n3,&n4);
    float media= ((n1*2)+ (n2*3)+(n3*4)+(n4*1))/10;
    
    printf("Media: %.1f\n", media);
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }else if(media>=5.0){
        printf("Aluno em exame.\n");
        float nr; scanf("%f", &nr);
        printf("Nota do exame: %.1f\n", nr);
        float mediaf= (media+nr)/2;
        if(media>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", mediaf);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", mediaf);
        }
    }else{
        printf("Aluno reprovado.\n");
    }
}