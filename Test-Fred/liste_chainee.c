#include "liste_chainee.h"
#include <stdlib.h>
#include <stdio.h>

Liste *initialisation()
{
	Liste *liste = malloc(sizeof(*liste));
	Element *element = malloc(sizeof(*element));

	if (liste == NULL || element == NULL)
	{
		exit(EXIT_FAILURE);
	}

	element->nombre = 0;
	element->suivant = NULL;
	liste->premier = element;

	return liste;
}
void insertion(Liste *liste, int nvNombre)
{
    /* Création du nouvel élément */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}
void insertMiddle(Liste *liste, int nvNombre, Element *precedent)
{
	if (liste == NULL || precedent == NULL)
	{
		exit(EXIT_FAILURE);
	}
	/*Cree le nouvel element*/
	Element *nouveau = malloc(sizeof(*nouveau));
	if (nouveau == NULL)
	{
		exit(EXIT_FAILURE);
	}
	/*Initialise le nouvel element*/
	nouveau->nombre = nvNombre;
	nouveau->suivant = precedent->suivant;/*Le suivant du nouveau est l element suivant du precedent*/
	precedent->suivant = nouveau;/*l element suivant du precedent devient le nouveau*/
}
void suppMiddle(Liste *liste, Element *precedent)
{
	if (liste == NULL || precedent == NULL || precedent->suivant == NULL)
	{
		exit(EXIT_FAILURE);
	}

	/*l element a supprimer est celui qui suit "precedent"*/
		Element *aSupprimer = precedent->suivant;

	/*On relie le precedent a l element qui suit l element a supprimer*/	
		precedent->suivant = aSupprimer->suivant;
	/*Libere la memoire de l element a supprimer */
		free(aSupprimer);
}
void suppression(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (liste->premier != NULL)
    {
        Element *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
    }
}
void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->premier;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}
