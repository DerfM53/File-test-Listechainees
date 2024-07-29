#include "liste_chainee.h"
#include <stdio.h>

int main()
{
	Liste *maListe = initialisation();

	insertion(maListe, 4);
	insertion(maListe, 8);
	insertion(maListe, 15);
	insertMiddle(maListe, 22, maListe->premier->suivant);
	suppMiddle(maListe, maListe->premier);

	afficherListe(maListe);

	return 0;
}

