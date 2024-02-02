#include <iostream>

int main() {
    // Displaying text in red
    std::cout << "\033[1;31mThis is red text\033[0m" << std::endl;

    // Displaying text in green
    std::cout << "\033[1;32mThis is green text\033[0m" << std::endl;

    return 0;
}
