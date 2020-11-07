#ifndef PIOCHE_H_INCLUDED
#define PIOCHE_H_INCLUDED



#endif // PIOCHE_H_INCLUDED


typedef struct lettre
{
    char letter;
    int val;
    int oc;
}t_lettre;

void creation_pioche(t_lettre total[27]);
int aleatoire(t_lettre total[27]);

void creation_pioche(t_lettre total[27])
{
    total[0].letter = 'A';
    total[0].val = 1;
    total[0].oc = 9;
    total[1].letter = 'B';
    total[1].val = 3;
    total[1].oc = 2;
    total[2].letter = 'C';
    total[2].val = 3;
    total[2].oc = 2;
    total[3].letter = 'D';
    total[3].val = 2;
    total[3].oc = 3;
    total[4].letter = 'E';
    total[4].val = 1;
    total[4].oc = 15;
    total[5].letter = 'F';
    total[5].val = 4;
    total[5].oc = 2;
    total[6].letter = 'G';
    total[6].val = 2;
    total[6].oc = 2;
    total[7].letter = 'H';
    total[7].val = 4;
    total[7].oc = 2;
    total[8].letter = 'I';
    total[8].val = 1;
    total[8].oc = 8;
    total[9].letter = 'J';
    total[9].val = 8;
    total[9].oc = 1;
    total[10].letter = 'K';
    total[10].val = 10;
    total[10].oc = 1;
    total[11].letter = 'L';
    total[11].val = 1;
    total[11].oc = 5;
    total[12].letter = 'M';
    total[12].val = 2;
    total[12].oc = 3;
    total[13].letter = 'N';
    total[13].val = 1;
    total[13].oc = 6;
    total[14].letter = 'O';
    total[14].val = 1;
    total[14].oc = 6;
    total[15].letter = 'P';
    total[15].val = 3;
    total[15].oc = 2;
    total[16].letter = 'Q';
    total[16].val = 8;
    total[16].oc = 1;
    total[17].letter = 'R';
    total[17].val = 1;
    total[17].oc = 6;
    total[18].letter = 'S';
    total[18].val = 1;
    total[18].oc = 6;
    total[19].letter = 'T';
    total[19].val = 1;
    total[19].oc = 6;
    total[20].letter = 'U';
    total[20].val = 1;
    total[20].oc = 6;
    total[21].letter = 'V';
    total[21].val = 4;
    total[21].oc = 2;
    total[22].letter = 'W';
    total[22].val = 10;
    total[22].oc = 1;
    total[23].letter = 'X';
    total[23].val = 10;
    total[23].oc = 1;
    total[24].letter = 'Y';
    total[24].val = 10;
    total[24].oc = 1;
    total[25].letter = 'Z';
    total[25].val = 10;
    total[25].oc = 1;
    total[26].letter = '?';
    total[26].val = 0;
    total[26].oc = 2;
}

int aleatoire()
{
    t_lettre total[27]
    int aleatoire = 0,valeur_associee,occurrence_associee = 1;
    char lettre_piochee;
    srand(time(NULL));
    do
    {
        aleatoire = rand()%27;
        lettre_piochee = total[aleatoire].letter;
        valeur_associee = total[aleatoire].val;
        occurrence_associee = total[aleatoire].oc;
    }while (total[aleatoire].oc == 0)
    total[aleatoire].oc = total[aleatoire].oc - 1;
    printf ("La lettre piochée est %c\n", lettre_piochee);
    printf("Sa valeur est %d\n", valeur_associee);
    printf("Il en reste %d dans la pioche\n", total[aleatoire].oc);
    return lettre_piochee;
}

int initialisation_chevalet()
{
    int chevalet[7];
    for (int i=0;i<7;i++)
    {
        chevalet[i] = aleatoire()
        printf("%s\t", chevalet[i])
    }
