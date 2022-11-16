//
//  Arme.hpp
//  VisionTest
//
//  Created by Frank Giresse Gadjui Nianga on 16/11/2022.
//

#ifndef CArme_h
#define CArme_h

#include <stdio.h>
#include <iostream>
#endif /* Arme_h */


class CArme
{
//------------------------------------------------------------------------
//------------------------------------------------------------------------
//------------------------------------------------------------------------
#pragma region  creation Arme du personnage de jeu de role
#pragma endregion
//------------------------------------------------------------------------
#pragma region attribut membre
//------------------------------------------------------------------------
private:
    std::string m_nom;
    int m_degat;
//------------------------------------------------------------------------
#pragma endregion initialisation des attributs membres
//------------------------------------------------------------------------
#pragma region méthode
//------------------------------------------------------------------------
public:
    void changer(std::string nom, int degat);
    void afficher() const;
    int getDegats() const;
//------------------------------------------------------------------------
#pragma endregion initialisation des méthodes membres
//------------------------------------------------------------------------
#pragma region constructeur
//------------------------------------------------------------------------
public:
    CArme(std::string nom, int degat);
    CArme();
    ~CArme();
//------------------------------------------------------------------------
#pragma endregion initialisation des méthodes membres

};
