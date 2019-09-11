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