#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream";
#include "string";
#include "CJoueur.h";
#include "IHM.h";
#include "CPartie.h";

using namespace std;

class CDonne
{
private:
	int NbPoints;
	int NbBouts;
	int points;
	enum typeContrat { passe, prise, garde, gardeSans, GardeContre };
	enum campPoignee { preneur, personne, defenseur };
	enum typePoignee { Sans, Simple, Double, Triple };
	enum campPetitAuBout { preneur, personne, defenseur };
	enum typeChelem { sans, reussi, perdu, sansAnnonce };
	CJoueur *leDonneur;
	CJoueur **lePreneur;
	CJoueur *lesDefensseurs[3];

public:
	CDonne(Cjoueur &, Cjoueur &, Cjoueur &);
};