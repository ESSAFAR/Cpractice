/*A) Ecrire le programme qui calcule et affiche les détails des lignes d'une facture d'électricité. 

Les données du programme sont : Taxe 10%, Prix unitaire, Ancien et Nouvel index de consommation. 

On suppose que la première tranche de 100 KWh est facturée à 0.6 DH l'unité, et au delà  à 0.9 DH. 

Exemple d'affichage :  Si la consommation est de 100 KWh, le programme affichera : 

Prix      : (100 x 0.6) x 1.1= 66.00

B) Améliorer le programme pour calculer la consommation et le prix de N factures avec N donné.

C) Modifier le programme avec plusieurs factures. On n'en connaît pas le nombre, mais la  dernière lecture est un index négatif. (Utiliser while)*/

#include <stdio.h>
main void(){
    const int tax = 10 ;
    double PrixUnitaire ;
    double AncienIndex ;
    double NouvelIndex ;

//Ici j ai considere que si un utilisateur consomme 101 Kwh, le calcul serai (100 x 0.6 + 1 x 0.9) x 1.1  et non 101 x 0.6 x 1.1

printf("ENTRER VOTRE CONSOMMATION : ");
scanf("%lf", &P)



}