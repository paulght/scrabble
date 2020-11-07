#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "scrabble.h"

bool partieTerminee=false;

void initialiser_chevalets();

int main() {

    ///Saisie des joueurs

    int nombreDeJoueurs;
    char Pseudo[100];
    do {
        printf("Saisissez le nombre de joueurs dans la limite de 2 joueurs Minimum et de 4 joueur Maximun \n");
        scanf("%d", &nombreDeJoueurs);
    } while ((nombreDeJoueurs < nombreMinDeJoueurs) || (nombreDeJoueurs > nombreMaxDeJoueurs));
    for (int j = 1; j < (nombreDeJoueurs + 1); j++) {
        printf("Saisissez le Pseudo du joueur%d\n", j);
        scanf("%s", Pseudo);
        printf("Votre pseudo est : %s\n", Pseudo);
    }
    creer_grille();
    afficher_grille();
    melanger_pioche();
    initialiser_chevalets(nombreDeJoueurs);
    int tour = 0;
    do {
        printf("\nTour: %d", tour);
        lancer_tour_du_joueur(tour%nombreDeJoueurs);
        jouer_tour();
        tour++;
    } while (partieTerminee==false);
    printf("La partie est terminee.");

    return 0;
}

void initialiser_chevalets(int nombreDeJoueurs) {
    for (int joueur = 0; joueur < nombreDeJoueurs; joueur++) {
        for (int j = 0; j < nombreDeJetonsDansChevalet; j++) {
            piocher_une_lettre(joueur, j);
        }
    }
}
