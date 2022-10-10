#pragma once
namespace VectorSpace
{
	template <typename T>
	class Vector
	{
		size_t n;
		T* data;

	public:
		T& operator [](size_t k)

		{
			return data[k];
		}
		
		Vector<T>(size_t n = 0):
			n{n}, data {new T[n]}
		{}
		Vector<T>(const Vector<T>& v) :
			Vector<T>{ v.size() }
		{
			for (size_t i = 0; i < n; i++)
			{
				data[i] = v.data[i];
			}
		}
		size_t size() const
		{
			return n;
		}

	};
}


