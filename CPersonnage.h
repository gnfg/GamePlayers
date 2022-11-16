//
//  CPersonnage.h
//  VisionTest
//
//  Created by Frank Giresse Gadjui Nianga on 15/11/2022.
//

#ifndef CPersonnage_h
#define CPersonnage_h

#include <stdio.h>
#include <iostream>
#include "CArme.h"
#endif /* CPersonnage_h */


class CPersonnage{
//------------------------------------------------------------------------
//------------------------------------------------------------------------
#pragma region  creation Personnage de jeu de role  #pragma endregion
//------------------------------------------------------------------------
//------------------------------------------------------------------------
#pragma region attribut membre
//------------------------------------------------------------------------
private:
    int m_vie = 100;
    int m_mana = 100;
    CArme m_arme; // encapsulation: associer une classe a une autre
    std::string m_nomJoueur;
//------------------------------------------------------------------------
#pragma endregion initialisation des attributs membres
//------------------------------------------------------------------------
#pragma region fonction menbre
//------------------------------------------------------------------------
public:
    void recevoirDegat(int nbDegat);
    void attaquer(CPersonnage &cible);
    void boirePotionDeVie(int qtePotion);
    void changerArme(std::string newArme, int degatNewArme);
    bool estVivant() const;
    std::string getNomJoueur(CPersonnage &cible);
    void information() const;
//------------------------------------------------------------------------
#pragma endregion initialisation des methode membres
//------------------------------------------------------------------------
#pragma region constructeur + surcharge + copie CPersonnage
//------------------------------------------------------------------------
public:
    CPersonnage();
    ~CPersonnage();
    CPersonnage(std::string nomArme, int niveauDegat);
    CPersonnage(CPersonnage const& autre);
//------------------------------------------------------------------------
#pragma endregion initialisation du constructeur de CPersonnage
//------------------------------------------------------------------------

};
