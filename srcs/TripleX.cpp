#include "../includes/triple_x.h"

int	main()
{
	// INITIALIZATION OF VARIABLES
	const int	MaxDifficulty = 5;

	// DECLARATION OF VARIABLES
	int			levelDifficulty;

	levelDifficulty = 1;
	while (levelDifficulty <= MaxDifficulty)
	{
		// DECLARATION OF VARIABLES
		bool	bLevelComplete;

		// GAME ITERATION
		bLevelComplete = PlayGame(levelDifficulty);
		ClearInput();

		if (bLevelComplete)
			++levelDifficulty;
	}
	std::cout << "You LIVED!" << std::endl;
	return 0;
}

void ClearInput()
{
	std::cin.clear();	// clears any errors
	std::cin.ignore();	// discards the buffer
	return ;
}

void PrintIntroduction(int levelDifficulty) {
	std::cout << "\nYou're running away from Zombies and you've reached the end of a long hallway...\n";
	std::cout << "There is only one door at the end of this hallway and on that door you see a numpad...\n";
	std::cout << "You need to enter the correct codes to continue...\n";
	std::cout << "Your current level difficulty is: " << levelDifficulty << std::endl << std::endl;
	return ;
}

bool PlayGame(int levelDifficulty)
{
	srand(time(NULL));	// creating random seed based on time

	// INITIALIZATION OF CONST VARIABLES
	const int	CodeA = rand() % levelDifficulty + levelDifficulty;
	const int	CodeB = rand() % levelDifficulty + levelDifficulty;
	const int	CodeC = rand() % levelDifficulty + levelDifficulty;
	const int	CodeSum = CodeA + CodeB + CodeC;
	const int	CodeProduct = CodeA * CodeB * CodeC;

	// DECLARATION OF VARIABLES
	int			GuessA, GuessB, GuessC;
	int			GuessSum, GuessProduct;

	// PRINT INTRO MESSAGE
	PrintIntroduction(levelDifficulty);

	// OUTPUT PROCESSED VALUE
	std::cout << "There are a total of 3 numbers in the code\n";
	std::cout << "The code adds up to: " << CodeSum << std::endl;
	std::cout << "The code multiplies up to: " << CodeProduct << std::endl << std::endl;

	// READING USER INPUT
	std::cout << "Please enter 3 numbers delimited (separated) by spaces\n";
	std::cin >> GuessA >> GuessB >> GuessC;
	std::cout << "Your guess was: " << GuessA << " | " << GuessB << " | " << GuessC << std::endl;

	// PROCESSING USER INPUT
	GuessSum = GuessA + GuessB + GuessC;
	GuessProduct = GuessA * GuessB * GuessC;

	// WIN CONDITION VERIFICATION
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "You're in!\n";
		return true;
	}
	else
	{
		std::cout << "Hurry up! Try again!\n\n";
		return false;
	}
}
