#include "Zombie.hpp"

int main()
{
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

	Zombie z("Nico");
	z.announce();

    randomChump("StackZombie");

    return 0;
}
