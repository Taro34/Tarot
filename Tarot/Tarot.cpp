#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "string"
#include "CDonne.h"
#include "CJoueur.h"
#include "CPartie.h"
#include "IHM.h"
using namespace std;

void main() {
	IHM ihm;
	ihm.saisirjoueur();
	CDonne saisie_contrat;
	CDonne point;
	saisie_contrat.saisie_prise();
	point = saisie_contrat;
	point.calculpoints();
}





