#include<stdio.h>
#include<math.h>

int main (){

int nbr, a ,b ,c ,d , inverse ;

printf("Entrer 4-shiffre nombre :  ");
scanf("%d", &nbr);

a = nbr %10 ;
b = (nbr / 10 )%10;
c = (nbr / 100 )%10;
d = nbr /1000;
inverse = a * 1000 + b * 100 + c * 10 + d ;
printf("%d ", inverse);
return 0 ;

}
