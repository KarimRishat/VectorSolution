#include "StreamOutput.h"
template <typename T>
inline std::ostream& operator<<(std::ostream& o, const VectorSpace::Vector<T> v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		o << v[i] << " ";
	}
	return o;
}
