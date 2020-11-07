#ifndef SCRABBLE_H_INCLUDED
#define SCRABBLE_H_INCLUDED



int affichage_grille();

void parametre_de_placement_du_mot();

int convertisseur_de_colonne();

int placement_du_mot();

typedef struct lettre
{
    char letter;
    int val;
    int oc;
}t_lettre;

void creation_pioche(t_lettre total[27]);
int aleatoire(t_lettre total[27]);

#endif // SCRABBLE_H_INCLUDED
