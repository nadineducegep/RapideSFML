/*
 * Tuile.cpp
 *
 *  Created on: 21 nov. 2017
 *      Author: Mademoiselle
 */

#include "Tuile.h"
// https://commons.wikimedia.org/wiki/File:Flower_garden_found_in_Tak_Thailand_1.jpg
// http://maxpixel.freegreatpicture.com/Pebbles-Texture-Pebble-Background-Stones-Plump-1479624
// https://www.jpl.nasa.gov/spaceimages/details.php?id=PIA20324
// http://www.publicdomainpictures.net/view-image.php?image=126102&picture=pool-water

Tuile::Tuile(int materiel) {
	std::string fichier;
	if(0 == materiel) fichier = "decoration/images/tuile-fleur.jpg";
	if(1 == materiel) fichier = "decoration/images/tuile-roche.jpg";
	if(2 == materiel) fichier = "decoration/images/tuile-terre.jpg";
	if(3 == materiel) fichier = "decoration/images/tuile-eau.jpg";

	this->texture = new Texture();
	if(!texture->loadFromFile(fichier))
		texture = NULL;
	illustration = new Sprite(*texture);
}

Tuile::~Tuile() {
}

void Tuile::afficher(RenderWindow& fenetre)
{
	this->illustration->setPosition(this->x, this->y);
	fenetre.draw(*illustration);
}

//static int
int Tuile::LARGEUR = 100;
//static int
int Tuile::HAUTEUR = 100;


