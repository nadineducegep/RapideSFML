#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <vector>
#include "Tuile.h"
using namespace sf;
using namespace std;
int main()
{
    RenderWindow fenetre(VideoMode(800, 600), "Rapide SFML !");

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
        //if(scene) fenetre.draw(*scene);
        tuileFleur->afficher(fenetre);

        fenetre.display();
    }
    return 0;
}


