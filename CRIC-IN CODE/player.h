#include <string>
using namespace std;

class Player{
    public:
        Player(); //declare constructor 
        string name;
        int index;
        int runsScored;
        int ballsPlayed;
        int ballsBowled;
        int runsGiven;
        int wicketsTaken;
};

Player::Player() // definition of constructor 
{
    runsScored=0;
    ballsPlayed=0;
    ballsBowled=0;
    runsGiven=0;
    wicketsTaken=0;
};

