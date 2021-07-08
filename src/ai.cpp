#include "ai.hpp"
#include <iostream>

AI::AI(const unsigned int _board_size) : board_size(_board_size)
{
//	this->id = ++Referee::player_count;
	this->pos.x = 0;
	this->pos.y = 0;
	if (_board_size >= 5)
		std::cout << "OK - everything is good" << std::endl;
	else
		std::cout << "Unsupported size" << std::endl;
}

AI::~AI()
{
}

void	AI::resetBoard()
{
	this->trial_board.clear();
	//this->trial_board(*current_board);
}

void	AI::updateBoard()
{
	//this->current_board = Referee::provideBoard();
}

void	AI::resetPosition()
{
	//position_t	*lastPlay = Referee::getPositionLastPlay();
	//this->pos.x = lastPlay->x;
	//this->pos.y = lastPlay->y;
}

void	AI::play()
{
	this->updateBoard();
	unsigned int x = 0;
	unsigned int y = 0;
	// Algorithme de l'IA
	this->updatePosition(x, y);
	std::cout << x << ", " << y << std::endl;
}