#include <iostream>
#include "vector3D.h"


Vector3D::Vector3D() : x(0), y(0), z(0) {
}
Vector3D::Vector3D(double x_coord, double y_coord, double z_coord) : x(x_coord), y(y_coord), z(z_coord) {
}
Vector3D::~Vector3D() {
	/**
	* данните се изтриват от стековата рамка автоматично, нямаме динамично заделена памет
	*/
}
double Vector3D::getX() const {
	return x;
}
double Vector3D::getY() const {
	return y;
}
double Vector3D::getZ() const {
	return z;
}
Vector3D Vector3D::operator+(const Vector3D& secondVector) const {
	Vector3D resultVector;
	resultVector.x = x + secondVector.x;
	resultVector.y = y + secondVector.y;
	resultVector.z = z + secondVector.z;
	return resultVector;
}
Vector3D Vector3D::operator-(const Vector3D& secondVector) const {
	Vector3D resultVector;
	resultVector.x = x - secondVector.x;
	resultVector.y = y - secondVector.y;
	resultVector.z = z - secondVector.z;
	return resultVector;
}
Vector3D Vector3D::operator-() const {
	Vector3D resultVector;
	if (x == 0) resultVector.x = 0;
	else resultVector.x = -x;
	if (y == 0) resultVector.y = 0;
	else resultVector.y = -y;
	if (z == 0) resultVector.z = 0;
	else resultVector.z = -z;
	return resultVector;
}
Vector3D Vector3D::operator*(double number) const {
	Vector3D resultVector;
	if (number == 0) {
		resultVector.x = 0;
		resultVector.y = 0;
		resultVector.z = 0;
	}
	else {
		resultVector.x = x*number;
		resultVector.y = y*number;
		resultVector.z = z*number;
	}
	return resultVector;
}
Vector3D operator*(double number, const Vector3D& vector) {
	Vector3D resultVector;
	if (number == 0) {
		resultVector.x = 0;
		resultVector.y = 0;
		resultVector.z = 0;
	}
	else {
		resultVector.x = number*vector.x;
		resultVector.y = number*vector.y;
		resultVector.z = number*vector.z;
	}
	return resultVector;
}
std::istream& operator>>(std::istream& iStream, Vector3D& vector) {
	char symbol;
	iStream >> symbol;
	iStream >> vector.x;
	iStream >> symbol;
	iStream >> vector.y;
	iStream >> symbol;
	iStream >> vector.z;
	iStream >> symbol;
	return iStream;
}
std::ostream& operator<<(std::ostream& oStream, const Vector3D& vector) {
	oStream << "(" << vector.x << "," << vector.y << "," << vector.z << ")";
	return oStream;
}