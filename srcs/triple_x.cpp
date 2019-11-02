#include "../includes/triple_x.h"

int	main()
{

	// DECLARATION OF VARIABLES
	int	a;
	int	b;
	int	c;
	int	sum;
	int	product;

	// VALUES
	a = 4;
	b = 3;
	c = 2;
	sum = a + b + c;
	product = a * b * c;

	// MESSAGE
	std::cout << "You have reached the end of a long hallway..." << std::endl;
	std::cout << "There is only one door at the end of this hallway and on that door you see a numpad..." << std::endl;
	std::cout << "You need to enter the correct codes to continue..." << std::endl;

	// OUTPUT VALUE
	std::cout << sum << std::endl;
	std::cout << product << std::endl;

	return (0);
}
