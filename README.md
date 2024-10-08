# Tic-Tac-Toe

A simple command-line Tic-Tac-Toe game implemented in C++ where the player competes against the computer. This project demonstrates basic game logic, AI-driven moves, and user interaction in a console environment. It's a great beginner's project to learn how to implement game loops, simple AI, and turn-based mechanics.

## Features

- **Player vs Computer**: The game allows a single player to compete against a basic AI.
- **Grid display**: The game board is displayed in a 3x3 grid format.
- **Input validation**: Ensures valid moves by the player and prevents overwriting.
- **Computer AI**: The computer makes decisions to block or attempt to win.
- **Win detection**: Automatically detects and announces when the player or computer wins, or when the game ends in a draw.

## Demo

```bash
$ ./tic_tac_toe

You [X] - Computer [O]

 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Enter a number (1-9): 1

 X | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Computer moves to 5:

 X | 2 | 3
-----------
 4 | O | 6
-----------
 7 | 8 | 9
```

## How to Play
1. You play as "X", while the computer plays as "O".
2. Enter a number from 1 to 9 to place your marker on the grid.
3. The first to align three markers (vertically, horizontally, or diagonally) wins.
4. If all cells are filled and neither player nor the computer wins, the game ends in a draw.

## Setup and Installation
### Prerequisites
C++ compiler (e.g., g++)
### Building the Project
Clone the repository:
```bash
git clone https://github.com/yourusername/tic-tac-toe.git
cd tic_tac_toe
```
Compile the code using a C++ compiler:
```bash
g++ tic_tac_toe.cpp -o tic_tac_toe
```
Run the game:
```bash
./tic_tac_toe
```

## Code Structure
tic_tac_toe.cpp: The main file containing all game logic, including player moves, computer AI, grid display, input handling, and win/draw detection.

## Future Improvements
- Improve the computer's AI to make more strategic decisions.
- Implement a difficulty level for the computer opponent.
- Add a graphical user interface (GUI).
- Add scoring and more game rounds.

## License
This project is licensed under the MIT License - see the `LICENSE` file for details.
