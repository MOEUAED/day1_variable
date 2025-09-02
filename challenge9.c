#include<stdio.h>
#include<math.h>

int main (){

float a , b , c , x, y ,z ,distance;

 printf("entrer le 1er nbr : ");

    scanf("%f",&a);

     printf("entrer le 2eme nbr : ");

    scanf("%f",&b);

     printf("entrer le 3eme nbr : ");

    scanf("%f",&c);

         printf("entrer le 3eme nbr : ");


       scanf("%f",&x);

     printf("entrer le 5eme nbr : ");

    scanf("%f",&y);

     printf("entrer le 6eme nbr : ");

    scanf("%f",&z);

    distance = sqrt(pow(a-x,2)+pow(b-y,2)+pow(c-z,2));


printf("distance  est : %f ", distance);
return 0 ;

}
