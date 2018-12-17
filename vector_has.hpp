#ifndef HELFERLEIN_VECTOR_HAS_H
#define HELFERLEIN_VECTOR_HAS_H

#include <vector>

template<typename T>
inline static bool vector_has(T c, const std::vector<T>& set) {
	for (auto& i : set)
		if (i == c)
			return true;
	return false;
}

#endif