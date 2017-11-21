/*
 * Tuile.cpp
 *
 *  Created on: 21 nov. 2017
 *      Author: Mademoiselle
 */

#include "Tuile.h"
// https://commons.wikimedia.org/wiki/File:Flower_garden_found_in_Tak_Thailand_1.jpg
// http://maxpixel.freegreatpicture.com/Pebbles-Texture-Pebble-Background-Stones-Plump-1479624

Tuile::Tuile(bool estRoche) {
	std::string fichier;
	if(estRoche)
		fichier = "decoration/images/tuile-roche.jpg";
	else
		fichier = "decoration/images/tuile-fleur.jpg";

	this->texture = new Texture();
	if(!texture->loadFromFile(fichier))
		texture = NULL;
	illustration = new Sprite(*texture);

}

Tuile::~Tuile() {
}

void Tuile::afficher(RenderWindow& fenetre)
{
	fenetre.draw(*illustration);
}

