#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED


#endif // MENU_H_INCLUDED

int menu();

int menu()
{
    int choix;
    printf("1 - Lancer une nouvelle partie\n");
    printf("2 - Reprendre une partie sauvegardee\n");
    printf("3 - Afficher l'aide\n");
    printf("4 - Afficher les scores des joueurs\n");
    printf("5 - Quitter le jeu\n");
    scanf("%d",&choix);
    return choix;
}

