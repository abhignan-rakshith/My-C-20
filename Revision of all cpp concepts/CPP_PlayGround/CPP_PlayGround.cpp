#include <iostream>

int main() {

	// Braced Initialization
	int elephant_count; // Junk
	int lion_count{}; // 0
	int dog_count{ 10 };
	int animal_count{ lion_count + dog_count };
	// int cut_off {2.9}; //Wont Compile

	// Functional Initialization - ()

	// Assignment Initialization - =
	std::cout << "Animal Count " << animal_count << std::endl;

	// Check the size with sizeof
	std::cout << "size of animal_count: " << sizeof(animal_count) << std::endl; // 4 bytes
	return 0;
}