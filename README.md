# SnakeGame

Normal snake is far too slow, and static for normal people. This snake game allows for 1 or 2 players, each with its own commands on the keyboard. 

Just like normal snake, you start with a small snake, that not only grows when you eat, but also makes the game move faster and faster. The food is randomly generated on the board to make the game fair for both players. 

To win, your opponent must crash into your tail, itself, or the walls. If you crash into each other you reach a draw.  Survive as long as you can when playing single player.
The game implements the lcurses library to display the game state to the user(s), with an ‘X’ representing a wall, an ‘O’ representing the tail segment, an ‘H’ representing the head, and an ‘F’ representing food.

To start, simply select the number of players, and play till the end. Have fun.

to compile and run the project do the following:

A. on unix:
1. run: sudo apt-get install libncurses-dev
2. run: make
3. open SnakeGame

B. on windows: 
1. install a c++ compiler (MinGW is recommended)
2. run: make
3. open SnakeGame.exe

Player 1 commands:
1. up: W
2. down: S
3. left: A
4. right: D

Player 2 commands:
1. up: I
2. down: K
3. left: J
4. right: L

Screenshots:

![image](https://user-images.githubusercontent.com/27931441/153889176-38b319eb-24b1-4445-a9ca-d5db48d7b8b0.png)

![image](https://user-images.githubusercontent.com/27931441/153889209-589e80c3-3c67-48d5-9cd0-8521af7e721c.png)

![image](https://user-images.githubusercontent.com/27931441/153889269-9ce940f1-fc34-43e0-a1b8-06f7596c14e0.png)

![image](https://user-images.githubusercontent.com/27931441/153889300-6f8faffc-3f01-40de-a99d-078ca73bd6ce.png)

![image](https://user-images.githubusercontent.com/27931441/153889345-016d432a-1afe-4ad6-90e9-d37994e69fa1.png)

![image](https://user-images.githubusercontent.com/27931441/153891491-8ebf3f43-8f0e-40bd-b326-c6396cbae835.png)

![image](https://user-images.githubusercontent.com/27931441/153891468-8f83f254-4e15-4413-8c86-d527dce5cd20.png)







