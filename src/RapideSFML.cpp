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
    Tuile * tuileFleur = new Tuile(true);

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
        		grille->afficherTuileDansCase(rangee,colonne,new Tuile((rangee+colonne)%2));

        fenetre.display();
    }
    return 0;
}


