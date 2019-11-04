#include "../includes/triple_x.h"

int	main()
{
	// DECLARATION OF VARIABLES
	int			GuessA, GuessB, GuessC;
	int			GuessSum, GuessProduct;

	// INITIALIZATION OF CONST VARIABLES
	const int	CodeA = 4;
	const int	CodeB = 3;
	const int	CodeC = 2;
	const int	CodeSum = CodeA + CodeB + CodeC;
	const int	CodeProduct = CodeA * CodeB * CodeC;

	// // ASSIGNING VALUES
	// a = 4;
	// b = 3;
	// c = 2;
	// sum = a + b + c;
	// product = a * b * c;

	// MESSAGE
	std::cout << "You have reached the end of a long hallway..." << std::endl;
	std::cout << "There is only one door at the end of this hallway and on that door you see a numpad..." << std::endl;
	std::cout << "You need to enter the correct codes to continue..." << std::endl << std::endl;

	// OUTPUT PROCESSED VALUE
	std::cout << "There are a total of 3 numbers in the code" << std::endl;
	std::cout << "The code adds up to: " << CodeSum << std::endl;
	std::cout << "The code multiplies up to: " << CodeProduct << std::endl;

	// READING USER INPUT
	std::cout << "Please enter 3 numbers delimited (separated) by spaces" << std::endl;
	std::cin >> GuessA >> GuessB >> GuessC;
	std::cout << "Your guess was: " << GuessA << " | " << GuessB << " | " << GuessC << std::endl;

	// PROCESSING USER INPUT
	GuessSum = GuessA + GuessB + GuessC;
	GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "You're in!" << std::endl;
	}
	else
	{
		std::cout << "You lost..." << std::endl;
	}
	

	return (0);
}
