#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "string"
#include "IHM.h"
#include "CPartie.h"


using namespace std;
	
class CJoueur
{
private:
	string nom;
	int score;

public:
	string lireNom();
	int lireScore();
	int majScore();
};