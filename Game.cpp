#include <string>
#include "Game.hpp"
#include <iostream>

using namespace std;
namespace coup{
    Game::Game(){

    }

    Game::~Game(){}

    vector<string> Game::players(){
        vector<string> players;
        return players;
    }

    string Game::winner(){
        return " ";
        
    }

    string Game::turn(){
        return "amit";
    }

}