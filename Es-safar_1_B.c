 #include <stdio.h>
 void main(){
    int i,N,min,n,max;

    printf("ENTRER LE NOMBRE DES ENTIERS : ");
    scanf("%d",&N);
    min=0;
    max=0;
    
    for(i=0;i<N;i++){
        printf("ENTRER UN ENTIER : ");
        scanf("%d",&n);
        if(min>n || min==0){
            min=n;
        }
        if(max<n){   //J'ai ajouter la variable max que je compare aux valeurs n entrees 
 
            max=n; 
        }    
    

    }    
    printf(" le minimum des entiers saisis est : %d , le maximum est : %d",min,max);
 }
 