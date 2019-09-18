#pragma once
#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "string"
#include "CPartie.h"
#include "CJoueur.h"


using namespace std;

class IHM
{
	private:
		CJoueur *lesJoueurs[4];
		CPartie *laPartie;
		int numDonneur;

	public:
		void saisirjoueur();
		void saisie_contrat();
		void creer_partie();
		~IHM();
		IHM();
};