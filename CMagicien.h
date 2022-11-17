//
//  CMagicien.hpp
//  VisionTest
//
//  Created by Frank Giresse Gadjui Nianga on 17/11/2022.
//

#ifndef CMagicien_h
#define CMagicien_h

#include <stdio.h>
#include <iostream>
#include "CPersonnage.h"
#endif /* CMagicien_h */


class CMagicien : public CPersonnage
{
//------------------------------------------------------------------------
//------------------------------------------------------------------------
//------------------------------------------------------------------------
#pragma region  creation heritier du personnage de jeu de role
#pragma endregion
//------------------------------------------------------------------------
#pragma region attribut membre
//------------------------------------------------------------------------
private:
    int m_mana;
//------------------------------------------------------------------------
#pragma endregion initialisation des attributs membres
//------------------------------------------------------------------------
#pragma region méthode
//------------------------------------------------------------------------
public:
    void bouleDeFeu() const;
    void bouleDeGlace() const;
//------------------------------------------------------------------------
#pragma endregion initialisation des méthodes membres
//------------------------------------------------------------------------
#pragma region constructeur
//------------------------------------------------------------------------
public:
    CMagicien();
    CMagicien(std::string nom);
    ~CMagicien();
//------------------------------------------------------------------------
#pragma endregion initialisation des méthodes membres

};
