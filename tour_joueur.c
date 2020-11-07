#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scrabble.h"

void lire_mot_joue(char*mot_joue, int max_lettres_du_mot)
{
    do {
        printf("Saisissez votre mot de %d lettres maximum : ", max_lettres_du_mot);
        printf("\n");
        scanf("%s",mot_joue);
        printf("mot joue : %s", mot_joue);
        printf("\n");
    } while(strlen(mot_joue)>7);
}

void lire_sens(char*sens)
{
    do {
        printf("Saisissez le sens de placement du mot : (V ou H)");
        printf("\n");
        scanf("%s",sens);
        printf("sens : %s", sens);
        printf("\n");
    } while((*sens!= 'H')&&(*sens!= 'V'));
}

void lire_colonne(char*colonne)
{
    do {
        printf("Saisissez la colonne de placement de la 1ere lettre du mot : (A - O)");
        printf("\n");
        scanf("%s",colonne);
        printf("colonne : %s", colonne);
        printf("\n");
    } while ((*colonne != 'A')&&(*colonne != 'B')&&(*colonne != 'C')&&(*colonne != 'D')&&(*colonne != 'E')&&(*colonne != 'F')&&(*colonne != 'G')&&(*colonne != 'H')&&(*colonne != 'I')&&(*colonne != 'J')&&(*colonne != 'K')&&(*colonne != 'L')&&(*colonne != 'M')&&(*colonne != 'N')&&(*colonne != 'O'));
}

void lire_ligne(int*ligne)
{
    do {
        printf("Saisissez la ligne de placement de la 1ere lettre du mot : (1 - 15)");
        printf("\n");
        scanf("%d",&ligne);
        printf("ligne : %d", ligne);
        printf("\n");
    } while ((ligne < 1) || (ligne > 15));
}
