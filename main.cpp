//
//  main.cpp
//  VisionTest
//
//  Created by Frank Giresse Gadjui Nianga on 15/11/2022.
//

#include <iostream>
using namespace std;

#include "CPersonnage.h"


int main(int argc, const char * argv[]) {
// ------------------------------------------------------------------------
#pragma region jeu de role
// ------------------------------------------------------------------------
    CPersonnage david;
    CPersonnage Max("bombe H", 70);
    CPersonnage Eliote(david); // CPersonnage Eliote = david
    CPersonnage goliath("Épée aiguisée", 15);
    CPersonnage Mateo(goliath);
    //Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(0);
    goliath.attaquer(david);
    david.attaquer(goliath);
    Mateo.changerArme("Epée Escalibur", 35);
    Eliote.changerArme("mitraette", 10);
    goliath.changerArme("Double hache tranchante", 20);
    Eliote.attaquer(Mateo);
    goliath.attaquer(david);
    Max.attaquer(Eliote);
    //Temps mort ! Voyons voir la vie de chacun...
    cout << " David: << " << endl;
    david.information();
    cout << " >> " << endl;
    cout << " Goliath: << " << endl;
    goliath.information();
    cout << " >> " << endl;
    cout << " Mateo : << " << endl;
    Mateo.information();
    cout << " >> " << endl;
    cout << " Eliote : << " << endl;
    Eliote.information();
    cout << " >> " << endl;
    cout << " Max : << " << endl;
    Max.information();
    cout << " >> " << endl;
// ------------------------------------------------------------------------
#pragma endregion définition partie de jeu
// ------------------------------------------------------------------------
    return 0;
}


