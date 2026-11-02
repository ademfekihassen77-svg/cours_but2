//
// Created by 22502788 on 12/10/2026.
//
#include <stdio.h>
int main (void) {
    int tab[10] ;
    int x;
    int taille_utilisateur;
    int i, compteur = 0;
    do {
        printf("Inserire un numero entre 2 et 10 \n");
        scanf("%d", &taille_utilisateur);
    }while(taille_utilisateur > 10 || taille_utilisateur < 2 ) ;
       
    

    for (int i = 0 ; i < taille_utilisateur ; i++) {
        printf("entre vos valeur 1 par 1 : ");
        scanf("%d", &tab[i]);
    }
    
    printf("Donner la valeur a rechercher : ");
    scanf("%d", &x);

    // Recherche du nombre d'occurrences
    for (i = 0; i < taille_utilisateur; i++) {
        if (tab[i] == x) {
            compteur++;
        }
    }

    // Affichage du resultat
    printf("%d apparait %d fois dans le tableau.\n", x, compteur);

    return 0;
}


#include <stdio.h>

int main() {
    float tab[10];
    float n_float, minimum;
    int n, i;

    // Saisie et verification de n
    do {
        printf("Donner le nombre de valeurs (entre 1 et 10) : ");
        scanf("%f", &n_float);

    } while (n_float < 1 || n_float > 10 || n_float != (int)n_float);

    n = (int)n_float;

    // Remplissage du tableau
    for (i = 0; i < n; i++) {
        printf("Donner la valeur %d : ", i + 1);
        scanf("%f", &tab[i]);
    }

    // Initialisation du minimum
    minimum = tab[0];

    // Recherche du minimum
    for (i = 1; i < n; i++) {
        if (tab[i] < minimum) {
            minimum = tab[i];
        }
    }

    // Affichage
    printf("Le minimum est : %.2f\n", minimum);

    return 0;
}



#include <stdio.h>

int main() {

    // Declaration et initialisation des tableaux
    int tab1[] = {1, 3, 5, 7, 9};
    int tab2[] = {2, 4, 6, 8, 10};

    int n1 = 5, n2 = 5;
    int tab3[10];

    int i, j, k;
    int trie1 = 1, trie2 = 1;

    // Verification du premier tableau
    for (i = 0; i < n1 - 1; i++) {
        if (tab1[i] > tab1[i + 1]) {
            trie1 = 0;
        }
    }

    // Verification du deuxieme tableau
    for (i = 0; i < n2 - 1; i++) {
        if (tab2[i] > tab2[i + 1]) {
            trie2 = 0;
        }
    }

    // Verification des deux tableaux
    if (trie1 == 0 || trie2 == 0) {
        printf("Les tableaux ne sont pas tous tries.\n");
    }

    else {

        i = 0;
        j = 0;
        k = 0;

        // Fusion des deux tableaux
        while (i < n1 && j < n2) {

            if (tab1[i] < tab2[j]) {
                tab3[k] = tab1[i];
                i++;
            }

            else {
                tab3[k] = tab2[j];
                j++;
            }

            k++;
        }

        // Copier les elements restants du premier tableau
        while (i < n1) {
            tab3[k] = tab1[i];
            i++;
            k++;
        }

        // Copier les elements restants du deuxieme tableau
        while (j < n2) {
            tab3[k] = tab2[j];
            j++;
            k++;
        }

        // Affichage du premier tableau
        printf("Tableau 1 : ");
        for (i = 0; i < n1; i++) {
            printf("%d ", tab1[i]);
        }

        // Affichage du deuxieme tableau
        printf("\nTableau 2 : ");
        for (i = 0; i < n2; i++) {
            printf("%d ", tab2[i]);
        }

        // Affichage du tableau fusionne
        printf("\nTableau fusionne : ");
        for (i = 0; i < k; i++) {
            printf("%d ", tab3[i]);
        }

        printf("\n");
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {

    char chaine[100];
    int i;

    // Saisie de la chaine
    printf("Donner une chaine de caracteres : ");
    scanf("%99s", chaine);

    // Affichage de la chaine
    printf("\nChaine : %s\n", chaine);

    // Longueur de la chaine
    printf("Longueur de la chaine : %lu\n", strlen(chaine));

    // Occupation memoire de la chaine
    printf("Occupation memoire de la chaine : %lu octets\n",
           strlen(chaine) + 1);

    // Informations sur le tableau
    printf("\nTaille du tableau : %lu octets\n", sizeof(chaine));
    printf("Adresse memoire du tableau : %p\n", (void*)chaine);
    printf("Occupation memoire du tableau : %lu octets\n",
           sizeof(chaine));

    // Affichage des codes ASCII
    printf("\nCodes ASCII des caracteres :\n");

    for (i = 0; i < strlen(chaine); i++) {
        printf("%c : %d\n", chaine[i], (unsigned char)chaine[i]);
    }

    return 0;
}





#include <stdio.h>

int main() {

    char c;
    int N;

    // Saisie du caractere
    printf("Donner un caractere : ");
    scanf(" %c", &c);

    // Affichage de la valeur decimale
    printf("Valeur decimale : %d\n", (unsigned char)c);

    // Verification de la nature du caractere
    if (c >= '0' && c <= '9') {

        printf("Nature : Numerique\n");

    }

    else if ((c >= 'A' && c <= 'Z') ||
             (c >= 'a' && c <= 'z')) {

        printf("Nature : Alphabetique\n");

        // Saisie du decalage
        printf("Donner le decalage N : ");
        scanf("%d", &N);

        N = N % 26;

        // Decalage des majuscules
        if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + N) % 26;
        }

        // Decalage des minuscules
        else {
            c = 'a' + (c - 'a' + N) % 26;
        }

        printf("Caractere apres decalage : %c\n", c);

    }

    else {

        printf("Nature : Autre\n");

    }

    return 0;
}




#include <stdio.h>
#include <string.h>

int main() {

    char chaine[100];
    int position;

    printf("Votre chaine : ");
    scanf("%99s", chaine);

    printf("Position de troncature : ");
    scanf("%d", &position);

    if (position >= 0 && position <= strlen(chaine)) {

        chaine[position] = '\0';

        printf("Votre chaine tronquee : %s\n", chaine);

    }

    else {
        printf("Position invalide.\n");
    }

    return 0;
}

	
    

