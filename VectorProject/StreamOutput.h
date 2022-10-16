#pragma once
#include <iostream>
#include "Vector.h"
template <typename T>
std::ostream& operator << (std::ostream& o, const VectorSpace::Vector<T> v);

