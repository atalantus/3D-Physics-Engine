#pragma once
#include "transform.h"

/**
 * \brief An Actor defines a physical object in space.
 *
 * It has properties like a velocity and mass which affect it's translation.
 */
class actor : public transform
{
	// Current velocity
	vector_3d velocity_;
	// Current mass
	double mass_;

public:
	actor(): mass_(0)
	{
	}

	actor(const double mass): mass_(mass)
	{
	}
};
