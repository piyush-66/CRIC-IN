#include "game.h"
using namespace std;
 
int main(){
    Game game;
    game.welcome();
    game.enter();
    game.pool();
    game.enter();
    game.selectPlayers();
    game.takeIntegerInput();
    game.showSelectedPlayers();
    game.toss();
    game.startFirstInnings();
    game.startSecondInnings();
    game.winner();
    game.summary();
    return 0;
}