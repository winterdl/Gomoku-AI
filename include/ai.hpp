#pragma	once

#include "player.hpp"
#include <vector>

class AI : public IPlayer
{
public:
	AI(const unsigned int board_size);
	~AI();
	void	play() final;

private:
	std::vector<std::vector<unsigned int>>	*current_board;
	std::vector<std::vector<unsigned int>>	trial_board;
	void	resetPosition(); //Reset the position to the referee's one
	void	resetBoard(); // Reset trial_board to current_board
	void	updateBoard(); // Update current_board with referee's data
	const unsigned int	board_size;
	const unsigned int	action_radius = 2;
	const unsigned int	turns_ahead = 1;
};