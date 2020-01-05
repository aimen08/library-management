#include "Abonne.h"

void Abonne::setId(int id)
{
num_id = id;
}
void Abonne::setNom(string s)
{
nom = s;
}
void Abonne::setNumAbon(int num)
{
num_abonnement = num;
}

int Abonne::getId()
{
return num_id;
}
string Abonne::getNom()
{
return nom;
}
int Abonne::getNumAbonnement()
{
return num_abonnement;
}

string Abonne::getTitre_ouvrage()
{
return titre_ouvrage_emprunter;
}
void Abonne::setTitre_ouvrage(string s)
{
titre_ouvrage_emprunter = s;
}
