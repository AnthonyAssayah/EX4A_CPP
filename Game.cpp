#include <iostream>
#include "Game.hpp"
#include <stdexcept>
#include <vector>

using namespace std;

namespace coup {

    string Game::turn() {

        return "";
    }

    vector<string> Game::players(){

    // for(size_t i = 0; i < Game::players_name.size(); i++) {
    //         cout << players_name[i] << endl;
    //     } 
    return players_name;
    }

    string Game::winner() {

        return "";
    }
}