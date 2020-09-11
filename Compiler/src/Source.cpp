#include <iostream>
#include <fstream>
#include <string>

#include "tools/FileReader.h"

int main(int argc, char* argv[]) {
	const char* fileName = argv[1]; // Get command line arguments. The name of file came second.
	std::string path = "ext/scripts/" + std::string(fileName);

	FileReader fr(path);

	int i = 0;

	while(i < 1000) {
		char c = fr.NextChar();

		if(c != fr.s_EOF)
			std::cout << c;

		i = i + 1;
	}
}