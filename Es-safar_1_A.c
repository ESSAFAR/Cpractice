/*A) Ecrire le programme qui calcule et affiche le minimum de N entiers saisis au clavier.
 Exemple :  pour N=4 et des entiers 10, 14, 3, 12,   le programme affichera 3.*/

 #include <stdio.h>
 void main(){
    int i,N,min,n;
    printf("ENTRER LE NOMBRE DES ENTIERS : ");
    scanf("%d",&N);
    min=0;
    for(i=0;i<N;i++){
        printf("ENTRER UN ENTIER : ");
        scanf("%d",&n);
        if(min>n || min==0){
            min=n;
        }
    

    }    
    printf(" le minimum des entiers saisis est : %d",min);
 }
 