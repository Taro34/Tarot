#pragma once
#include "stdafx.h"
#include "CJoueur.h"
#include "CDonne.h"

class CPartie
{  private:
		CDonne **lesDonnes;
		CJoueur *lesJoueurs[4];
		int nbDonne;

	public:
		CPartie(CJoueur* lesJoueurs[]);
		~CPartie();
		void creerDonnes(CJoueur* leDonneur);
	
};