#include "Capaciter.h"
#include "Pokemon.h"


int Capaciter::damage()
{	
	puissance = 50;
	precision = 80;
	

	// calcule les degat de la capacité
	degats = random(35; 50);

	if (1 < random(100) < 80) {
		cout << "toucher";
		PV = PV - degats;
	}
	else {
		cout << "miss";
		degats = 0;
	}
}
