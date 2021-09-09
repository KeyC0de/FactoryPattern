#pragma once

#include <string>
#include <memory>


class Ship;

//===================================================
//	\function	createShip
//	\brief  factory function
//	\date	2020/11/09 19:51
std::unique_ptr<Ship> createShip( char shipType );

// common base class
class Ship 
{
	std::string m_name;
	double m_dmg;
public:
	Ship() = default;
	Ship( const std::string& s, double dmg );

	virtual ~Ship() = default;
	void render();
	void patrolStation();
	virtual void shoot() = 0;

	// GETTERS = SETTERS
	std::string getName() const noexcept;
	void setName( const std::string& name );
	double getDmg() const noexcept;
	void setDmg( double dmg );
};

class UfoShip
	: public Ship 
{
	std::string idcode = "100";
public:
	UfoShip();
	
	std::string getPrivate();
	std::string getOtherPrivate( int i, const std::string& s );
	void shoot() override;
};

class RocketShip
	: public Ship 
{
public:
	RocketShip();

	void shoot() override;
};

class BigUfoShip
	: public UfoShip 
{
public:
	BigUfoShip();
};
