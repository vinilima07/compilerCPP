#pragma once

#include "../tools/FileReader.h"

#include "Token.h"

class LexicalParser {
private:
	FileReader m_FL;

	unsigned int m_State;

public:
	LexicalParser(const std::string& filePath);

	Token Process();
};