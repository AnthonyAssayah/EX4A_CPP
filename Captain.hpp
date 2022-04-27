#pragma once
#include "Player.hpp"

namespace coup {

    class Captain: public Player {

        public:
            Captain(Game g, string name_player);//: Player(g, "Captain") {}
            void block(Player player);
            void steal(Player player);
            void coup(Player player);
            void foreign_aid();
            void income();
            string role();
            int coins ();


    };
}