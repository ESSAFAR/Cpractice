#include <stdio.h>

int main()
{
    int n,m,nbr=0,i,test=1;
    printf("Donnez un entier : "); scanf("%d",&n);

    m=n;
    while(m/10!=0)
    {
        nbr++;
        m=m/10;
    }
    nbr++;

    int tab[nbr];

    for(i=0;i<nbr;i++)
    {
        tab[i]=m%10;
        m=m/10;
    }

    for(i=0;i<=(nbr-1)/2;i++)
    {
        if(tab[i]!=tab[nbr-1-i])
            test=0;
    }
    switch (test)
    {
    case 1:
        printf(" %d est un palindrome",n);break;
    case 0:
        printf(" %d n'est pas un palindrome",n);break;
    }




}