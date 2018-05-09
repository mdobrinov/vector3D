#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D;

Vector3D operator*(double, const Vector3D&);
std::istream& operator>>(std::istream&, Vector3D&);
std::ostream& operator<<(std::ostream&, const Vector3D&);

class Vector3D {
private:
	double x;
	double y;
	double z;
public:
	Vector3D();
	Vector3D(double, double, double);
	~Vector3D();
	double getX() const;
	double getY() const;
	double getZ() const;
	Vector3D operator+(const Vector3D&) const;
	Vector3D operator-(const Vector3D&) const;
	Vector3D operator-() const;
	Vector3D operator*(double) const;
	friend Vector3D operator*(double, const Vector3D&);
	friend std::istream& operator>>(std::istream&, Vector3D&);
	friend std::ostream& operator<<(std::ostream&, const Vector3D&);
};

#endif