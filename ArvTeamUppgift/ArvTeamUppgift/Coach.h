#pragma once
#pragma once
#include <string>
#include <sstream>
#include "TeamMember.h"

class Coach : public TeamMember
{
private:
	std::string name;
	std::string job;

public:
	Coach(std::string name = "", std::string job = "");
	~Coach();

	void ChangeName(const std::string name);
	void ChangeJob(const std::string job);

	std::string ToString() const;
};