
#include <string>
#include "Player.hpp"
#include "Duke.hpp"

using namespace std;
namespace coup{
    Duke::Duke(const Game& game, const string& name):Player(game,name){

    }

    Duke::~Duke(){}

    void Duke::taxCollect(){
        
    }

    void Duke::block(const Player& name){
    }

    void Duke::tax(){}

}