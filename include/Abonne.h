#ifndef ABONNE_H
#define ABONNE_H
#include <string>
using namespace std;

class Abonne
{
    int num_id;
    string nom;
    int num_abonnement;
    string titre_ouvrage_emprunter="";
    public:

        void setNom(string s);
        void setId(int id);
        void setNumAbon(int num);
        int getId();
        string getNom() ;
        int getNumAbonnement();
        string getTitre_ouvrage();
        void setTitre_ouvrage(string s);


};

#endif
