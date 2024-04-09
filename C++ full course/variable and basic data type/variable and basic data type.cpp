#include <iostream>

int main(){
    // int (whole number)
    int age, year ; //declaration
    age = 5; // assignment
    year = 6.5;
    std::cout << "My age: " << age << "\n";
    std::cout << "This year: " << year << "\n";
    //double (number including decimal)
    double price, temperature;
    price = 12.99;
    temperature = 30.1;
    std::cout << "The price of this shorts: " << price << "\n";
    std::cout << "The temperature today is: " <<temperature << "\n";
    //boolean (true or false)
    bool answer, choose;
    std::cout << answer << "\n";
    std::cout << answer << "\n";
    //string (object that represents a sequence of text)
    std::string firstname = "Tran", middlename = "Quang", lastname = "Huy";
    std::cout << "Your full name is: " << firstname <<" " << middlename <<" " << lastname << "\n";
    return 0;
}
