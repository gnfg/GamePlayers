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
CPersonnage::CPersonnage() : m_vie(100), m_mana(100), m_arme(0)
{
    m_arme = new CArme(); // allocation dynamique de la mémoire
}

CPersonnage::~CPersonnage()
{
    delete m_arme;
}
// ------------------------------------------------------------------------
#pragma endregion définition du constructeur de base
// ------------------------------------------------------------------------
#pragma region surcharge constructeur
// ------------------------------------------------------------------------
CPersonnage::CPersonnage(std::string nomArme, int niveauDegat): m_vie(100), m_mana(100), m_arme(0)
{
    m_arme = new CArme(nomArme, niveauDegat); // addresse de lobjet créer, stocée dans le pointeur  m_arme
}
// ------------------------------------------------------------------------
#pragma endregion définition de la surcharge
// ------------------------------------------------------------------------
#pragma region constructeur de copie
// ------------------------------------------------------------------------
CPersonnage::CPersonnage(CPersonnage const& autre): m_vie(autre.m_vie), m_mana(autre.m_mana), m_arme(0)
{
    m_arme = new CArme(*(autre.m_arme));  // objet, pas adresse
}

// constructeur de copie different de operateur=
CPersonnage& CPersonnage::operator=(CPersonnage const& person)
{
    if(this != &person)
    //Vérifier que l'objet n'est pas le même que celui reçu en argument
        {
            m_vie = person.m_vie;
            m_mana = person.m_mana;
            delete m_arme;
            m_arme = new CArme(*(person.m_arme));
        }
        return *this; //On renvoie l'objet lui-même
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
    cible.recevoirDegat(m_arme->getDegats());
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
    m_arme->changer(newArme, degatNewArme);
}

bool CPersonnage::estVivant() const
{
 return m_vie > 0;
}

void CPersonnage:: information() const
{
    
    cout << " niveau de vie : " << m_vie << endl;
    cout << " niveau de maggie : " << m_mana << endl;
    m_arme->afficher();
    
}
// ------------------------------------------------------------------------
#pragma endregion  definition fonction membre de la classe
// ------------------------------------------------------------------------


