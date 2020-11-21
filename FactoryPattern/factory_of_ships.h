#pragma once

#include "ship.h"
#include <memory>

//===================================================
//	\function	createShip
//	\brief  This is the factory function which defines an interface for object creation
//	\date	2020/11/09 19:51
std::unique_ptr<Ship> createShip( char shipType )
{
	switch( shipType )
	{		
		case 'U':
		case 'u':
			return std::make_unique<UfoShip>();
			break;
		case 'R':
		case 'r':
			return std::make_unique<RocketShip>();
			break;
		case 'B':
		case 'b':
			return std::make_unique<BigUfoShip>();
			break;
		default:
			return {};
	}
}
