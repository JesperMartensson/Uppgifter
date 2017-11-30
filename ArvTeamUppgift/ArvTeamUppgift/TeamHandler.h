#pragma once
#pragma once
#include "TeamMember.h"
#include <string>


class TeamHandler
{
private:
	int cap;
	TeamMember** arr;

public:
	TeamHandler(int cap = 2);
	~TeamHandler();

	void addTeamMember(std::string name);
};