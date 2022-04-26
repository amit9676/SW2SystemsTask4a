#pragma once
#include "Game.hpp"
#include "Player.hpp"
using namespace std;
namespace coup{
    class Ambassador : public Player{
        private:

        public:
        Ambassador(const Game&, const string&);
        void transfer(const Player&, const Player&);
        void block(const Player&);
        ~Ambassador();

    };
}