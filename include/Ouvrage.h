#ifndef OUVRAGE_H
#define OUVRAGE_H

#include <string>
using namespace std;

class Ouvrage
{
    string titre;
    string date_de_creation;
    bool existence = true;

    public:
        void setTitre(string s);
        void setDate(string s);
        string getTitre();
        string getDate();
        bool getExistence();
        void setExistence(bool b);

};

#endif /
