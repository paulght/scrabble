#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <time.h>
#include <stdbool.h>
#include "scrabble.h"

char pioche[nombreDeJetonsDansPioche] = "AAAAAAAAA"
                              "BB"
                              "CC"
                              "DDD"
                              "EEEEEEEEEEEEEEE"
                              "FF"
                              "GG"
                              "HH"
                              "IIIIIIII"
                              "JK"
                              "LLLLL"
                              "MMM"
                              "NNNNNN"
                              "OOOOOO"
                              "PP"
                              "Q"
                              "RRRRRR"
                              "SSSSSS"
                              "TTTTTT"
                              "UUUUUU"
                              "VV"
                              "WXYZ"
                              "??";
int joueurCourant;

void melanger_pioche() {
    srand(time(NULL));
    int i;
    for (i = 0; i < nombreDeJetonsDansPioche; i++) {
        int nouvellePosition = (rand() % (nombreDeJetonsDansPioche - i)) + i;
        char copie = pioche[i];
        pioche[i] = pioche[nouvellePosition];
        pioche[nouvellePosition] = copie;
    }
}

void piocher_une_lettre(int joueur, int placeSurChevalet){
    char lettre;
    lettre=pioche[strlen(pioche)-1];
    pioche[strlen(pioche)-1]='\0';
    chevaletsDesJoueurs[joueur][placeSurChevalet]=lettre;
}

void retirer_lettre_du_chevalet(char lettre) {
    bool lettreEnlevee=false;
    for (int i = 0; i < nombreDeJetonsDansChevalet; i++) {
        if ((chevaletsDesJoueurs[joueurCourant][i]==lettre)&&(lettreEnlevee==false)){
            chevaletsDesJoueurs[joueurCourant][i]='$';
            lettreEnlevee=true;
        }
    }
}

void remplir_chevalet() {
    char vide='$';
    for (int i = 0; i < nombreDeJetonsDansChevalet; i++) {
        if (chevaletsDesJoueurs[joueurCourant][i]==vide){
            piocher_une_lettre(joueurCourant, i);
        }
    }
}

void lancer_tour_du_joueur(int joueur) {
    joueurCourant=joueur;
    printf("\n\nJoueur courant : %d", joueurCourant+1);
}

void afficher_chevalet() {
    printf("\n");
    printf("Le chevalet du joueur %d est : ", joueurCourant+1);
    for (int i = 0; i < nombreDeJetonsDansChevalet; i++) {
        printf("%c", chevaletsDesJoueurs[joueurCourant][i]);
    }
    printf("\n");
}
