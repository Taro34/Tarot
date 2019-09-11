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



void main()
{
	IHM ihm;
	ihm.saisirjoueur();
}