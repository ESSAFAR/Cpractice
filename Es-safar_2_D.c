#include <stdio.h>
int main()
{
    int n,N,c,pair=0,impair=0;

    printf("Donnez un entier : ");
    scanf("%d",&N);
    while(N/10!=0)
    {
        c=N%10;
        if(c%2==0)
            pair++;
        if(c%2!=0)
            impair++;
        N=N/10;
    }
    if(N%2==0)
        pair++;
    if(N%2!=0)
        impair++;

    printf("le nombre de chiffres pairs est %d et des impairs %d",pair,impair);
}
