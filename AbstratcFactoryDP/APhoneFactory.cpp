#pragma once
#include "APhoneFactory.h"
#include "factories.h"

//Implementation of Factory Method : CreateFactory()

APhoneFactory* APhoneFactory::CreateFactory(PHONE_FACTORIES factory)
{
	if(factory == PHONE_FACTORIES::SAMSUNG)
	{
		return new SamsungFactory();
	}
	else if(factory == PHONE_FACTORIES::HTC)
	{
		return new HTCFactory();
	}
	else if(factory == PHONE_FACTORIES::NOKIA)
	{
		return new NokiaFactory();
	}
}