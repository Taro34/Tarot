#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream";
#include "string";
#include "CDonne.h";
#include "CJoueur.h";
#include "CPartie.h";

using namespace std;

class IHM
{
	private:
		CJoueur *lesJoueurs[4];
		CPartie *laPartie;
};