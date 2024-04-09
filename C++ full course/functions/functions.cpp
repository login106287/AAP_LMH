#include <bits/stdc++.h>
using namespace std;

void sayHi(string name, int age){
    cout << "Hello " << name << ", you are " << age << " years old.";
}

float dttron(int r=1.0) {
    float c=3.14*pow(r*1.0,2);
    return c;
}

int main()
{
    //sayHi("Huy", 15);
    cout << dttron();
    return 0;
}
