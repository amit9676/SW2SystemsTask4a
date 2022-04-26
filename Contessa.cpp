#include "Contessa.hpp" 
#include "Player.hpp"
#include <string>

using namespace std;
namespace coup{
    Contessa::Contessa(const Game& game, const string& name):Player(game,name){

    }

    Contessa::~Contessa(){}

    void Contessa::block(const Player& player){
    }


}