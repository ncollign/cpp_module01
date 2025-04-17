#include "Harl.hpp"

int main(int argc, char* argv[])
{
    int levelIndex;
	Harl harl;

	if (argc != 2)
	{
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return (1);
    }

    std::string levels = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string input = argv[1];
	levelIndex = -1;

	for (int i = 0; i < 4; ++i)
	{
		if (input == levels[i])
		{
			levelIndex = i;
			break ;
		}
	}

	switch (levelIndex)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return (0);
}
