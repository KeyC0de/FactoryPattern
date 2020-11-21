#pragma once

#include <iostream>
#include <string>

// common base class
class Ship 
{
private:
	std::string m_name;
	double m_dmg;
public:
	Ship() = default;
	Ship( const std::string& s,
		double dmg )
		:
		m_name( s ),
		m_dmg( dmg )
	{}

public:
	virtual ~Ship() = default;

	void render()
	{
		std::cout << getName() << " is rendered on the screen\n";
	}
	void patrolStation()
	{
		std::cout << getName() << " is patrolling the nearby civilian station\n";
	}
	virtual void shoot() = 0;

	// GETTERS = SETTERS
	std::string getName()
	{
		return m_name;
	}
	void setName( const std::string& name )
	{
		m_name = name;
	}
	double getDmg()
	{
		return m_dmg;
	}
	void setDmg( double dmg )
	{
		m_dmg = dmg;
	}
};

class UfoShip
	: public Ship 
{
private:
	std::string idcode = "100";
public:
	UfoShip()
		:
		Ship{ "UFO Enemy ship", 20.0 }
	{}

public:
	std::string getPrivate()
	{
		return "How did you get shis";
	}
	std::string getOtherPrivate( int i, const std::string& s )
	{
		return "How did you get here "
			+ i
			+ ' '
			+ s;
	}

	void shoot() override
	{
		std::cout << getName()
			<< " attacks and does "
			<< getDmg()
			<< " damage\n";
	}
};

class RocketShip
	: public Ship 
{
public:
	RocketShip()
		:
		Ship( "Rocket Enemy ship", 10.0 )
	{}

public:
	void shoot() override
	{
		std::cout << getName()
			<< " attacks and does "
			<< getDmg()
			<< " damage\n";
	}
};

class BigUfoShip
	: public UfoShip 
{
public:
	BigUfoShip()
	{
		setName( "Big UFO Enemy Ship" );
		setDmg( 40.0 );
	}
};