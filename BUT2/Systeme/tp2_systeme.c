#include <stdio.h>
int main (void){
    int poids ;
    int age;
    float taille;
    float calcul;
    printf("saisir l'age :\n");
    scanf("%d",age);
    printf("saisir le poids :\n");
    scanf("%d",poids);
    printf("saisir le taille :\n");
    scanf("%f",taille);
    calcul = (taille**2)*age;

    if (calcul > 27.3 && age < 16) {
        printf("vous etes en surpoids ");
    }
    else if (calcul < 23 && age > 17 && age < 48) {
        printf("vous etes en surpoids ");
    }
    else if (calcul < 21.5 && age > 49) {
        printf("vous etes en surpoids ");
    }
    else {
        printf("vous n'etes pas en surpoids ");
    }



    return 0;
}