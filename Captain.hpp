#pragma once
#include "Game.hpp"
#include "Player.hpp"
using namespace std;
namespace coup{
    class Captain : public Player{
        private:

        public:
        Captain(const Game& game, const string&);
        void steal(const Player&);
        void block(const Player&);
        ~Captain();

    };
}