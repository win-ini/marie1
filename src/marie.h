#ifndef MARIE_H
#define MARIE_H

#include <string>
#include "actor.h"

class Player : public Actor {

public:
	Player(float px, float py) : Actor(true, true, false, x, y, "assets\\sprites\\marie.png", 16u, 16u) {
		x = px;
		y = py;
	}

	Player() = default;
};

#endif