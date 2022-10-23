  #include <stdio.h>
 void main(){
    int i,min,n,max;
    min = 0;
    max = 0;

    printf("ENTRER UN ENTIER : ");


    while(1){                x
        scanf("%d",&n);
        if(n==-1){               //La sortie de la boucle se fait lorsque n==-1 est verifiee
            break;
        }

        if(min>n || min==0){
            min=n;
        }

        if(max<n){     
            max=n;
        }
        printf("ENTRER UN ENTIER OU -1 POUR METTRE FIN : ");
    
    }    


    printf(" le minimum des entiers saisis est : %d , le maximum est : %d",min,max);
 }