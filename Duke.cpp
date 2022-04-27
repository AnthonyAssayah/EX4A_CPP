#include "Duke.hpp"

using namespace std;

namespace coup {

    Duke::Duke(Game g, string name_player){}
    void Duke::tax() {}
    void Duke::block(Player player){}
    void Duke::coup(Player player){}
    void Duke::foreign_aid(){}
    void Duke::income(){} 
    string Duke::role(){
        return "Duke";
    }
    int Duke::coins(){
        return 0;
    } 
       
}