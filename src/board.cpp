#include "board.hpp"
#include "pawn.hpp"
#include <vector>
#include <iostream>

Board::Board(const size_t size)
{
	this->board = std::vector<std::vector<Pawn>>(size, std::vector<Pawn>(size));
}

Board::~Board()
{
}

void	Board::resize(const size_t new_size)
{
	this->board.resize(new_size);
	for (auto it = this->board.begin() ; it != this->board.end() ; it++)
		(*it).resize(new_size);
}

void	Board::display() const
{
	for (auto it = this->board.begin() ; it != this->board.end() ; it++) {
		for (auto it2 = (*it).begin() ; it2 != (*it).end() ; it2++)
			std::cout << *it2 << " ";
		std::cout << std::endl;
	}
}