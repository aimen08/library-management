#ifndef VIDEO_H
#define VIDEO_H
#include "Ouvrage.h"

class Video:public Ouvrage
{
    string editeur;
    double duree;

    public:
        void setEditeur(string s);
        void setDuree(double s);
        string getEditeur();
        double getDuree();


};

#endif
