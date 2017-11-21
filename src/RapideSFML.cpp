#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <vector>
#include "Tuile.h"
#include "Grille.h"

using namespace sf;
using namespace std;

int main()
{
    RenderWindow fenetre(VideoMode(800, 600), "Rapide SFML !");


    Grille * grille = new Grille(8,6,&fenetre);
    //Tuile * tuileFleur = new Tuile(2);

    while (fenetre.isOpen())
    {
        Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == Event::Closed)
                fenetre.close();


            if(evenement.type == Event::KeyPressed)
            {
            	switch(evenement.key.code)
            	{
            	}
            }
        }
        fenetre.clear();
        //tuileFleur->afficher(fenetre);
        //grille->afficherTuileDansCase(2,2,tuileFleur);
        for(int rangee = 0; rangee < 8; rangee++)
        	for(int colonne = 0; colonne <6; colonne++)
        		grille->afficherTuileDansCase(rangee,colonne,new Tuile(Tuile::TYPE_TUILE::TUILE_EAU));
        grille->afficherTuileDansCase(4,3,new Tuile(Tuile::TYPE_TUILE::TUILE_TERRE));
        grille->afficherTuileDansCase(5,3,new Tuile(Tuile::TYPE_TUILE::TUILE_TERRE));
        grille->afficherTuileDansCase(5,4,new Tuile(Tuile::TYPE_TUILE::TUILE_TERRE));
        grille->afficherTuileDansCase(4,2,new Tuile(Tuile::TYPE_TUILE::TUILE_TERRE));

        fenetre.display();
    }
    return 0;
}


