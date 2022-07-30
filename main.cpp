#include "Game/SnakeGame.h"
#include "Game/SnakeGameVisualiser.h"

int main() {
    using namespace sng;
    using namespace std;

    SnakeGame snakeGame(30, 30, 100, false);
    snakeGame.spawnApple();
    snakeGame.spawnApple();
    SnakeGameVisualiser snakeGameVisualiser(snakeGame);
    snakeGameVisualiser.run(10);    
}