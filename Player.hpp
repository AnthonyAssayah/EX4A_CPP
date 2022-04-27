#pragma once
#include "Game.hpp"
#include <iostream>
#include <vector>

using namespace std;

namespace coup {

    class Player {


        protected:
            Game game;
            string player_role;
            string name_player;
            bool is_playing;
            int money;
           

        public:
            Player();
            Player(Game g, string name);
            void income();
            void foreign_aid();
            virtual void coup(Player player);
            virtual string role();
            int coins();

    };
}