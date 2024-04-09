#include <iostream>
using namespace std;

int main()
{
    double students = 20;
    //students += 2; // or (students = students + 2)
    students++; // or (students += 1) or (students = students + 1)
    cout << students << "\n";
    students -= 1; // or do as + operator
    cout << students << "\n";
    students *= 2; // or do it as + operator
    cout << students << "\n";
    students /= 2; //or do it as + operator
    cout << students << "\n";
}
