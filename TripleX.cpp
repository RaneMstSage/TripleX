#include <iostream>

int main()
{
    // Print Game Welcome Message
    std::cout << "You are a Secret Agent for the Government infilitrating an Enemy Base..." << std::endl;
    std::cout << "You will need to enter the correct code in order to make it through...." << std::endl;

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the Terminal
    std::cout << std::endl;
    std::cout << "+ There are three numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct <<std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA; 
    std::cin >> GuessB; 
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    return 0;
}