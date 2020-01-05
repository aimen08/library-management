#include <iostream>
#include "Ouvrage.h"
#include "Video.h"
#include "Livre.h"
#include "Bibliotheque.h"
using namespace std;

int main()
{
    int i =1;
    int c ;
    string titre;
    int state;
    int id;
    Bibliotheque B;

    while(i==1){

        cout<<"\t\t\t===============Main Menu===================="<<endl;
        cout<<"\t\t\t---------------Options-----------------------\n\n\n\n";
        cout<<"1-->AjouteOuvrage."<<endl;
        cout<<"2-->AjouteAbonne."<<endl;
        cout<<"3-->GetOuvrage."<<endl;
        cout<<"4-->GetAbonne."<<endl;
        cout<<"5-->Emprunter."<<endl;
        cout<<"6-->Rendre."<<endl;
        cout<<"7-->info."<<endl;
        cout<<"8-->Exit."<<endl;
        cout<<"Choose option: ";
        cin>>c;
        switch(c)
        {
            case 1 :
                cout<<"1--->Video"<<endl;
                cout<<"2--->Livre"<<endl;
                cin>>state;
                B.AjoutOuvrage(state);
                break;
            case 2 :
                B.AjoutAbonne();
                break;
            case 3 :
                cout<<"Titre D'ouvrage: ";
                cin>>titre;
                B.getOuvrage(titre);
                break;
            case 4:
                cout<<"Numero d'identite: ";
                cin>>id;
                B.getAbonne(id);
                break;
            case 5 :
                cout<<"1--->Emprunter Video"<<endl;
                cout<<"2--->Emprunter Livre"<<endl;
                cin>>state;
                cout<<"Titre D'ouvrage emprunter :";
                cin>>titre;
                cout<<"Numero d'identite :";
                cin>>id;
                B.emprunter(titre,id,state);
                break;
            case 6 :
                cout<<"Numero d'identite :";
                cin>>id;
                B.rendre(id);
                break;
            case 7 :
                B.info();
                break;
            case 8 :
                i=0;
                break;
        }

   }

    return 0;
}
