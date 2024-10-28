#include <iostream>
using namespace std;

int main() {
    // Create a 2D array for the chessboard
    char board[8][8] = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}, // Row 0 (White pieces)
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, // Row 1 (White pawns)
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // Row 2 (Empty)
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // Row 3 (Empty)
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // Row 4 (Empty)
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // Row 5 (Empty)
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, // Row 6 (Black pawns)
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}  // Row 7 (Black pieces)
    };

    // Print the chessboard
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << board[i][j] << " "; // Print each piece or space
        }
        cout << endl; // New line after each row
    }

    return 0;
}
