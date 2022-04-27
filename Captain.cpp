#include "Captain.hpp"

using namespace std;

namespace coup {

    Captain::Captain(Game g, string name_player){}
    void Captain::block(Player player){}
    void Captain::steal(Player player){}
    void Captain::coup(Player player) {}
    void Captain::foreign_aid(){}
    void Captain::income(){} 
    string Captain::role(){
        return "Captain";
    }
    int Captain::coins(){
        return 0;
    }
}