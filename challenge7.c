#include<stdio.h>
#include<math.h>

int main (){

float a , b , c , moyenne;

 printf("entrer le 1er nbr : ");

    scanf("%f",&a);

     printf("entrer le 2eme nbr : ");

    scanf("%f",&b);

     printf("entrer le 3eme nbr : ");

    scanf("%f",&c);

    moyenne = (a*2 +b*3 +c*5)/ (2+3+5);
printf("moyenne pondere est : %f ", moyenne);
return 0 ;

}
