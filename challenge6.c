#include<stdio.h>

int main (){

float a , b , result;

char operateur;

printf("entrer le premier nombre : ");
scanf("%f",&a);
printf("entrer le deuxieme nombre : ");
scanf("%f",&b);
printf("entrer operateur + - * / : ");
scanf(" %c",&operateur);


switch (operateur) {

case '+' :
    result = a+b ;
    printf("L'op�ration choisie est : %c  \n et votre resultat est %f \n",operateur , result);
break ;

case'-' :
       result = a-b ;
    printf("L'op�ration choisie est : %c  \n et votre resultat est %f \n",operateur , result);
    break ;

    case '*' :
    result = a*b ;
    printf("L'op�ration choisie est : %c  \n et votre resultat est %f \n",operateur , result);
break ;

case'/' :

    if (b!=0){
       result = a/b ;
    printf("L'op�ration choisie est : %c  \n e5t votre resultat est %f \n",operateur , result);
    }else {
    printf("erreur");
    }
    break ;
            default:
            printf("Op�rateur invalide.\n");
            break;

}
return 0 ;

}
