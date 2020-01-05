#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include <string>
#include <vector>
#include <iostream>
#include "Video.h"
#include "Livre.h"
#include "Abonne.h"
#include <iterator>

using namespace std;

class Bibliotheque
{
    vector<Abonne> ensemble_abonnes;
    vector<Video> ensemble_videos;
    vector<Livre> ensemble_livres;
    Livre L;
    Abonne A;
    Video V;
    public:
    void AjoutAbonne();
    void AjoutOuvrage(int state);
    void getOuvrage(string titre);
    void getAbonne(int id);
    void emprunter(string t,int id,int state);
    void rendre(int id);
    void info();
};

#endif
