#include <iostream>

void PrintIntroduction(int Difficulty)
{
  std::cout << "You are a secret agent breaking into a " << Difficulty;
  std::cout << " secure server room...\nEnter the correct code to continue...\n";
}

bool PlayGame(int Difficulty)
{
  PrintIntroduction(Difficulty);
  const int CodeA = rand() % Difficulty + 1;
  const int CodeB = rand() % Difficulty + 1;
  const int CodeC = rand() % Difficulty + 1;

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  std::cout << "+ There are 3 numbers in the code\n";
  std::cout << "\n+ The codes add-up to: " << CodeSum;
  std::cout << "\n+ The codes multiple to give: " << CodeProduct;
  std::cout << std::endl;

  int GuessA, GuessB, GuessC;
  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;

  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC;

  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\nYou win!";
    return true;
  }
  else
  {
    std::cout << "\nYou lose!";
    return false;
  }
}

int main()
{
  int LevelDifficulty = 1;
  int const MaxDifficulty = 5;

  while(LevelDifficulty <= MaxDifficulty)
  {
    bool bLevelComplete = PlayGame(LevelDifficulty);
    std::cin.clear(); // Clears any errors
    std::cin.ignore(); // Discards the buffer

    if (bLevelComplete)
    {
      ++LevelDifficulty;
    }
  }

  std::cout << "\n*** Great work again! You got all the files! Now get out of there! ***\n";
  return 0;
}