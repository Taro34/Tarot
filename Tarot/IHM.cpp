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

IHM::IHM(string Nom, int Score)
{
	for (int i = 0; i < 4; i++)
		lesJoueurs[i] = new CJoueur(Nom, Score);
	laPartie = new CPartie();
}
IHM::~IHM()
{
	delete laPartie;
	for (int i = 0; i < 4; i++)
		delete lesJoueurs[i];
}