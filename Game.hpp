#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace coup {

    class Game {

        public:
            vector<string> players_name;

        public:
            // Game g();
            //     if (players_name.size() < 2 || players_name.size() > 6) {
            //         throw invalid_argument("Error, must be between 2 and 6 players");
            //     };
            // }
            string turn();
            vector<string> players();
            string winner();
           
    };
}