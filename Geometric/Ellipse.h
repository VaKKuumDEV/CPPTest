#pragma once
#include "Figure.h"
#include <cmath>

namespace Geometric {
    struct Ellipse : public Figure {
    protected:
        float a, b;
    public:
        Ellipse(float a, float b);
        Point getPoint(float t) override;
        Vector getDerivative(float t) override;
    };
}