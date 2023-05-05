#include <iostream>

void PrintWelcome()
{
    // Print Game Welcome Message
    std::cout << " .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n";
    std::cout << "| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n";
    std::cout << "| | _____  _____ | || |  _________   | || |   _____      | || |     ______   | || |     ____     | || | ____    ____ | || |  _________   | |\n";
    std::cout << "| ||_   _||_   _|| || | |_   ___  |  | || |  |_   _|     | || |   .' ___  |  | || |   .'    `.   | || ||_   \\  /   _|| || | |_   ___  |  | |\n";
    std::cout << "| |  | | /\\ | |  | || |   | |_  \\_|  | || |    | |       | || |  / .'   \\_|  | || |  /  .--.  \\  | || |  |   \\/   |  | || |   | |_  \\_|  | |\n";
    std::cout << "| |  | |/  \\| |  | || |   |  _|  _   | || |    | |   _   | || |  | |         | || |  | |    | |  | || |  | |\\  /| |  | || |   |  _|  _   | |\n";
    std::cout << "| |  |   /\\   |  | || |  _| |___/ |  | || |   _| |__/ |  | || |  \\ `.___.'\\  | || |  \\  `--'  /  | || | _| |_\\/_| |_ | || |  _| |___/ |  | |\n";
    std::cout << "| |  |__/  \\__|  | || | |_________|  | || |  |________|  | || |   `._____.'  | || |   `.____.'   | || ||_____||_____|| || | |_________|  | |\n";
    std::cout << "| |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n";
    std::cout << "| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n";
    std::cout << " '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'\n";                                                                                                                              
    std::cout << std::endl;
    std::cout << std::endl;                                                                                                                       
    std::cout << "TTTTTTTTTTTTTTTTTTTTTTT                     iiii                     lllllll                          XXXXXXX       XXXXXXX\n";
    std::cout << "T:::::::::::::::::::::T                    i::::i                    l:::::l                          X:::::X       X:::::X\n";
    std::cout << "T:::::::::::::::::::::T                     iiii                     l:::::l                          X:::::X       X:::::X\n";
    std::cout << "T:::::TT:::::::TT:::::T                                              l:::::l                          X::::::X     X::::::X\n";
    std::cout << "TTTTTT  T:::::T  TTTTTTrrrrr   rrrrrrrrr  iiiiiiippppp   ppppppppp    l::::l     eeeeeeeeeeee         XXX:::::X   X:::::XXX\n";
    std::cout << "        T:::::T        r:::::::::::::::::r i::::ip:::::::::::::::::p  l::::l  e::::::eeeee:::::ee         X:::::X:::::X\n";
    std::cout << "        T:::::T        rr::::::rrrrr::::::ri::::ipp::::::ppppp::::::p l::::l e::::::e     e:::::e          X:::::::::X\n";
    std::cout << "        T:::::T         r:::::r     r:::::ri::::i p:::::p     p:::::p l::::l e:::::::eeeee::::::e          X:::::::::X\n";
    std::cout << "        T:::::T         r:::::r     rrrrrrri::::i p:::::p     p:::::p l::::l e:::::::::::::::::e          X:::::X:::::X\n";
    std::cout << "        T:::::T         r:::::r            i::::i p:::::p    p::::::p l::::l e:::::::e                XXX:::::X   X:::::XXX\n";
    std::cout << "      TT:::::::TT       r:::::r           i::::::ip:::::ppppp:::::::pl::::::le::::::::e               X::::::X     X::::::X\n";
    std::cout << "      T:::::::::T       r:::::r           i::::::ip::::::::::::::::p l::::::l e::::::::eeeeeeee       X:::::X       X:::::X\n";
    std::cout << "      T:::::::::T       r:::::r           i::::::ip::::::::::::::pp  l::::::l  ee:::::::::::::e       X:::::X       X:::::X\n";
    std::cout << "      TTTTTTTTTTT       rrrrrrr           iiiiiiiip::::::pppppppp    llllllll    eeeeeeeeeeeeee       XXXXXXX       XXXXXXX\n";
    std::cout << "                                                  p:::::p\n";
    std::cout << "                                                  p:::::p\n";
    std::cout << "                                                 p:::::::p\n";
    std::cout << "                                                 p:::::::p\n";
    std::cout << "                                                 p:::::::p\n";
    std::cout << "                                                 ppppppppp\n";
    std::cout << std::endl;                                                                                                                                                                                        
}

void PrintIntroduction()
{
    // Print Game Story
    std::cout << "You are a Secret Agent for the Government infilitrating an Enemy Base...\n";
    std::cout << "You will need to enter the correct code in order to make it through....\n\n";
}

bool PlayGame()
{  
    PrintIntroduction();

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the Terminal
    std::cout << "+ There are three numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // Store Player Guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the Player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win!!\n\n";
        return true;
    }
    else
    {
        std::cout << "\nYou have failed this city!\n\n";
        return false;
    }
}

int main()
{
    PrintWelcome();

    while (true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer
    }
    
    return 0;
}