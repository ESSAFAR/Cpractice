 #include <stdio.h>
 void main(){
    int i,N,min,n,max,ocmax,ocmin; //declaration d une nouvelle variable ocmax et ocmin pour le nombres d'occurrences du max et min resp

    printf("ENTRER LE NOMBRE DES ENTIERS : ");
    scanf("%d",&N);
    min=0;
    max=0;
    ocmax=0;
    ocmin=0;
    
    for(i=0;i<N;i++){
        printf("ENTRER UN ENTIER : ");
        scanf("%d",&n);
        if(min>n || min==0){
            min=n;
            ocmin=0;
        }
        if(max<n){   
            ocmax=0;
            max=n; 
        }    
        if(n==max){
            ocmax++;
        }
        if(n==min){
            ocmin++;
        }
    

    }    
    printf(" le minimum des entiers saisis est : %d apparait : %d \n le maximum est : %d apparait : %d",min,ocmin,max,ocmax);
 }
 