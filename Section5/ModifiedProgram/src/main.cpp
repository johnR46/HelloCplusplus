#include <iostream>

int main(int argc,char *argv[])
{

    int favorite_number;

    std::cout << "Enter your favorite number between 1 and 100:";

    std::cin >> favorite_number;

    std::cout << "Amazing !! That's my favorite number too!" << std::endl;

    std::cout << "no really!!" << favorite_number << "is my favorite number!" << std::endl;

    return 0;
}