#ifndef HELFERLEIN_STRING_SPLIT_H
#define HELFERLEIN_STRING_SPLIT_H

#include <string>
#include <vector>

#include "vector_has.hpp"

inline static std::vector<std::string> string_split(const std::string& str, const std::vector<char>& splitting_chars) {
	if (str.empty())
		return {};

	int i;
	bool flag;

	flag = false;
	std::string tmp;
	std::vector<std::string> ret;

	for (i = 0; i < str.length(); ++i) {
		if (!vector_has<char>(str.at(i), splitting_chars)) {
			flag = true;
			tmp += str.at(i);
		} else if (flag) {
			ret.push_back(tmp);
			tmp.clear();
			flag = false;
		}
	}

	if (!tmp.empty())
		ret.push_back(tmp);

	return ret;
}

#endif