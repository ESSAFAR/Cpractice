#include <stdio.h>
void main() {
    int N;
    int i;
    int k=1;
    int n;
    int m=0;
    

    printf("ENTRER LE NOMBRE DES VALEURS ") ;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        if(i==0){
            printf("ENTRER LA 1ERE VALEUR : ");
        }
        else{
            printf("ENTRER LA %d IEME VALEUR ",i+1);
        }
         scanf("%d",&n);
         if(m>n){
            k++;
         }
         printf("sequence %d : %d \n",k,n) ;
         m=n;

    }
}