#include "player.hpp"
#include <iostream>

IPlayer::IPlayer()
{
	std::cout << "I shouldn't be called" << std::endl;
}

IPlayer::~IPlayer()
{
}

unsigned int	IPlayer::giveId() const
{
	return this->id;
}

const position_t	*IPlayer::givePosition() const
{
	return &this->pos;
}

void	IPlayer::updatePosition(unsigned int x, unsigned int y)
{
	this->pos.x = x;
	this->pos.y = y;
}