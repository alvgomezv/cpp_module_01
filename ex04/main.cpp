#include<iostream>
#include<string>
#include <fstream>
#include <sstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << "<file> <string 1> <string 2>" << std::endl;
		return 1;
	}
	std::string	fileName = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream file(fileName);
	if (!file)
	{
		std::cerr << "Error opening file" << std::endl;
		return 1;
	}
	std::ofstream newFile(fileName + ".replace");
	if (!newFile)
	{
		std::cerr << "Error opening new file" << std::endl;
		return 1;
	}

	std::string	line;
	std::string content;
	int			count = 0;
	bool		end_line = false;
	char 		ch;

	while (std::getline(file, line))
		count++;
	file.close();

	std::ifstream file2(fileName);
	while (file2.get(ch))
		content += ch;
	if (content.back() == '\n')
		end_line = true;
	file2.close();

	std::ifstream file3(fileName);
	while (std::getline(file3, line))
	{
		count--;
		if (line.find(s1) != std::string::npos)
		{
			size_t	pos = line.find(s1);
			newFile << line.substr(0, pos);
			newFile << s2;
			newFile << line.substr(pos + s1.size(), line.size());
		}
		else
			newFile << line;
		if (count != 0 || end_line == true)
			newFile << std::endl;
	}
	file3.close();
	newFile.close();
}