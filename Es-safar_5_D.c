#include <stdio.h>
void main() {
    int N;
    int i;
    int k=1;
    int n;
    int m=0;
    int nb=0; //pour calculer le nombre de valeurs dans chaque séquence
    int nbmax=0;
    int deb=0;
    int debmax=0;
    int fin=0;
    int finmax=0;

    

    printf("ENTRER LE NOMBRE DES VALEURS ") ;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        if(i==0){
            printf("ENTRER LA 1ERE VALEUR : ");
            scanf("%d",&n);
            deb=n;
        
        }
        else{
            printf("ENTRER LA %d IEME VALEUR ",i+1);
            scanf("%d",&n);
        }
         if(m>n){
            printf("le nombre de valeurs de la sequence %d est : %d \n", k,nb);
            fin=m;
            if(nbmax<nb){
                nbmax=nb;
                debmax=deb;
                finmax=fin;
            }
            k++;
            nb=0;
         }
         printf("sequence %d : %d \n",k,n) ;
         m=n;
         nb++;
    }
    printf("La longueur maximale est : %d la valeur de debut est : %d celle de fin %d \n",nbmax,debmax,finmax) ;
}