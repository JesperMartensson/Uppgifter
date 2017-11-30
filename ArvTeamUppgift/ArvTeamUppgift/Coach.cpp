#include "Coach.h"

Coach::Coach(std::string name, std::string job)
{
	this->name = name;
	this->job = job;
}

Coach::~Coach()
{
}

void Coach::ChangeName(const std::string name)
{
	this->name = name;
}

void Coach::ChangeJob(const std::string job)
{
	this->job = job;
}

std::string Coach::ToString() const
{
	std::stringstream ss;
	ss << "Name: " << this->name << "\n";
	ss << "Occupation: " << this->job << "\n";
	return ss.str();
}

