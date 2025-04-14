#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << name << "'s zombie constructed." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Default zombie constructed." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
