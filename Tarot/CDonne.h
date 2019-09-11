#pragma once
#include "stdafx.h"
#include "CJoueur.h"

using namespace std;
enum Contrat { passe, prise, garde, gardeSans, GardeContre };
enum Camp { preneur, personne, defenseur };
enum Poignee { Sans, Simple, Double, Triple };
enum Chelem { sans, reussi, perdu, sansAnnonce };

class CDonne
{
private:
	Contrat typeContrat;
	Camp campPoignee;
	Camp campPetitAuBout;
	Chelem typeChelem;
	int nbPoints;
	int nbBouts;
	int points;
	CJoueur *leDonneur;
	CJoueur *lePreneur;
	CJoueur *lesDefensseurs[3];

public:
	CDonne(CJoueur*);
	void setPreneur(CJoueur *);
	void setDefenseurs(CJoueur*[]);

};