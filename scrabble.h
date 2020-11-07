#ifndef SCRABBLE_H_INCLUDED
#define SCRABBLE_H_INCLUDED

#define nombreDeJetonsDansPioche 102
#define nombreDeJetonsDansChevalet 7
#define nombreMaxDeJetonsDansMot 7

#define nombreMinDeJoueurs 2
#define nombreMaxDeJoueurs 4

typedef char grille[16][32];
typedef char chevalets[nombreMaxDeJoueurs][nombreDeJetonsDansChevalet];
typedef char mot[nombreMaxDeJetonsDansMot];

char pioche[nombreDeJetonsDansPioche];
chevalets chevaletsDesJoueurs;

// grille
void creer_grille();

void afficher_grille();

void place_une_lettre(char lettre, int ligne, int colonne);

// pioche
void melanger_pioche();

void piocher_une_lettre(int joueur, int placeSurChevalet);

void retirer_lettre_du_chevalet(char lettre);

void remplir_chevalet();

void lancer_tour_du_joueur(int joueur);

void afficher_chevalet();

// tour_joueur

void jouer_tour();

void recuperer_choix_du_joueur();

void placer_le_mot();

int index_de_la_colonne(char lettreColonne[1]);

#endif // SCRABBLE_H_INCLUDED
