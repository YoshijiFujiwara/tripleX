#include <iostream>

int main()
{
  std::cout << "You are a secret agent breaking into a secure server room...\n";
  std::cout << "Enter the correct code to continue...\n";

  const int CodeA = 4;
  const int CodeB = 3;
  const int CodeC = 2;

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
  }
  else
  {
    std::cout << "\nYou lose!";
  }

  return 0;
}