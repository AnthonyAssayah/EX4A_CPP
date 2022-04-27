#pragma once
#include "Player.hpp"

namespace coup {

    class Assassin: public Player {

        public:
            Assassin(Game g, string name_player);//: Player(g, "Assassin") {}
            void coup(Player player);
            void foreign_aid();
            void income();
            string role();
            int coins ();
           
    };
}