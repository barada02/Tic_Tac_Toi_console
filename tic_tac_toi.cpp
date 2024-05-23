#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

// Define the player symbols
char player_symbols[2] = {'X', 'O'};

// Print the game board with numbers/symbols and current player
void print_board(const vector<char>& board, char current_player) {
    cout << "Current Player: " << current_player << "\n\n";
    for (int i = 0; i < 9; i++) {
        if (board[i] == ' ')
            cout << " " << (i + 1) << " ";
        else
            cout << " " << board[i] << " ";
        if ((i + 1) % 3 == 0)
            cout << "\n";
        if (i == 2 || i == 5)
            cout << "\n-----------\n";
    }
    cout << "\n";
}
// Check for a win
bool check_win(const vector<char>& board, char player) {
    // Define the winning combinations
    int winning_combinations[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
        {0, 4, 8}, {2, 4, 6}             // Diagonals
    };

    // Check for winning combinations
    for (const auto& combination : winning_combinations) {
        if (board[combination[0]] == player && board[combination[1]] == player && board[combination[2]] == player)
            return true;
    }

    return false;
}

// Check for a draw
bool check_draw(const vector<char>& board) {
    for (char cell : board) {
        if (cell == ' ')
            return false;
    }
    return true;
}

// Get the player's move
int get_move(const vector<char>& board) {
    int move;
    while (true) {
        cout << "Enter your move (1-9): ";
        cin >> move;

        if (move >= 1 && move <= 9 && board[move - 1] == ' ')
            return move - 1;
        else
            cout << "Invalid move. Try again.\n";
    }
}

void play_game() {
    vector<char> board(9, ' ');
    int current_player_index = 0;

    while (true) {
        print_board(board, player_symbols[current_player_index]);
        int move = get_move(board);
        board[move] = player_symbols[current_player_index];

        if (check_win(board, player_symbols[current_player_index])) {
            print_board(board, player_symbols[current_player_index]);
            cout << "Player '" << player_symbols[current_player_index] << "' wins!\n";
            break;
        }
        else if (check_draw(board)) {
            print_board(board, player_symbols[current_player_index]);
            cout << "It's a draw!\n";
            break;
        }

        current_player_index = (current_player_index + 1) % 2;
    }
}

int main() {
    play_game();
    return 0;
}
