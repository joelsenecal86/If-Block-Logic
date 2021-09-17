// If-Block-Logic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int input;

    do {
        std::cout << "Input a number between 0 and 100: ";
        std::cin >> input;

        if (input >= 0 && input <= 100 && std::cin)
        {

            if (input >= 0 && input <= 10)
            {
                std::cout << "Number " << input << " triggered the [IF] block" << std::endl;
            }
            else if (input >= 11 && input <= 25)
            {
                std::cout << "Number " << input << " triggered the [ELSE IF] block" << std::endl;
            }
            else
            {
                std::cout << "Number " << input << " triggered the [ELSE] block" << std::endl;
            }
        }
        else if (!(input >= 0) && !(input >= 100))
        {
            std::cout << "Input not within range..." << std::endl;
        }

        if (!std::cin)
        {
            std::cout << "Invalid Input..." << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
        else
        {
            break;
        }
    } while (std::cin.fail() == false);
}