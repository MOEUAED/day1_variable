        #include<stdio.h>

        int main (){

            char  nom[50] ;
            char prenom[50] ;
            char sexe ;
            char email[100] ;
            int age ;
        printf("entrer votre nom : ");
        scanf("%s",nom);
        printf("entrer votre prenom : ");
        scanf("%s",prenom);
        printf("entrer votre age : ");
        scanf("%d",&age);
        printf("entrer votre sexe : ");
        scanf(" %c",&sexe);
        printf("entrer votre email : ");
        scanf("%s",email);


        printf(" votre nom : %s \n", nom);
        printf(" votre prenom : %s \n",prenom);
        printf(" votre age : %d \n",age);
        printf(" votre sexe : %c \n",sexe);
        printf(" votre email : %s \n",email);

        return 0;
        }
