//#include "Player.hpp" 
#include <string>
//#include "Game.hpp"
#include "Captain.hpp"
#include "Player.hpp"

using namespace std;
namespace coup{
    Captain::Captain(const Game& game, const string& name):Player(game,name){

    }

    Captain::~Captain(){}

    void Captain::steal(const Player& player){
        
    }

    void Captain::block(const Player& player){
    }

}