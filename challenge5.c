#include<stdio.h>

int main (){
    float t;


    printf("entrer la température en Celsius : ");

    scanf("%f",&t);

    if(t<0){
        printf("Solide(glace) .");
    }else if(t>=100){
        printf("Gaz (vapeur)");
    }else{
        printf("Liquide(eau)");
    }
return 0 ;
}
