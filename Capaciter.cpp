#include "Capaciter.h"
#include "Pokemon.h"

void Capaciter::damage()
{
	puissance = 50;
	precision = 80;
	nom = "Charge"

	// calcule les degat de la capacité
	damage = random(35; 50);
	PV = PV - damage;

}
