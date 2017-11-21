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

Tuile::Tuile(Tuile::TYPE_TUILE materiel)
{
	std::string fichier;

	switch(materiel)
	{
		case TYPE_TUILE::TUILE_EAU:
			fichier = "decoration/images/tuile-eau.jpg";
		break;
		case TYPE_TUILE::TUILE_TERRE:
			fichier = "decoration/images/tuile-terre.jpg";
		break;
		case TYPE_TUILE::TUILE_ROCHE:
			fichier = "decoration/images/tuile-roche.jpg";
		break;
		case TYPE_TUILE::TUILE_FLEUR:
			fichier = "decoration/images/tuile-fleur.jpg";
		break;
	}

	//if(fichier)
	{
		this->texture = new Texture();
		if(!texture->loadFromFile(fichier))
			texture = NULL;
		illustration = new Sprite(*texture);
	}
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


