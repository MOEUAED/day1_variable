#include <stdio.h>

int main(){

float K , C ;

printf("Entrer la temperature en °C :");

scanf("%f",&C);

K = C + 273.15;
printf("your temperature en kelvin est : %.2f\n", K);


return 0;
}
