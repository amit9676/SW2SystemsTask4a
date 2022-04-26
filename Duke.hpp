#pragma once
#include "Game.hpp"
#include "Player.hpp"
using namespace std;
namespace coup{
    class Duke : public Player{
        private:

        public:
        Duke(const Game&, const string&);
        void taxCollect();
        void block(const Player&);
        void tax();
        ~Duke();

    };
}