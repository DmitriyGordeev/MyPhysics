#pragma once
#include <vector>
class IOfile
{
public:
	static bool readToBuffer(std::string filePath, std::vector<unsigned char>& buffer);
};

