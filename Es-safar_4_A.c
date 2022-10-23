#include <stdio.h>

void main() {
int n;
int moy;
int somme= 0;
int i=0  ; //cette variable calcul le nombres des entiers 



printf("ENTRER UN ENTIER : ");
scanf("%d",&n);
somme=0;


while(n!=-1){
    if(n%2==0){
            somme+=n;
            i++;
            printf("ENTRER UN ENTIER OU -1 pour mettre fin : ");
    }

    scanf("%d",&n);
moy = somme / i;

}
printf("La somme et la moyenne des nombres pairs figurant dans une listesont resp : %d et %d ",somme, moy);
}

