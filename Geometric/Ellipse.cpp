#include "pch.h"
#include "Ellipse.h"

namespace Geometric {
    Ellipse::Ellipse(float a, float b) {
        this->a = a;
        this->b = b;
    }

    Point Ellipse::getPoint(float t) {
        float x = a * cos(t);
        float y = b * sin(t);
        return Point{ x,y,0 };
    }

    Vector Ellipse::getDerivative(float t)
    {
        float x = - a * sin(t);
        float y = b * cos(t);
        return Vector{ x,y,0 };
    }
}