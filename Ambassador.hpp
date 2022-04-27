#pragma once
#include "Player.hpp"

namespace coup {

    class Ambassador: public Player {

        public:
            Ambassador(Game g, string name_player);//: Player(g, "Ambassador") {}
            void transfer(Player p1, Player p2);
            void coup(Player player);
            void foreign_aid();
            void income();
            string role();
            int coins ();
            
    };
}