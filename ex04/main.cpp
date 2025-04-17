#include <iostream>
#include <fstream>
#include <string>

void replace(std::string &line, const std::string &s1, const std::string &s2)
{
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos)
	{
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int argc, char* argv[])
{
    if (argc != 4)
	{
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty() || s2.empty())
	{
        std::cerr << "Error: s1 and s2 cannot be empty." << std::endl;
        return (1);
    }

    std::ifstream inputFile(filename);
    if (!inputFile)
	{
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return (1);
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile)
	{
        std::cerr << "Error: Could not create output file." << std::endl;
        return (1);
    }

    std::string line;
    while (std::getline(inputFile, line))
	{
        replace(line, s1, s2);
        outputFile << line << std::endl;
    }

    std::cout << "File processed successfully. Output written to " << filename + ".replace" << std::endl;

    return (0);
}
