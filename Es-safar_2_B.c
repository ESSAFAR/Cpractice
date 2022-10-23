#include <stdio.h>
void main(){
    int sum = 0; 
    int i=0;
    int N = 0;

    scanf("%d",&N);

    while (N != 0) {
        N = N / 10;
        i++;
    }
    printf("%d", i);
}