#pragma once
#include "Ellipse.h"

namespace Geometric {
	struct Circle : public Geometric::Ellipse
	{
	public:
		Circle(float radius);
		float getRadius() { return a; }
		bool operator > (const Circle& circle) const
		{
			return (a > circle.a);
		}
	};
}