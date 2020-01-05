#include "Video.h"

void Video::setEditeur(string s)
{
    editeur = s;

}
void Video::setDuree(double s)
{
    duree = s;
}

string Video::getEditeur()
{
    return editeur;
}
double Video::getDuree()
{
    return duree;
}
