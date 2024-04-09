#include <iostream>
#include <vector>

//typedef std::vecto<std::pair<std::string; int>> pairlist_t;
typedef std::string text_t; // or use (using text_t = std::string)
typedef int number_t; // or use (using number_t = int)

int main()
{
    text_t text = "Hello";
    number_t number = 1;
    std::cout << text << "\n";
    std::cout << number;
    return 0;
}
