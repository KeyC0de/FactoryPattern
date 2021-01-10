#pragma once

#include <string>

// common base class
class Ship 
{
private:
	std::string m_name;
	double m_dmg;
public:
	Ship() = default;
	Ship( const std::string& s, double dmg );
public:
	virtual ~Ship() = default;
	void render();
	void patrolStation();
	virtual void shoot() = 0;

	// GETTERS = SETTERS
	std::string getName();
	void setName( const std::string& name );
	double getDmg();
	void setDmg( double dmg );
};

class UfoShip
	: public Ship 
{
private:
	std::string idcode = "100";
public:
	UfoShip();
public:
	std::string getPrivate();
	std::string getOtherPrivate( int i, const std::string& s );
	void shoot() override;
};

class RocketShip
	: public Ship 
{
public:
	RocketShip();
public:
	void shoot() override;
};

class BigUfoShip
	: public UfoShip 
{
public:
	BigUfoShip();
};