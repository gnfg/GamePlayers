//
//  CArme.cpp
//  VisionTest
//
//  Created by Frank Giresse Gadjui Nianga on 16/11/2022.
//

#include "CArme.h"
#include <string>


using namespace std;

// ------------------------------------------------------------------------
#pragma region constructeur
// ------------------------------------------------------------------------
CArme::CArme()/*: m_nom("Martau Ecarlate"), m_degat(45)*/
{
    m_nom = "Martau Ecarlate";
    m_degat = 45;
}

CArme::CArme(std::string nom, int degat)/*: m_nom(nom), m_degat(degat)*/
{
    m_nom = nom;
    m_degat = degat;
}

CArme::~CArme()
{
}
// ------------------------------------------------------------------------
#pragma endregion définition du constructeur de base
// ------------------------------------------------------------------------
#pragma region methode de la CArme
// ------------------------------------------------------------------------
void CArme::changer(std::string nom, int degat)
{
    m_nom = nom;
    m_degat = degat;
}

void CArme::afficher() const
{
    cout << " nom arme : " << m_nom << endl;
    cout << " dégats arme : " << m_degat << endl;
}

int CArme::getDegats() const
{
    return m_degat;
}
// ------------------------------------------------------------------------
#pragma endregion  definition fonction membre de la classe
// ------------------------------------------------------------------------

