#pragma once

#include <vector>

typedef struct	position_s
{
	unsigned int x;
	unsigned int y;
}		position_t;

class IPlayer
{
public:
	IPlayer();
	~IPlayer();
	const position_t	*givePosition() const;
	unsigned int		giveId() const;

protected:
	unsigned int	id = 0;
	position_t	pos;
	void		updatePosition(unsigned int x, unsigned int y); //update struct position values
	virtual void	play() = 0;
};