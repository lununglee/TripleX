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
	std::cout << "You're running away from Zombies and you've reached the end of a long hallway...\n";
	std::cout << "There is only one door at the end of this hallway and on that door you see a numpad...\n";
	std::cout << "You need to enter the correct codes to continue...\n\n";

	// OUTPUT PROCESSED VALUE
	std::cout << "There are a total of 3 numbers in the code\n";
	std::cout << "The code adds up to: \n" << CodeSum;
	std::cout << "The code multiplies up to: \n" << CodeProduct;

	// READING USER INPUT
	std::cout << "Please enter 3 numbers delimited (separated) by spaces\n";
	std::cin >> GuessA >> GuessB >> GuessC;
	std::cout << "Your guess was: " << GuessA << " | " << GuessB << " | " << GuessC;

	// PROCESSING USER INPUT
	GuessSum = GuessA + GuessB + GuessC;
	GuessProduct = GuessA * GuessB * GuessC;

	// WIN CONDITION VERIFICATION
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
		std::cout << "You're in!\n";
	else
		std::cout << "Your brains got eaten\n";

	return (0);
}
