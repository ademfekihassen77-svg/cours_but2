//
// Created by 22502788 on 12/10/2026.
//
#include <stdio.h>
int main (void) {
    int tab[10] ;
    int taille_utilisateur;
    do {
        printf("Inserire un numero entre 10 e 20 \n");
        scanf("%d", &taille_utilisateur);
    }
    while(taille_utilisateur < 10) {
        printf("Inserire un numero entre 10 e 20 \n");
        scanf("%d", &taille_utilisateur);
    }

    for (int i = 0 ; i < taille_utilisateur ; i++) {
        printf("entre vos valeur 1 par 1 : 0");
        scanf("%d", &tab[i]);

    }
}

