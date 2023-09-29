#include "pch.h"

GEOMAPI float GetPi()
{
    return PI;
}

GEOMAPI Geometric::Figure* GetFigure()
{
    return new Geometric::Figure();
}

GEOMAPI Geometric::Ellipse* GetEllipse(float a, float b)
{
    return new Geometric::Ellipse(a, b);
}

GEOMAPI Geometric::Circle* GetCircle(float radius)
{
    return new Geometric::Circle(radius);
}

GEOMAPI Geometric::Helix* GetHelix(float radius, float step)
{
    return new Geometric::Helix(radius, step);
}
