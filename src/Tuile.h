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
public:
	Tuile();
	virtual ~Tuile();
	void afficher(RenderWindow& fenetre);
};

#endif /* TUILE_H_ */
