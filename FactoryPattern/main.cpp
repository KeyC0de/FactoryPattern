#include <iostream>
#include "ship.h"


int main()
{
	std::cout << "What type of ship would you like? (U / R / B)\n";
	char shipType;
	std::cin >> shipType;
	auto ship = createShip( shipType );

	// if creation succeeded
	if ( ship != nullptr )
	{
		ship->render();
		ship->patrolStation();
		ship->shoot();
		std::cout << "Damage amount = " << ship->getDmg() << '\n';
		std::cout << "Ship name = " << ship->getName() << '\n';
	}
	else
	{
		std::cout << "Invalid input.\n";
	}

	std::system( "pause" );
	return 0;
}
