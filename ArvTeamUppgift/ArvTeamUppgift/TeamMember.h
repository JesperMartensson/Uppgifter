#pragma once
#pragma once
#include <string>
#include "Player.h"
#include "Coach.h"

class TeamMember // Basklass.
{
private:
	std::string name;
	virtual std::string ToStringSpecific() const = 0;

public:
	TeamMember(std::string name = "");
	virtual ~TeamMember();

};