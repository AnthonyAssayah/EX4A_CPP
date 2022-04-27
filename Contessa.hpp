#pragma once
#include "Player.hpp"

namespace coup {

    class Contessa: public Player {

        public:
            Contessa(Game g, string name_player);//: Player(g, "Contessa") {}
            void tax();
            void block(Player);
            void coup(Player player);
            void foreign_aid();
            void income();
            string role();
            int coins ();


    };
}