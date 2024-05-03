#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MAX_SIZE = 1005;
int board[MAX_SIZE][MAX_SIZE] = {0};

// Hàm kiểm tra ô có hợp lệ để di chuyển không
bool isValidMove(int x, int y, int n, int m) {
    return (x >= 1 && x <= n && y >= 1 && y <= m && board[x][y] == 0);
}

// Hàm giải quyết bài toán
void solveRobotMovement(int n, int m, int k, const vector<pair<int, int>>& blackCells, const string& moves) {
    // Đánh dấu các ô bị tô đen
    for (int i = 0; i < k; ++i) {
        int x = blackCells[i].first;
        int y = blackCells[i].second;
        board[x][y] = 1;
    }

    // Vị trí ban đầu của robot
    int posX = 1, posY = 1;

    // Thực hiện các bước di chuyển theo lộ trình
    for (char move : moves) {
        if (move == 'U') {
            if (isValidMove(posX - 1, posY, n, m))
                --posX;
            else {
                cout << "-1 -1" << endl; // Lộ trình vi phạm luật chơi
                return;
            }
        } else if (move == 'D') {
            if (isValidMove(posX + 1, posY, n, m))
                ++posX;
            else {
                cout << "-1 -1" << endl; // Lộ trình vi phạm luật chơi
                return;
            }
        } else if (move == 'L') {
            if (isValidMove(posX, posY - 1, n, m))
                --posY;
            else {
                cout << "-1 -1" << endl; // Lộ trình vi phạm luật chơi
                return;
            }
        } else if (move == 'R') {
            if (isValidMove(posX, posY + 1, n, m))
                ++posY;
            else {
                cout << "-1 -1" << endl; // Lộ trình vi phạm luật chơi
                return;
            }
        }
    }

    // Xuất ra vị trí đến của robot
    cout << posX << " " << posY << endl;
}

int main() {
    int n, m, k;
    vector<pair<int, int>> blackCells;
    string moves;

    // Nhập dữ liệu
    cin >> n >> m >> k;
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        blackCells.push_back(make_pair(x, y));
    }

    cin >> moves;

    // Gọi hàm giải quyết bài toán
    solveRobotMovement(n, m, k, blackCells, moves);

    return 0;
}
