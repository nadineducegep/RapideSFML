/*
 * Grille.h
 *
 *  Created on: 21 nov. 2017
 *      Author: Mademoiselle
 */

#ifndef GRILLE_H_
#define GRILLE_H_
#include "tuile.h"

class Grille {
protected:
	RenderWindow * fenetre;
	int colonnes;
	int rangees;
	int largeur = 800;
	int hauteur = 600;
public:
	Grille(int colonnes, int rangees, RenderWindow* fenetre);
	virtual ~Grille();

	void afficherTuileDansCase(int colonne, int rangee, Tuile * tuile);

};

#endif /* GRILLE_H_ */
