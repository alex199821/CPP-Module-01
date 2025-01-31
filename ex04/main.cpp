#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::string polishNewLine(const std::string &fullLine)
{
	size_t	newlinePos;

	std::string parsedStr;
	newlinePos = fullLine.find('\n');
	parsedStr = fullLine.substr(0, newlinePos);
	return (parsedStr);
}

std::string saveNewlineLeftovers(const std::string &fullLine)
{
	size_t	newlinePos;

	std::string newlineLeftovers;
	newlinePos = fullLine.find('\n');
	newlineLeftovers = fullLine.substr(newlinePos + 1);
	return (newlineLeftovers);
}

std::string replaceStrings(const std::string &parsedLine,
	const std::string &toFind, const std::string &replacement)
{
	size_t	searchStartIndex;
	size_t	toFindLength;
	size_t	foundPos;

	std::string tmpString;
	if (toFind.empty())
		return (parsedLine);
	searchStartIndex = 0;
	toFindLength = toFind.length();
	std::string replacedString;
	while (true)
	{
		foundPos = parsedLine.find(toFind, searchStartIndex);
		if (foundPos == std::string::npos)
		{
			tmpString = parsedLine.substr(searchStartIndex);
			replacedString.append(tmpString);
			tmpString.clear();
			break ;
		}
		tmpString = parsedLine.substr(searchStartIndex, foundPos
				- searchStartIndex);
		replacedString.append(tmpString);
		tmpString.clear();
		replacedString.append(replacement);
		searchStartIndex = foundPos + toFindLength;
	}
	return (replacedString);
}

int	main(int argc, char **argv)
{
	char buffer[5];
	std::string singleLine;
	std::string savedBuffer;
	std::string parsedStr;
	std::string replacedStr;
	if (argc != 4)
		std::cout << "Wrong Number of Arguments." << std::endl;
	std::string fileName = argv[1];
	std::string strToFind = argv[2];
	std::string strToReplace = argv[3];

	std::ifstream src(fileName, std::ios::binary);
	if (!src)
	{
		std::cerr << "Error opening source file!" << std::endl;
		return (1);
	}
	std::ofstream dest(fileName.append(".replace"), std::ios::binary | std::ios::trunc);
	while (src.read(buffer, sizeof(buffer)))
	{
		singleLine.append(buffer, src.gcount());
		size_t newlinePos;
		if ((newlinePos = singleLine.find('\n')) != std::string::npos)
		{
			parsedStr = polishNewLine(singleLine);
			savedBuffer = saveNewlineLeftovers(singleLine);
			replacedStr = replaceStrings(parsedStr, strToFind,
					strToReplace);
			replacedStr.append("\n");
			dest.write(replacedStr.c_str(), replacedStr.size());
			replacedStr.clear();
			singleLine = savedBuffer;
		}
	}
	if (src.gcount() > 0)
	{
		singleLine.append(buffer, src.gcount());
	}
	replacedStr = replaceStrings(singleLine, strToFind,
					strToReplace);
	dest.write(replacedStr.c_str(), replacedStr.size());
	src.close();
	dest.close();
	return (0);
}