#include"Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return 1;
	}
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int level = 0;
	for (int i = 0; i < 4; i++)
	{
		if (argv[1] == levels[i])
		{
			level = i + 1;
			break;
		}
	}
	switch (level)
	{
		case 1:
			harl.complain("DEBUG");
		case 2:
			harl.complain("INFO");
		case 3:
			harl.complain("WARNING");
		case 4:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	}
	
	return 0;
}