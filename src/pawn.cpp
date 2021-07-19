#include "pawn.hpp"
#include <iostream>

Pawn::Pawn()
{
}

Pawn::~Pawn()
{
}

std::ostream	&operator<<(std::ostream &os, const Pawn &p)
{
	os << p.id;
	return os;
}