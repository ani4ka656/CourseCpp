#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(string, double);
	double getRadius() const;
	virtual void draw() const;
	void area() const override;

private:
	double radius;
};

