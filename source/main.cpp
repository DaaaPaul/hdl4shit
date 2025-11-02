#include <iostream>
#include <fstream>
#include <string>
#include "..\headers\Scanner.hpp"

[[nodiscard]] static std::string recieveSource() {
	std::string path;
	std::cin >> path;

	std::string contents;
	std::string line;
	std::ifstream fileInStream(path);

	if (fileInStream.good()) {
		while (std::getline(fileInStream, line)) {
			contents.append(line + '\n');
		}
		contents.pop_back();
		
		return contents;
	} else {
		std::cerr << "Failed to run file at " << path << '\n';
		return std::string();
	}
}

int main() {
	Scanner scanner(recieveSource());
	std::cout << scanner.inputSource;
}