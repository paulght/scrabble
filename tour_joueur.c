#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scrabble.h"

mot motJoue;
int sens, ligne, colonne;

void jouer_tour(){
    afficher_chevalet();
    recuperer_choix_du_joueur();
    placer_le_mot();
    afficher_chevalet();
}

void recuperer_choix_du_joueur() {
    do {
        printf("Saisissez votre mot de %d lettres maximum : ", 7);
        scanf("%s", motJoue);
    } while (strlen(motJoue) > nombreMaxDeJetonsDansMot);
    //TODO verifier que les lettres du mot sont dans le chevalet du joueur
    do {
        printf("Saisissez le sens de placement du mot : (0 pour Vertical ou 1 pour Horizontal)");
        scanf("%d", &sens);
    } while ((sens < 0) || (sens > 1));
    do {
        printf("Saisissez la ligne de placement de la 1ere lettre du mot : (1 - 15)");
        scanf("%d", &ligne);
    } while ((ligne < 1) || (ligne > 15));
    do {
        printf("Saisissez la colonne de placement de la 1ere lettre du mot : (1 - 15)");
        scanf("%d", &colonne);
        //TODO demander la lettre de la colonne plutot que le chiffre, et appeler la fonction index_de_la_colonne
    } while ((colonne < 1) || (colonne > 15));

    //TODO verifier que le mot joue ne va pas ecraser des lettres deja sur la grille
    //TODO ne pas accepter des lignes/colonnes qui font depasser le mot de la grille
    printf("%s sera joue (%d,%d) dans le sens %d\n", motJoue, ligne, colonne, sens);
}

void placer_le_mot()
{
    printf("mot : %s", motJoue);
    int longueur_mot = strlen(motJoue);
    printf(" longueur : %d", longueur_mot);

    int i;
    for (i = 0; i < longueur_mot; i++) {
        int l = ligne;
        int c = colonne;
        if (sens == 0) {
            l += i;
        } else if (sens == 1) {
            c += i;
        }
        place_une_lettre(motJoue[i], l, c);
        retirer_lettre_du_chevalet(motJoue[i]);
    }
    remplir_chevalet();
    afficher_chevalet();
    afficher_grille();
}

int index_de_la_colonne(char lettreColonne[1])           /// passe d'un type "char" a un type "int"
{
    char *convertisseur = "ABCDEFGHIJKLMNO";
    char *element;
    int colonne_en_chiffre;

    element = strchr(convertisseur, lettreColonne[0]);
    colonne_en_chiffre = (int) (element - convertisseur + 1);
    printf("\n");
    printf("colonne_en_chiffre: %d", colonne_en_chiffre);
    printf("\n");
    return colonne_en_chiffre;
}
