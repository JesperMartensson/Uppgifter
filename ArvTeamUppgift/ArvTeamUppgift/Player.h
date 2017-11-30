#pragma once
#include <string>
#include <sstream>
#include "TeamMember.h"

class Player : public TeamMember
{
private:
	std::string name;
	std::string position;
	int shirtNum;
	std::string ToStringSpecific() const;
public:
	Player(std::string name = "", std::string position = "", int shirtNum = 0);
	~Player();

	void ChangeName(const std::string name);
	void ChangePosition(const std::string position);
	void ChangeShirtNum(int shirtNum);

	std::string ToString() const;

	Player(const Player& other);
	Player & operator = (const Player& other);
};