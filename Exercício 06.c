#include <stdio.h>
#include <string.h>

int main(void){
    char num[127];
    int n, leds=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", num);
        for(int j=0; j< strlen(num); j++){
            if(num[j]=='0') leds+=6;
            else if(num[j]=='1') leds+= 2;
            else if(num[j]=='2') leds+= 5;
            else if(num[j]=='3') leds+= 5;
            else if(num[j]=='4') leds+= 4;
            else if(num[j]=='5') leds+= 5;
            else if(num[j]=='6') leds+= 6;
            else if(num[j]=='7') leds+= 3;
            else if(num[j]=='8') leds+= 7;
            else if(num[j]=='9') leds+= 6;
        }
        printf("%d leds\n", leds);
        leds=0;
    }
}