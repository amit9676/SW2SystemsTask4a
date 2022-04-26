#pragma once
#include <vector>
#include <string>
#include <queue>

using namespace std;
namespace coup{
    class Game
    {
        private:
            //vector<string> player;
            priority_queue<string> player;
            //string turns;
        public:
            Game();
            ~Game();
            static string turn();
            static vector<string> players();
            static string winner();
    };
}