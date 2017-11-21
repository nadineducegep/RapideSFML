/*
 * Grille.cpp
 *
 *  Created on: 21 nov. 2017
 *      Author: Mademoiselle
 */

#include "Grille.h"

Grille::Grille(int colonnes, int rangees, RenderWindow* fenetre)
{
	this->colonnes = colonnes;
	this->rangees = rangees;
	this->fenetre = fenetre;
}

Grille::~Grille() {
}

void Grille::afficherTuileDansCase(int colonne, int rangee, Tuile * tuile)
{
	tuile->setX(colonne*Tuile::LARGEUR);
	tuile->setY(rangee*Tuile::HAUTEUR);
	tuile->afficher(*(this->fenetre));
}
