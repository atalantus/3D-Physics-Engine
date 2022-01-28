#include "cmath"
#include "constants.h"
#include "vector_3d.h"

void vector_3d::normalize()
{
	const double m = magnitude();
	x_ /= m;
	y_ /= m;
	z_ /= m;
}

double vector_3d::magnitude() const
{
	return sqrt(sqr_magnitude());
}

double vector_3d::sqr_magnitude() const
{
	return x_ * x_ + y_ * y_ + z_ * z_;
}

vector_3d vector_3d::operator+(const vector_3d b) const
{
	return {x_ + b.x_, y_ + b.y_, z_ + b.z_};
}

vector_3d vector_3d::operator-(const vector_3d b) const
{
	return {x_ - b.x_, y_ - b.y_, z_ - b.z_};
}

vector_3d vector_3d::operator*(const double s) const
{
	return {x_ * s, y_ * s, z_ * s};
}

vector_3d vector_3d::operator/(const double s) const
{
	return {x_ / s, y_ / s, z_ / s};
}

bool vector_3d::operator==(const vector_3d b) const
{
	return x_ - dbl_cmp_eps >= b.x_ && x_ + dbl_cmp_eps <= b.x_ &&
		y_ - dbl_cmp_eps >= b.y_ && y_ + dbl_cmp_eps <= b.y_ &&
		z_ - dbl_cmp_eps >= b.z_ && z_ + dbl_cmp_eps <= b.z_;
}

double& vector_3d::x()
{
	return x_;
}

double& vector_3d::y()
{
	return y_;
}

double& vector_3d::z()
{
	return z_;
}

double vector_3d::dot(const vector_3d a, const vector_3d b)
{
	return a.x_ * b.x_ + a.y_ * b.y_ + a.z_ * b.z_;
}

vector_3d vector_3d::cross(const vector_3d a, const vector_3d b)
{
	return {a.y_ * b.z_ - a.z_ * b.y_, a.z_ * b.x_ - a.x_ * b.z_, a.x_ * b.y_ - a.y_ * b.x_};
}
