#include "Player.hpp" 
#include <string>
//#include "Game.hpp"

using namespace std;
namespace coup{
    Player::Player(const Game& game, const string& name){
        this->coin = 0;
        this->turn = false;
    }

    Player::~Player(){}

    void Player::income(){
        //this->coin+=1;

    }

    void Player::foreign_aid(){
        //some condition if(){
            //return
        //}
        this->coin+=2;
        
    }

    string Player::role(){
        return " ";
    }

    void Player::coup(const Player& name){}

    string Player::coins(){
        return " ";
    }

}