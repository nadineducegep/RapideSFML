/*
 * Tuile.h
 *
 *  Created on: 21 nov. 2017
 *      Author: Mademoiselle
 */

#ifndef TUILE_H_
#define TUILE_H_
#include <SFML/Graphics.hpp>
using namespace sf;

class Tuile {
protected:
	Texture * texture = NULL;
	Sprite * illustration = NULL;
	int x;
	int y;
public:
	enum TYPE_TUILE{TUILE_FLEUR, TUILE_TERRE, TUILE_ROCHE, TUILE_EAU};

	Tuile(Tuile::TYPE_TUILE materiel);
	virtual ~Tuile();
	void afficher(RenderWindow& fenetre);

	int getX() const {
		return x;
	}

	void setX(int x) {
		this->x = x;
	}

	int getY() const {
		return y;
	}

	void setY(int y) {
		this->y = y;
	}

	static int LARGEUR;
	static int HAUTEUR;
};

#endif /* TUILE_H_ */
