#include <iostream>
using std::cout; //or use (using namespace std) or (std::string)

namespace first
{
    int x=1;
}
namespace second
{
    int x=2;
}

int main()
{
    int x=0;
    cout << first::x <<endl;
    cout << x;
    return 0;
}
