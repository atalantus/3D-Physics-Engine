#pragma once

/**
 * \brief Defines a Vector in 3 dimensional space.
 */
class vector_3d
{
	// x, y, z components
	double x_, y_, z_;

public:
	// Initializes a zero vector.
	vector_3d() : x_(0), y_(0), z_(0)
	{
	}

	// Initializes a vector with given values.
	vector_3d(const double x, const double y, const double z)
		: x_(x), y_(y), z_(z)
	{
	}

	// Normalizes this vector.
	void normalize();

	// Calculates the magnitude of this vector.
	double magnitude() const;

	// Calculates the square magnitude of this vector.
	double sqr_magnitude() const;

	// Adds two vectors returning the result.
	vector_3d operator+(vector_3d b) const;

	// Subtracts two vectors returning the result.
	vector_3d operator-(vector_3d b) const;

	// Multiplies a vector with a scalar returning the result.
	vector_3d operator*(double s) const;

	// Divides a vector with a scalar returning the result.
	vector_3d operator/(double s) const;

	// Checks if two vectors are equal within a given epsilon.
	bool operator==(vector_3d b) const;

	// The x-component of the vector.
	double& x();

	// The y-component of the vector.
	double& y();

	// The z-component of the vector.
	double& z();

	// Computes the dot product of two vectors.
	static double dot(vector_3d a, vector_3d b);

	// Computes the cross product of two vectors.
	static vector_3d cross(vector_3d a, vector_3d b);
};
