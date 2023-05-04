#include <iostream>

int main()
{
    std::cout << "You are a Secret Agent for the Government infilitrating an Enemy Base...";
    std::cout << std::endl;
    std::cout << "You will need to enter the code in order to make it through....";

    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product;

    return 0;
}