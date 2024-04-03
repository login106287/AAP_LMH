#include <bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<_b;i++)
using namespace std;

bool dfs(vector<vector<char>>& board, string& word, int index, int i, int j) {
    if (index == word.size()) return true;
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]) return false;

    char temp = board[i][j];
    board[i][j] = '#'; // Mark as visited

    bool found = dfs(board, word, index + 1, i + 1, j) ||
                 dfs(board, word, index + 1, i - 1, j) ||
                 dfs(board, word, index + 1, i, j + 1) ||
                 dfs(board, word, index + 1, i, j - 1);

    board[i][j] = temp; // Restore the original character
    return found;
}

bool exist(vector<vector<char>>& board, string word) {
    if (board.empty() || board[0].empty()) return false;
    int m = board.size(), n = board[0].size();

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dfs(board, word, 0, i, j)) return true;
        }
    }
    return false;
}


int main() {
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    string word = "ABCCED";

    cout << (exist(board, word) ? "true" : "false") << endl;

    return 0;
}
