#include <iostream>
#include <ctime>

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

void PrintIntroduction(int Difficulty)
{
    // Print Game Story
    std::cout << "You are a Secret Agent for the Government infilitrating a level " << Difficulty;
    std::cout << " secure server room of an Enemy Base...\nYou will need to enter the correct code in order to make it through....\n\n";
}

bool PlayGame(int Difficulty)
{  
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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
        std::cout << "\n*** You were able to decipher the code and move on to the next room!! ***\n\n";
        return true;
    }
    else
    {
        std::cout << "\n*** That code was wrong, you go back to double check your decipher tool to try again! ***\n\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // create new random sequence based on time of day

    PrintWelcome();

    int LevelDifficulty = 1;
    const int MaxDifficulty = 10;

    while (LevelDifficulty <= MaxDifficulty) // Loop Game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "\n*** You were able to succefully able to get the files! Your government thanks you for your service! Now get out of there! ***\n";
    
    return 10;
}