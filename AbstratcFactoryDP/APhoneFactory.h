#pragma once
#include "ISmart.h"
#include "idumb.h"

// Creating Abstarct Factory : APhoneFactory
// Also provding the Factory Method : CreateFactory()

class APhoneFactory
{	
public:
	enum PHONE_FACTORIES
	{
		SAMSUNG,
		HTC,
		NOKIA
	};

	virtual ISmart* GetSmart() = 0;
    virtual IDumb* GetDumb() = 0;

	static APhoneFactory* CreateFactory(PHONE_FACTORIES factory);	
};
