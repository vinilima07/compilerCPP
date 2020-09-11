#include "FileReader.h"

FileReader::FileReader(const std::string& filePath)
	: m_File(filePath, std::ifstream::in)
{
}

FileReader::~FileReader()
{
	m_File.close();
}

char FileReader::NextChar()
{
	return (char)m_File.get();
}
