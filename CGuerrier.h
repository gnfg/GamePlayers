//
//  CGuerrier.h
//  VisionTest
//
//  Created by Frank Giresse Gadjui Nianga on 17/11/2022.
//

#ifndef CGuerrier_h
#define CGuerrier_h

#include <stdio.h>
#include <iostream>
#include "CPersonnage.h"

#endif /* CGuerrier_h */


class CGuerrier : public CPersonnage
{
//------------------------------------------------------------------------
//------------------------------------------------------------------------
//------------------------------------------------------------------------
#pragma region  creation heritier du personnage de jeu de role
#pragma endregion
//------------------------------------------------------------------------
#pragma region attribut membre
//------------------------------------------------------------------------
    
//------------------------------------------------------------------------
#pragma endregion initialisation des attributs membres
//------------------------------------------------------------------------
#pragma region méthode
//------------------------------------------------------------------------
public:
    void frapperAvecUnArme() const;
    void sePresenter() const;
//------------------------------------------------------------------------
#pragma endregion initialisation des méthodes membres
//------------------------------------------------------------------------
#pragma region constructeur
//------------------------------------------------------------------------
public:
    CGuerrier();
    CGuerrier(std::string nom);
    ~CGuerrier();
//------------------------------------------------------------------------
#pragma endregion initialisation des méthodes membres

};
