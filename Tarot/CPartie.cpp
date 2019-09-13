#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "string"
#include "IHM.h"
#include "CPartie.h"
using namespace std;

CPartie::CPartie(CJoueur* lesJoueurs[]) 
{
	for (int i = 0; i < 4; i++)
	{
		this->lesJoueurs[i] = lesJoueurs[i];
	}
	lesDonnes = new CDonne;
	nbDonne = 0;

}
CPartie::~CPartie()
{
	for (int i = 0; i < nbDonne; i++)
		delete lesDonnes[i];
	delete[] lesDonnes;
}

void CPartie::creerDonnes(CJoueur * leDonneur)
{
	lesDonnes[nbDonne] = new CDonne(leDonneur);
	nbDonne++;
}


void CPartie::setPreneur(CJoueur * lePreneur)
{
	lesDonnes[nbDonne - 1]->setPreneur(lePreneur);
}

