#include "pch.h"
#include "Helix.h"

Geometric::Helix::Helix(float radius, float step) :Circle(radius)
{
    this->step = step;
}

Geometric::Point Geometric::Helix::getPoint(float t)
{
    float stepper = this->step / (2 * PI);

    Point basePoint = Circle::getPoint(t);
    basePoint.z += t * stepper;
    return basePoint;
}

Geometric::Vector Geometric::Helix::getDerivative(float t)
{
    return Circle::getDerivative(t);
}
