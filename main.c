#include <stdio.h>
#include <stdlib.h>
#include "scrabble.h"

int main()
{

    ///Saisie des joueurs

    int Joueur;
    char Pseudo[100];
    do {
            printf("Saisissez le nombre de joueurs dans la limite de 2 joueurs Minimum et de 4 joueur Maximun \n");
            scanf("%d", &Joueur);
        }while((Joueur<2)||(Joueur>4));
    for (int j=1;j<(Joueur+1);j++)
    {
        printf("Saisissez le Pseudo du joueur%d\n",j);
        scanf("%s", Pseudo);
        printf("Votre pseudo est : %s\n", Pseudo);
    }
    affichage_grille();
    int max_lettres_du_mot = 7;
    char mot_joue[max_lettres_du_mot];
    lire_mot_joue(mot_joue, max_lettres_du_mot);
    char sens[1];
    lire_sens(sens);
    char colonne[1];
    lire_colonne(colonne);
    int ligne;
    lire_ligne(ligne);
    placement_du_mot(mot_joue, sens, colonne, ligne);
//    do {
//        placement_du_mot("TEST", "V", "B", 2);
//    } while(1);

    return 0;
}
