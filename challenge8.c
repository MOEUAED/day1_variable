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

    moyenne = cbrt(a * b * c);


printf("moyenne geaometrique est : %f ", moyenne);
return 0 ;

}
