#ifndef _LISTE_CHAINEE_H_
#define _LISTE_CHAINEE_H_

typedef struct Element Element;
struct Element
{
	int nombre;
	Element *suivant;
};

typedef struct Liste Liste;
struct Liste
{
	Element *premier;
};

void insertion(Liste *liste, int nvNombre);
void suppression(Liste *liste);
void afficherListe(Liste *liste);
Liste *initialisation();
void insertMiddle(Liste *liste, int nvNombre, Element *precedent);
void suppMiddle(Liste *liste, Element *precedent);

#endif
