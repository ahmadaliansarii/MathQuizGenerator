# Math Quiz Generator

This is a simple console-based Math Quiz game implemented in C. Players can test their mathematical knowledge across different difficulty levels: Easy, Medium, and Hard. The game tracks the player's score and the time taken to complete the quiz.

## Features

*   **Multiple Difficulty Levels**: Choose between Easy, Medium, and Hard.
*   **Randomized Questions**: Each quiz session presents 10 random questions from a pool of 15 per difficulty level.
*   **Score Tracking**: Your performance is scored out of 10.
*   **Time Limit Notification**: Notifies the player if they exceed a 5-minute time limit (though the quiz doesn't terminate, it's a soft warning).
*   **Answer Review**: After completing the quiz, players can choose to see which questions they answered correctly or incorrectly.
*   **User-Friendly Interface**: Simple text-based interface for interaction.

## How to Compile and Run

To compile and run this game, you will need a C compiler, such as GCC.

1.  **Save the Code**: Save the provided C code into a file named `PF Project.c`.

2.  **Compile**: Open a terminal or command prompt, navigate to the directory where you saved the file, and compile the code using GCC:

    ```bash
    gcc "PF Project.c" -o math_quiz
    ```
    *Note: The `windows.h` header is used for `Sleep` function in some systems, but it's commented out in the provided code snippet and not strictly necessary for the core functionality. If compilation issues arise on non-Windows systems due to this header, you might need to remove `#include<windows.h>`.*

3.  **Run**: After successful compilation, run the executable:

    ```bash
    ./math_quiz
    ```
    On Windows, you might simply type:
    ```bash
    .\math_quiz.exe
    ```

## Game Play

1.  Upon starting the game, you will be greeted with a welcome message and the current time.
2.  You will be prompted to choose a difficulty level: 'E' for Easy, 'M' for Medium, or 'H' for Hard.
3.  The quiz will then present 10 multiple-choice questions one by one.
4.  Enter the letter corresponding to your chosen answer (e.g., 'a', 'b', 'c', or 'd').
5.  After all 10 questions, your total score will be displayed, along with a message based on your performance.
6.  You will be informed if you completed the quiz within the 5-minute suggested time.
7.  Finally, you can choose to review your answers (1 for check, 2 for exit) to see which questions you got right ('O') or wrong ('X').

## Code Structure

The project consists of a single C file:

*   `PF Project.c`: Contains the `main` function and all the question functions (`EQx`, `MQx`, `HQx`) for Easy, Medium, and Hard difficulty levels.

## License

This project is open-source and available under the [MIT License](https://opensource.org/licenses/MIT). You can find more details in the `LICENSE` file (if present in the full repository).
