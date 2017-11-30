#include "Player.h"

std::string Player::ToStringSpecific() const
{
	std::stringstream ss;
	ss << "Name: " << this->name << "\n";
	ss << "Position: " << this->position << "\n";
	ss << "Shirt number: " << this->shirtNum << "\n\n";

	return ss.str();
}

Player::Player(std::string name, std::string position, int shirtNum)
{
	this->name = name;
	this->position = position;
	this->shirtNum = shirtNum;
}

Player::~Player()
{
}

void Player::ChangeName(const std::string name)
{
	this->name = name;
}

void Player::ChangePosition(const std::string position)
{
	this->position = position;
}

void Player::ChangeShirtNum(int shirtNum)
{
	this->shirtNum = shirtNum;
}

Player::Player(const Player & other) : TeamMember(other)
{
	this->position = other.position;
	this->shirtNum = other.shirtNum;
}

Player & Player::operator=(const Player & other)
{
	this->position = other.position;
	this->shirtNum = other.shirtNum;
	return *this;
}

