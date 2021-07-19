#pragma once

#include <vector>
#include "pawn.hpp"

class Board
{
public:
	Board(size_t size);
	~Board();
	std::vector<std::vector<Pawn>>	board;
	void				resize(const size_t new_size);
	void				display() const;
};