#include <stdio.h>
void main(){
    int somme = 0; 
    int N = 0;

    scanf("%d",&N);

    while (N != 0) {
        somme = somme + N % 10;
        N = N / 10;
    }
    printf("%d", somme);
}