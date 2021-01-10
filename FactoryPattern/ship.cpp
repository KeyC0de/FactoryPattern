#include <iostream>
#include "ship.h"


Ship::Ship( const std::string& s,
	double dmg )
	:
	m_name( s ),
	m_dmg( dmg )
{}

void Ship::render()
{
	std::cout << getName() << " is rendered on the screen\n";
}
void Ship::patrolStation()
{
	std::cout << getName() << " is patrolling the nearby civilian station\n";
}

std::string Ship::getName()
{
	return m_name;
}

void Ship::setName( const std::string& name )
{
	m_name = name;
}

double Ship::getDmg()
{
	return m_dmg;
}

void Ship::setDmg( double dmg )
{
	m_dmg = dmg;
}

UfoShip::UfoShip()
	:
	Ship{ "UFO Enemy ship", 20.0 }
{}

std::string UfoShip::getPrivate()
{
	return "How did you get shis";
}

std::string UfoShip::getOtherPrivate( int i,
	const std::string& s )
{
	return "How did you get here "
		+ i
		+ ' '
		+ s;
}

void UfoShip::shoot()
{
	std::cout << getName()
		<< " attacks and does "
		<< getDmg()
		<< " damage\n";
}

RocketShip::RocketShip()
	:
	Ship( "Rocket Enemy ship", 10.0 )
{}

void RocketShip::shoot()
{
	std::cout << getName()
		<< " attacks and does "
		<< getDmg()
		<< " damage\n";
}

BigUfoShip::BigUfoShip()
{
	setName( "Big UFO Enemy Ship" );
	setDmg( 40.0 );
}
