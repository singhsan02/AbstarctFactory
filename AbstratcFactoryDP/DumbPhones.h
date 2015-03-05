#pragma once
#include "idumb.h"


// CREATING CONCRETE PRODCUTS : Asha, Primo, Genie

class Asha : public IDumb
{
public:
	std::string Name()
    {
        return "Asha";
    }
};

class Primo : public IDumb
{
public:
	std::string Name()
    {
        return "Guru";
    }
};

class Genie : public IDumb
{
public:
	std::string Name()
    {
        return "Genie";
    }
};