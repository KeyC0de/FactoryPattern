#include <iostream>
#include "ship.h"


int main()
{
	std::cout << "What type of ship would you like? (U / R / B)\n";
	char shipType;
	std::cin >> shipType;
	auto ship = createShip( shipType );

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

#if defined _DEBUG && !defined NDEBUG
	while ( !getchar() );
#endif
	return EXIT_SUCCESS;
}