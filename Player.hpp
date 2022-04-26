#pragma once
#include "Game.hpp"
using namespace std;
namespace coup{
    class Player{
        private:
            
        protected:
            string name;
            string role1;
            int coin;
            bool turn;
        public:
            Player(const Game&, const string&);
            Game game;
            void income();
            void foreign_aid();
            virtual void coup(const Player& name);
            static string role();
            static string coins();
            ~Player();

        
    };
}