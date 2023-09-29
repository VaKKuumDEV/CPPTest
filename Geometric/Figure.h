#pragma once

namespace Geometric {
	struct Figure {
	public:
		virtual Point getPoint(float t) { return Point{ 0,0,0 }; };
		virtual Vector getDerivative(float t) { return Vector{ 0,0,0 }; };
	};
}