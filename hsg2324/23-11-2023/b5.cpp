#include <bits/stdc++.h>
using namespace std;

struct Question {
    string question;
    string options[4];
    string answer;
};

int main() {
    Question questions[5];
    int counts = 0;
    string ans;

    for (int i = 0; i < 5; i++) {
        cout << "Nhap cau hoi: " << i + 1 << ": ";
        getline(cin, questions[i].question);

        cout << "A/ ";
        getline(cin, questions[i].options[0]);
        cout << "B/ ";
        getline(cin, questions[i].options[1]);
        cout << "C/ ";
        getline(cin, questions[i].options[2]);
        cout << "D/ ";
        getline(cin, questions[i].options[3]);

        cout << "Dap an: ";
        cin >> questions[i].answer;
        cin.ignore();
        cout << "Lua chon cua ban: ";
        getline(cin,ans);
        if (ans==questions[i].answer) counts++;
    }


    cout << counts;

    return 0;
}
