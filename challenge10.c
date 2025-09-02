#include<stdio.h>
#include<math.h>

int main (){

float r ,volume;

float pi = 3.14159 ;

 printf("entrer le le rayon de sphere : ");

    scanf("%f",&r);

volume = (4.0f/3.0f) * pi * pow(r,3);


printf("volume de sphere  est : %f ", volume);
return 0 ;

}
