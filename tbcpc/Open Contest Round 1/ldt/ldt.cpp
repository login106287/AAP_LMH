#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int grade;
    float score;
};

bool compareStudents(const Student& s1, const Student& s2) {
    if (s1.score == s2.score) {
        return s1.name < s2.name;
    }
    return s1.score > s2.score;
}

vector<Student> selectTeam(int n, int k, vector<Student>& students) {
    sort(students.begin(), students.end(), compareStudents);

    vector<Student> team;
    int count12 = 0;
    int countOther = 0;

    for (int i = 0; i < n; i++) {
        if (count12 < k) {
            if (students[i].grade == 12) {
                team.push_back(students[i]);
                count12++;
            } else if (students[i].grade == 11 && count12 < k && countOther < (k - count12)) {
                team.push_back(students[i]);
                countOther++;
            }
        } else if (countOther < k) {
            if (students[i].grade != 12) {
                team.push_back(students[i]);
                countOther++;
            }
        }
    }

    return team;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].grade >> students[i].score;
    }

    vector<Student> team = selectTeam(n, k, students);

    for (int i = 0; i < k; i++) {
        cout << team[i].name << " " << team[i].grade << " " << team[i].score << endl;
    }

    return 0;
}
