#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"
#include "iostream"
#include "string"
#include "CDonne.h"


CDonne::CDonne(Cjoueur& LeDonneur, Cjoueur& LePreneur, Cjoueur& LesDefenseurs)
{
	leDonneur = &LeDonneur;
	lePreneur = &LePreneur;
	lesDefenseurs = &LesDefenseurs;

}