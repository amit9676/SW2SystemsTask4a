
#include <string>
#include "Ambassador.hpp"
#include "Player.hpp"

using namespace std;
namespace coup{
    Ambassador::Ambassador(const Game& game, const string &name):Player(game,name){
    }

    Ambassador::~Ambassador(){}

    void Ambassador::block(const Player& player){
    }

    void Ambassador::transfer(const Player& giver, const Player& reciever){

    }

}