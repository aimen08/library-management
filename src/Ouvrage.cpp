#include "Ouvrage.h"

void Ouvrage::setTitre(string s)
{
    titre = s;

}
void Ouvrage::setDate(string s)
{
    date_de_creation = s;
}

string Ouvrage::getTitre()
{
    return titre;
}

string Ouvrage::getDate()
{
    return date_de_creation;
}

bool Ouvrage::getExistence()
{
    return existence;
}

void Ouvrage::setExistence(bool b)
{
    existence = b;
}
