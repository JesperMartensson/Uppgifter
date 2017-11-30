#include "TeamHandler.h"


TeamHandler::TeamHandler(int cap)
{
	this->cap = cap;
	this->arr = new TeamMember*[cap];
}

TeamHandler::~TeamHandler()
{
	for (int i = 0; i < cap; i++)
	{
		delete arr[i];
	}
	delete[] * arr;
}

void TeamHandler::addTeamMember(std::string name)
{
	//TeamMember(name);
}




