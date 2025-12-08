#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

/*
    ================================
    MAGIC SQUARE OBSERVATIONS (3x3)
    ================================

    - A 3x3 magic square uses all digits from 1 to 9 exactly once.
    - The sum of each row, column, and both diagonals is always 15.
    - There are exactly 8 unique 3x3 magic squares using 1-9.
    - To convert any 3x3 matrix into a magic square, we can:
        → Compare it against all 8 valid magic squares.
        → Calculate the cost to convert each cell (|a - b|).
        → Return the minimum cost among them.

    This approach is optimal because:
        - The number of valid magic squares is fixed (constant time).
        - It guarantees the minimum transformation cost.
*/

// in magic square 
// 5 at center
// odd nums at face ends
// even nums at diagonal end

// for n order magiq square magic constant = n(n^2 + 1)/2


// All 8 possible 3x3 magic squares using digits 1–9
vector<vector<vector<int>>> magicSquares = {
    {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    },
    {
        {6, 1, 8},
        {7, 5, 3},
        {2, 9, 4}
    },
    {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    },
    {
        {2, 9, 4},
        {7, 5, 3},
        {6, 1, 8}
    },
    {
        {8, 3, 4},
        {1, 5, 9},
        {6, 7, 2}
    },
    {
        {4, 3, 8},
        {9, 5, 1},
        {2, 7, 6}
    },
    {
        {6, 7, 2},
        {1, 5, 9},
        {8, 3, 4}
    },
    {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    }
};

// Function to calculate the minimum cost to convert input matrix into a magic square
int formingMagicSquare(vector<vector<int>> s) {
    int minCost = INT_MAX;

    // Compare input matrix against each valid magic square
    for (int k = 0; k < magicSquares.size(); ++k) {
        int cost = 0;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                cost += abs(s[i][j] - magicSquares[k][i][j]);

        // Debug print: cost to convert to each magic square (optional)
        // cout << "Cost to convert to magic square #" << (k + 1) << ": " << cost << endl;

        minCost = min(minCost, cost);
    }

    return minCost;
}

int main() {
    vector<vector<int>> s(3, vector<int>(3));

    cout << "Enter a 3x3 matrix (numbers from 1 to 9):\n";
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> s[i][j];

    int result = formingMagicSquare(s);
    cout << "Minimum cost to convert to a magic square: " << result << endl;

    return 0;
}

