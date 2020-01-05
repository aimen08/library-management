#ifndef LIVRE_H
#define LIVRE_H
#include "Ouvrage.h"


class Livre:public Ouvrage
{
    string auteur;
    public:
        void setAuteur(string s);
        string getAuteur();



};

#endif
