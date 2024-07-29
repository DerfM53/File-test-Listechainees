#include "liste_chainee.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Liste *maListe = initialisation();
    insertion(maListe, 4);
    insertion(maListe, 8);
    insertion(maListe, 15);
    
    printf("Taille de la liste : %d\n", taille(maListe)); // Affiche la taille actuelle de la liste

    suppression(maListe);
    
    printf("Taille de la liste après suppression : %d\n", taille(maListe)); // Affiche la taille après suppression

    destruction(maListe);
    free(maListe); // Libération de la structure de la liste

    return 0;
}

