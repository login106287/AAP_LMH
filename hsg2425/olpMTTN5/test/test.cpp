#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

// Function to evaluate the expression
int evaluateExpression(const vector<vector<int>>& spreadsheet, const string& expression) {
    if (expression.find("SUM") != string::npos) {
        // Extract cell references from the expression
        int commaPos = expression.find(",");
        string cell1 = expression.substr(4, commaPos - 4);
        string cell2 = expression.substr(commaPos + 1, expression.size() - commaPos - 2);

        // Convert cell references to indices
        int row1 = cell1[1] - '0' - 1;
        int col1 = cell1[0] - 'A';
        int row2 = cell2[1] - '0' - 1;
        int col2 = cell2[0] - 'A';

        // Calculate SUM
        return spreadsheet[row1][col1] + spreadsheet[row2][col2];
    } else if (expression.find("MAX") != string::npos) {
        // Extract cell references from the expression
        int commaPos = expression.find(",");
        string cell1 = expression.substr(4, commaPos - 4);
        string cell2 = expression.substr(commaPos + 1, expression.size() - commaPos - 2);

        // Convert cell references to indices
        int row1 = cell1[1] - '0' - 1;
        int col1 = cell1[0] - 'A';
        int row2 = cell2[1] - '0' - 1;
        int col2 = cell2[0] - 'A';

        // Calculate MAX
        return max(spreadsheet[row1][col1], spreadsheet[row2][col2]);
    }

    return 0; // Default value, in case of invalid expression
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> spreadsheet(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> spreadsheet[i][j];
        }
    }

    int Q;
    cin >> Q;
    cin.ignore(); // Ignore the newline character

    for (int i = 0; i < Q; i++) {
        string expression;
        getline(cin, expression);

        // Evaluate the expression and print the result
        cout << evaluateExpression(spreadsheet, expression) << endl;
    }

    return 0;
}
