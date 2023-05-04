#include <iostream>

int main()
{
    // Print Game Welcome Message
    std::cout << "You are a Secret Agent for the Government infilitrating an Enemy Base...";
    std::cout << std::endl;
    std::cout << "You will need to enter the code in order to make it through....";

    // Declare the 3 number code
    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    // Print Sum and Product to the Terminal
    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product;

    return 0;
}