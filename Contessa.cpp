#include "Contessa.hpp"

using namespace std;

namespace coup {

    Contessa::Contessa(Game g, string name_player){}
    void Contessa::tax(){}
    void Contessa::block(Player){}
    void Contessa::coup(Player player) {}
    void Contessa::foreign_aid(){}
    void Contessa::income(){} 
    string Contessa::role(){
        return "Contessa";
    }
    int Contessa::coins(){
        return 0;
    } 
}