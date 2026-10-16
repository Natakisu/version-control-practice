#include "Crypt.h"
#include <iostream>
#include <string>

void Crypt::DisplayMessage() // Declaration for .h file
{
    std::cout << "WARNING: Unauthorized souls detected!\n";
    std::cout << "The crypt keeper has awakened!\n";

    std::cout << "==================================================\n";
    std::cout << "\033[31m 1. Enter the Crypt?               \033[0m\n";
    std::cout << "\033[32m 2. Flee!                          \033[0m\n";
    std::cout << "==================================================\n";
    std::cout << "Choice (1-2): ";

    std::string input;
    std::getline(std::cin, input);
    int choice = 0;

    try {
        choice = std::stoi(input);
    }
    catch (...)
    {
        choice = 0;
    }

    if (choice == 1)
    {
        std::cout << "\n\033[31mYou step forward into the dark depths of the crypt...\033[0m\n";
        std::cout << "\033[32mCrypt Keeper: \033[38;2;255;165;0mIt's time to party, Happy Halloween!\033[0m\n";
    }
    else if (choice == 2)
    {
        std::cout << "\n\033[32mYou turn tail and flee back into safety!\033[0m\n";
        std::cout << "\033[32mCrypt Keeper: \033[38;2;255;165;0mI just wanted to party, Happy Halloween. *sadly*\033[0m\n";
    }
    else
    {
        std::cout << "\n\033[31mInvalid choice. The crypt keeper stares at you blankly.\033[0m\n";
    }
}