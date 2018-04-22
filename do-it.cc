#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand( (unsigned)time(NULL) );

    if (rand() % 2 == 0) std::cout << "Just do it!" << std::endl;
    else std::cout << "Not now..." << std::endl;

    return 1;
}