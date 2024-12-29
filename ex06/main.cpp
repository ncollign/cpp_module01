#include "Harl.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }

    std::string level = argv[1];
    Harl harl;

    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int levelIndex = -1;

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            levelIndex = i;
            break;
        }
    }

    switch (levelIndex) {
    case 0:
        harl.complain("DEBUG");
        [[fallthrough]];
    case 1:
        harl.complain("INFO");
        [[fallthrough]];
    case 2:
        harl.complain("WARNING");
        [[fallthrough]];
    case 3:
        harl.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}
