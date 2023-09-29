#pragma once
#include "Circle.h"

namespace Geometric {
	struct Helix: public Circle
	{
	protected:
		float step;
	public:
		Helix(float radius, float step);
		Point getPoint(float t) override;
		Vector getDerivative(float t) override;
	};
}