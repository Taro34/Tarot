#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "string"
#include "CDonne.h"


CDonne::CDonne(CJoueur* leDonneur)
{
	this->leDonneur = leDonneur;

}

void CDonne::setPreneur(CJoueur * preneur)
{
	lePreneur = preneur;
}
void CDonne::setDefenseurs(CJoueur * defenseur[])
{
	for (int i = 0; i < 3; i++)
	{
		lesDefensseurs[i] = defenseur[i];
	}
}
void CDonne::calculpoints(int nbBouts, int nbPoints, CJoueur * lePrenneur, Contrat typeContrat)
{
	int nbpoint_a_faire;
	int nbpoint_en_plus;
	int points;
	int coef_contrat;
	switch (nbBouts)
	{
	case 0:
		nbpoint_a_faire = 56;
		break;
	case 1:
		nbpoint_a_faire = 51;
		break;
	case 2:
		nbpoint_a_faire = 41;
		break;
	case 3:
		nbpoint_a_faire = 36;
		break;
	}
	switch (typeContrat)
	{
	case prise:
		coef_contrat = 1;
		break;
	case garde:
		coef_contrat = 2;
		break;
	case gardeSans:
		coef_contrat = 4;
		break;
	case GardeContre:
		coef_contrat = 6;
		break;
	}
	nbpoint_en_plus = points - nbpoint_a_faire;
	if (nbpoint_en_plus <= 0)
	{
		nbPoints = (25 + nbpoint_en_plus) * coef_contrat;
		
	}
	else
	{
		nbPoints = (-25 - nbpoint_en_plus) * coef_contrat;

	}
	lePreneur->majScore(nbPoints * 3);
	for (int i = 0; i < 3; i++)
		lesDefensseurs[i]->majScore(-nbPoints);
	
}