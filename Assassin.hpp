#pragma once
#include "Game.hpp"
#include "Player.hpp"
using namespace std;
namespace coup{
    class Assassin : public Player{
        private:
            //bool specialCoup;

        public:
        Assassin(const Game&, const string&);
        //void assasination(Game game, string target);
        void coup(const Player&);
        ~Assassin();

    };
}