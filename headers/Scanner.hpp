#pragma once

#include "utility\TokenType.h"
#include <string>

class Scanner {


public:
	Scanner(std::string const& in) : inputSource(in), current(0) {}
	const std::string inputSource;
	unsigned current = 0;
};