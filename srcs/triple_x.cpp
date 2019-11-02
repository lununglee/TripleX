#include "../includes/triple_x.h"

int	main()
{
	// DECLARATION OF VARIABLES
	const int	a = 4;
	const int	b = 3;
	const int	c = 2;
	const int	sum = a + b + c;
	const int	product = a * b * c;

	// // ASSIGNING VALUES
	// a = 4;
	// b = 3;
	// c = 2;
	// sum = a + b + c;
	// product = a * b * c;

	// MESSAGE
	std::cout << "You have reached the end of a long hallway..." << std::endl;
	std::cout << "There is only one door at the end of this hallway and on that door you see a numpad..." << std::endl;
	std::cout << "You need to enter the correct codes to continue..." << std::endl;

	// OUTPUT PROCESSED VALUE
	std::cout << sum << std::endl;
	std::cout << product << std::endl;

	return (0);
}
