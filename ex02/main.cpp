#include <iostream>
#include <string>

int main() {
    // Déclaration de la chaîne
    std::string brain = "HI THIS IS BRAIN";

    // Pointeur et référence
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    // Affichage des adresses
    std::cout << "Address of the string variable: " << &brain << std::endl;
    std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Address held by stringREF: " << &stringREF << std::endl;

    // Affichage des valeurs
    std::cout << "Value of the string variable: " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
