#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "string"
#include "IHM.h"
using namespace std;


IHM::~IHM()
{
	delete laPartie;
	for (int i = 0; i < 4; i++)
		delete lesJoueurs[i];
}
IHM::IHM()
{
	numDonneur = 0;
}
void IHM::saisirjoueur()
{

	string joueur1;
	string joueur2;
	string joueur3;
	string joueur4;

	char joueur[16];

	//1:on demande le joueur 1
	cout << "Nom du joueur 1" << endl << endl;

	cin.getline(joueur, 15);
	joueur1 = joueur;
	cout << endl;

	//2:on demande le joueur 2
	cout << "Nom du joueur 2" << endl << endl;

	cin.getline(joueur, 15);
	joueur2 = joueur;
	cout << endl;

	//3:on demande le joueur 3
	cout << "Nom du joueur 3" << endl << endl;

	cin.getline(joueur, 15);
	joueur3 = joueur;
	cout << endl;
	//4:on demande le joueur 4

	cout << "Nom du Joueur 4" << endl << endl;

	cin.getline(joueur, 15);
	joueur4 = joueur;
	cout << endl;

	lesJoueurs[0] = new CJoueur(joueur1);
	lesJoueurs[1] = new CJoueur(joueur2);
	lesJoueurs[2] = new CJoueur(joueur3);
	lesJoueurs[3] = new CJoueur(joueur4);



}
void IHM::saisie_contrat()
{
	bool Passe;
	int saisie;
	int points;
	int nbBouts;
	Contrat typeContrat;
	laPartie->creerDonnes(lesJoueurs[numDonneur%4]);
	numDonneur++;
	cout << "Est ce que quelqu'un a pris ? :\n 1 : oui \n 2 : non\n ";
	cin >> saisie;
	if (saisie == 1)
		Passe = true;
	else
		Passe = false;

	if (Passe == true)
	{
		int numPreneur;
		cout << "qui a pris :";
		cout << "\n";
		cout << "1 :";
		cout << lesJoueurs[0]->lireNom();
		cout << "\n";
		cout << "2 :";
		cout << lesJoueurs[1]->lireNom();
		cout << "\n";
		cout << "3 :";
		cout << lesJoueurs[2]->lireNom();
		cout << "\n";
		cout << "4 :";
		cout << lesJoueurs[3]->lireNom();
		cout << "\n";
		cin >> numPreneur;
		numPreneur = numPreneur - 1;
		int Contrat;
		CJoueur *lePreneur = lesJoueurs[numPreneur];
		laPartie->setPreneur(lePreneur);
		
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
		laPartie->setTypeContrat(typeContrat);
		cout << "La partie commence !!!\n";
		cout << "La partie ce passe...\n";
		cout << "Nombre de point de ";
		cout << " : ";
		cin >> points;
		cout << "Nombre de bout : ";
		cin >> nbBouts;
		laPartie->setPoint(points, nbBouts);
		laPartie->calculerDonne();
		
	}
	else
	{
		cout << "Personne n'a pris... Redistribution\n";
		typeContrat = passe;
	}

}

void IHM::creer_partie()
{
	laPartie = new CPartie(lesJoueurs);
}
