# TicTacToe-C
This project is a simple Tic-Tac-Toe game written in C, using a modular approach. The game is played in the terminal by two players who take turns marking the board. Players enter the column first and then the row to make their moves. The console clears automatically after each move to keep the interface clean.

# 🕹️ Tic-Tac-Toe Game in C

This project is a simple **Tic-Tac-Toe game** implemented in **C** using a modular approach. The game runs in the terminal, where two players take turns marking the board until there's a winner or the game ends in a draw.

## 🎮 How to Play

1. The game board is a 3x3 grid.
2. Players take turns to enter their moves by specifying **column first** and then **row** (e.g., `1 2`).
3. The console clears after each move to keep the interface clean.
4. The game ends when a player wins or when there is a draw.

### Example:
```
Player X, enter column and row: 1 2
```

## 🏆 Win Conditions

The game checks for the following winning conditions:

- **Horizontal line**: Three matching marks in a row.
- **Vertical line**: Three matching marks in a column.
- **Diagonal line**: Three matching marks diagonally.

## ⚙️ How to Compile and Run

To compile the game using **gcc**:

```bash
gcc main.c board.c game.c -o tic_tac_toe
```

To run the game:

```bash
./tic_tac_toe
```

## 📄 License

This project is licensed under the **MIT License**. Feel free to use, modify, and distribute it as you like.

