#include "Zombie.hpp"

int main()
{
	int hordeSize;

	hordeSize = 5;
	Zombie *horde = zombieHorde(hordeSize, "HordeZombie");

	if (horde)
	{
		for (int i = 0; i < hordeSize; i++)
		{
			horde[i].announce();
		}
		delete[] horde;
	}

	Zombie z1("Nico");
	z1.announce();
	z1.setName("Paulo");
	z1.announce();
	return (0);
}
