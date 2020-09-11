#pragma once

#include <fstream>
#include <string>

class FileReader {
private: 
	std::ifstream m_File;

public:
	FileReader(const std::string& filePath);
	~FileReader();

	char NextChar();

	static const char s_EOF = (char)(-1);
};