#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream";
#include "string";
#include "CDonne.h";
#include "IHM.h";
#include "CJoueur.h";
#include "CPartie.h";
using namespace std;

CPartie::CPartie(CJoueur& LesJoueurs, int nDonne) 
{
	nbDonne = nDonne;
	Joueurs = &LesJoueurs;
	lesDonnes = new CDonne*[nbDonne];
	for (int i = 0; i < nbDonne; i++)
		lesDonnes[i] = new CDonne();

}
CPartie::~CPartie()
{
	for (int i = 0; i < nbDonne; i++)
		delete lesDonnes[i];
	delete[] lesDonnes;
}