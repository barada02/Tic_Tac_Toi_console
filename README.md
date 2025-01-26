# Tic Tac Toe Console Game

This is a console-based Tic Tac Toe game written in C++.

## Features
- Two-player mode
- Input validation
- Replay option

## Setup Instructions
1. Clone the repository:
   ```bash
   git clone https://github.com/barada02/Tic_Tac_Toi_console.git
   ```
2. Navigate to the project directory:
   ```bash
   cd Tic_Tac_Toi_console
   ```
3. Compile the code using a C++ compiler, e.g., g++:
   ```bash
   g++ tic_tac_toi.cpp -o TicTacToe
   ```
4. Run the executable:
   ```bash
   ./TicTacToe
   ```

## Game Rules
- The game is played on a 3x3 grid.
- Players take turns to place their symbol (X or O) in an empty cell.
- The first player to align three of their symbols horizontally, vertically, or diagonally wins.
- If all cells are filled without a winner, the game ends in a draw.

## How to Play
- Enter your move by specifying a number between 0 and 8, corresponding to the grid positions.
- The grid positions are numbered as follows:
  ```
  0 | 1 | 2
  ---------
  3 | 4 | 5
  ---------
  6 | 7 | 8
  ```
- After the game ends, you can choose to play again by entering 'y' when prompted.

## Contributing
Feel free to submit issues or pull requests to improve the game.

## License
This project is licensed under the MIT License.
