#ifndef CS225_TIMES_H_
#define CS225_TIMES_H_
#include "binary_op.h"
#include <iostream>

namespace cs225
{

	class times: public binary_op
	{

	public:

		using binary_op::binary_op;

		double combine(double left, double right) const;

	};

}
#endif