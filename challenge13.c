#include <stdio.h>
int main(){
    int n,i,j,binaire[64];
    
    printf("saisir un nembre entier :\n");
    scanf("%d",&n);
    
	printf("la representation hexadecimale de le nombre %d est : %X\n",n,n);
    
    printf("la representation binaire de le nombre %d est :",n);
    
	i=0;
    
	while(n>0){
     
        binaire[i]=n%2;
        n=n/2;
        i++;

    }
    for(j=i-1;j>=0;j--){
        printf("%d",binaire[j]);

    }



    return 0;
}
