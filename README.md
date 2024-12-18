# 🎮 **Ahorcado Game in C++**

Welcome to the **Ahorcado Game** project! This is a simple implementation of the classic word-guessing game "Hangman" in C++. It demonstrates fundamental programming concepts such as string manipulation, loops, conditional statements, and file handling.

---

## 🛠️ **Features**

- **Interactive gameplay**:
  - Guess letters to reveal the hidden word.
  - Track lives as you play.
- **Word handling**:
  - Displays a hidden word with underscores (`_`) for unguessed letters.
  - Replaces underscores with correctly guessed letters in real time.
- **File reading**:
  - Includes functionality to read words from a file (not fully implemented in the main flow).

---

## 📋 **How to Play**

1. Start the program.
2. You will see the hidden word represented as underscores (`_`) and the number of lives you have.
3. Input one letter at a time to guess the word.
   - Correct guesses reveal the letter in the word.
   - Incorrect guesses reduce your remaining lives.
4. The game ends when:
   - You guess the entire word correctly (**You Win! 🎉**), or
   - You run out of lives (**You Lose 💀**).

---

## 🔧 **How to Compile and Run**

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/ahorcado-game.git
   cd ahorcado-game
   ```

2. **Compile the program**:
   ```bash
   g++ -o ahorcado ahorcado.cpp
   ```

3. **Run the executable**:
   ```bash
   ./ahorcado
   ```

---

## 📂 **File Structure**

```
project-folder/
├── ahorcado.cpp         # Main program file
├── datos.txt            # File for storing additional words (optional)
└── README.md            # Project documentation
```

---

## ✨ **Sample Gameplay**

### Start of the Game
```
Vidas: 5
_______
```

### Correct Guess
Input: `A`
```
Vidas: 5
A__a___
```

### Incorrect Guess
Input: `Z`
```
Vidas: 4
A__a___
```

### Game Over
```
PERDISTE, la palabra era: Altavoz
```

### Victory
```
¡GANASTE!
```

---

## 🧑‍💻 **Features to Improve**

- Dynamically load words from `datos.txt` for varied gameplay.
- Add input validation to handle invalid characters.
- Enhance visuals with better formatting.
- Extend the game to handle multiple rounds or player scores.

---

## 📩 **Contact**

Created by Sergio Eguíluz Romero. Feel free to reach out for feedback or suggestions:
- **LinkedIn**: [sergio.dev@gmail.com](https://www.linkedin.com/in/sergio-egu%C3%ADluz-43482a265/)
- **Github Profile**: [@eguilser](https://github.com/eguilser)

---

## 📜 **License**

This project is licensed under a proprietary license. Redistribution or modification without explicit permission is prohibited. See the [LICENSE](./LICENSE) file for details.
