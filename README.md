# Tic-Tac-Toe-Cpp
Tic-Tac-Toe Game in C++

Overview
This project is a simple implementation of the classic Tic-Tac-Toe game written in C++. It allows a player to compete against the computer. The game runs in a terminal or command-line environment and follows standard Tic-Tac-Toe rules, where the player wins by forming a line of three consecutive markers (either horizontally, vertically, or diagonally).

Features
Player vs. Computer: You play as 'X', and the computer plays as 'O'.
Input Validation: Ensures that the player's input is valid and the space is not already occupied.
Randomized Computer Moves: The computer randomly selects its move from the available spaces.
Win Detection: The game detects wins across rows, columns, and diagonals.
Draw/Tie Detection: If all spaces are filled without a winner, the game declares a tie.
How to Play
Game Board Layout: The game board is a 3x3 grid with positions numbered from 1 to 9, as shown below:

lua
Copy code
  1 | 2 | 3
 -----------
  4 | 5 | 6
 -----------
  7 | 8 | 9
Objective: The first player (you) uses 'X', and the computer uses 'O'. The goal is to place three of your marks in a row, column, or diagonal before the computer does.

Turns: Players take turns entering a number corresponding to the position on the grid where they want to place their marker. The computer then randomly selects an available space.

Winning: The game will announce the winner or declare a tie if no spaces are left.

Code Explanation
The code is divided into several functions:

drawboard(char* spaces): Displays the current state of the game board.
playermove(char* spaces, char player): Prompts the player to select a move and updates the board.
computermove(char* spaces, char computer): The computer randomly selects an available space for its move.
check_win(char* spaces, char player, char computer): Checks if the player or computer has won.
check_tie(char* spaces): Determines if the game is a draw (i.e., no more available spaces and no winner).
How to Run the Game
Prerequisites
To compile and run this program, you need:

A C++ compiler (e.g., g++)
A terminal or command prompt
Compilation
To compile the game, run the following command:

bash
Copy code
g++ main.cpp -o TicTacToe
Running the Game
Once compiled, you can start the game by executing the following command:

bash
Copy code
./TicTacToe
Example Gameplay
yaml
Copy code
     |     |     
     |     |     
_____|_____|_____
     |     |     
     |     |     
_____|_____|_____
     |     |     
     |     |     
     
Enter a number from spot (1-9): 5

     |     |     
     |  X  |     
_____|_____|_____
     |     |     
_____|_____|_____
     |     |     

Computer chose 3
...
Future Improvements
Implement a smarter AI for the computer instead of random moves.
Add an option to reset the game without exiting.
Implement error handling for out-of-range or invalid input.
Enhance user experience with a graphical interface or colored terminal output.
License
This project is licensed under the MIT License. See the LICENSE file for details.

Feel free to adjust the README based on further updates to your code!
