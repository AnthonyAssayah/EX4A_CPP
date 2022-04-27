#pragma once
#include "Player.hpp"

using namespace std;

namespace coup {

    class Duke: public Player {

        public:
            Duke(Game g, string name_player);//: Player(g, "Duke") {}
            void tax();
            void block(Player player);
            void coup(Player player);
            void foreign_aid();
            void income();
            string role();
            int coins ();

    };
}

