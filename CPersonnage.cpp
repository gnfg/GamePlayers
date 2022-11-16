//
//  CPersonnage.c
//  VisionTest
//
//  Created by Frank Giresse Gadjui Nianga on 15/11/2022.
//

#include "CPersonnage.h"
#include <string>

using namespace std;

// ------------------------------------------------------------------------
#pragma region constructeur par defaut initialiser
// ------------------------------------------------------------------------
CPersonnage::CPersonnage() : m_vie(100), m_mana(100), m_arme("Couteau", 25)
{
}

CPersonnage::~CPersonnage(){
}
// ------------------------------------------------------------------------
#pragma endregion définition du constructeur de base
// ------------------------------------------------------------------------
#pragma region surcharge constructeur
// ------------------------------------------------------------------------
CPersonnage::CPersonnage(std::string nomArme, int niveauDegat): m_vie(100), m_mana(100), m_arme(nomArme, niveauDegat)
{
}
// ------------------------------------------------------------------------
#pragma endregion définition de la surcharge
// ------------------------------------------------------------------------
#pragma region constructeur de copie
// ------------------------------------------------------------------------
CPersonnage::CPersonnage(CPersonnage const& autre)
{
    m_vie = autre.m_vie;
    m_mana = autre.m_mana;
    m_arme = autre.m_arme;
}
// ------------------------------------------------------------------------
#pragma endregion recopie de lintégralité de lobjet
// ------------------------------------------------------------------------
#pragma region methode de la CPersonnage
// ------------------------------------------------------------------------
void CPersonnage::recevoirDegat(int nbDegat)
{
    m_vie -= nbDegat;
    if(m_vie < 0)
    {
        m_vie = 0;
    }
}

std::string CPersonnage::getNomJoueur(CPersonnage &cible)
{
    return cible.m_nomJoueur;
}

void CPersonnage::attaquer(CPersonnage &cible)
{
    cible.recevoirDegat(m_arme.getDegats());
    m_nomJoueur = getNomJoueur(cible);
}

void CPersonnage::boirePotionDeVie(int qtePotion)
{
    m_vie += qtePotion;
    if(m_vie > 100)
    {
        m_vie = 100;
    }
}

void CPersonnage::changerArme(string newArme, int degatNewArme)
{
    m_arme.changer(newArme, degatNewArme);
}

bool CPersonnage::estVivant() const
{
 return m_vie > 0;
}

void CPersonnage:: information() const
{
    
    cout << " niveau de vie : " << m_vie << endl;
    cout << " niveau de maggie : " << m_mana << endl;
    m_arme.afficher();
    
}
// ------------------------------------------------------------------------
#pragma endregion  definition fonction membre de la classe
// ------------------------------------------------------------------------


