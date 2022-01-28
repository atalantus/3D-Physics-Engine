#pragma once
#include "quaternion.h"
#include "vector_3d.h"

/**
 * \brief A Transform defines an object in space with a position.
 *
 * It has a position, rotation and scale which can be manipulated with the given functions.
 */
class transform
{
	// Position in World Space
	vector_3d position_;
	// Rotation in World Space
	quaternion rotation_;
	// Scale in World Space
	vector_3d scale_;
};
