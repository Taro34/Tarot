#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "string"
#include "CDonne.h"


CDonne::CDonne()
{
}

void CDonne::saisie_prise()
{
	string NomPreneur;
	bool Passe;
	int test;
	cout << "Est ce que quelqu'un a pris ? :\n 1 : oui \n 2 : non\n ";
	cin >> test;
	if (test == 1)
		Passe = true;
	else
		Passe = false;

	if (Passe == true)
	{
		int Contrat;
		cout << "Entrez le nom du Preneur : ";
		cin >> NomPreneur;

		cout << "1 : prise\n";
		cout << "2 : garde\n";
		cout << "3 : garde sans\n";
		cout << "4 : garde contre\n";
		cout << "Entrez le Contrat : ";
		cin >> Contrat;

		switch (Contrat)
		{
		case 1:
			typeContrat = prise;
			break;
		case 2:
			typeContrat = garde;
			break;
		case 3:
			typeContrat = gardeSans;
			break;
		case 4:
			typeContrat = GardeContre;
			break;

		}
		cout << "La partie commence !!!\n";
		cout << NomPreneur;
		cout << " a pris une ";
		switch (typeContrat)
		{
		case prise:
			cout << "prise\n";
			break;
		case garde:
			cout << "garde\n";
			break;
		case gardeSans:
			cout << "garde sans\n";
			break;
		case GardeContre:
			cout << "garde contre\n";
			break;
		}
		cout << "La partie ce passe...\n";
		cout << "Nombre de point de ";
		cout << NomPreneur;
		cout << " : ";
		cin >> points;
		cout << "Nombre de bout : ";
		cin >> nbBouts;
	}
	else
	{
		cout << "Personne n'a pris... Redistribution\n";
		typeContrat = passe;
	}
}


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
void CDonne::calculpoints()
{
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
	if (nbpoint_en_plus >= 0)
		nbPoints = (25 + nbpoint_en_plus) * coef_contrat;
	else
		nbPoints = (-25 + nbpoint_en_plus) * coef_contrat;
	cout << nbPoints;
	cout << "\n";
	//lePreneur->majScore(nbPoints * 3);
	//for (int i = 0; i < 3; i++)
		//lesDefensseurs[i]->majScore(-nbPoints);
	
}

