#include <iostream>
#include "Player.hpp"
#include <stdexcept>
#include <vector>

using namespace std;

namespace coup {

    Player::Player(){}
    Player::Player(Game g, string name){}
    void Player::income(){}
    void Player::foreign_aid(){}
    void Player::coup(Player player) {}
    string Player::role() {
        return " ";
    }
    int Player::coins(){
        return 0;
    }
    

}