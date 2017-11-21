/*
 * Tuile.cpp
 *
 *  Created on: 21 nov. 2017
 *      Author: Mademoiselle
 */

#include "Tuile.h"
// https://commons.wikimedia.org/wiki/File:Flower_garden_found_in_Tak_Thailand_1.jpg

Tuile::Tuile() {
	this->texture = new Texture();
	if(!texture->loadFromFile("decoration/images/tuile-fleur.jpg"))
		texture = NULL;
	illustration = new Sprite(*texture);

}

Tuile::~Tuile() {
}

void Tuile::afficher(RenderWindow& fenetre)
{
	fenetre.draw(*illustration);
}

