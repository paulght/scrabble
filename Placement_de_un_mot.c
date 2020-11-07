#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scrabble.h"


int index_de_la_colonne(char colonne[1])           /// passe d'un type "char" a un type "int"
{
    char *convertisseur = "ABCDEFGHIJKLMNO";
    char *element;
    int colonne_en_chiffre;

    element = strchr(convertisseur, colonne[0]);
    colonne_en_chiffre = (int)(element - convertisseur + 1);
    printf("\n");
    printf("colonne_en_chiffre: %d", colonne_en_chiffre);
    printf("\n");
}




int placement_du_mot(char mot[7], char sens[1], char colonne[1], int ligne)
// on a besoin du mot joué, du sens du placement, de la ligne/colonne de la 1ere lettre
{
    int colonne_convertie_en_chiffre=index_de_la_colonne(colonne);
    int longueur_mot=strlen(mot);
    printf("longueur : %d", longueur_mot);
    printf("\n");
    printf("sens : %s", sens);
    printf("\n");
    printf("mot : %s", mot);
    printf("\n");
    printf("colonne : %d", colonne_convertie_en_chiffre);
    printf("\n");
    printf("ligne : %d", ligne);
    printf("\n");
    for (int u=0;u<longueur_mot;u++)
    {
        if (sens[0]=='V')
        {
            colonne_convertie_en_chiffre += 2;
            printf("%d",colonne_convertie_en_chiffre);                    /// +2 car tableau en [15][32]
//            mot[u]=grid[ligne][j];
//            printf ("%c",mot[u]);
        }
//        else if (sens[1]=='H')
//        {
//            ligne=ligne+1;
//            mot[u]=grid[ligne][colonne_convertie_en_chiffre];
//            printf ("%c",mot[u]);
//        }
//        for (ligne=0;ligne<16;ligne++)
//            {
//                for (j=0;j<1;j++)
//                    {
//                        printf("%c",(grid[ligne][j]));
//                        for (j=1;j<32;j++)
//                            {
//                                printf("%c ",(grid[ligne][j]));
//                            }
//                    }
//                printf("\n\n");
//            }
    }
    return 0;
}
