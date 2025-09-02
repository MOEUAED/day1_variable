#include <stdio.h>

int main(){

float d_km , d_m ;

printf("Entrer la distance en kilometre :");

scanf("%f",&d_km);

d_m = d_km * 0.27778;
printf("your distance en metre/seconde est : %f  m/s \n", d_m);


return 0;
}
