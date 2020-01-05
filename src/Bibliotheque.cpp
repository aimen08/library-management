#include "Bibliotheque.h"

void Bibliotheque::AjoutAbonne()
{
int id;
string nom;
int num_Abnt;
cout<<"Numero d'identite: ";
cin>> id;
cout<<"\nNom: ";
cin>> nom;
cout<<"\nNumero d'abonnement: ";
cin>> num_Abnt;
A.setId(id);
A.setNom(nom);
A.setNumAbon(num_Abnt);
ensemble_abonnes.push_back(A);
}





void Bibliotheque::AjoutOuvrage(int state)
{
string titre;
string date;
cout<<"Titre: ";
cin>> titre;
cout<<"\nDate de creation: ";
cin>>date;

if(state==1){
    string editeur;
    double duree;
    cout<<"\nEditeur: ";
    cin>> editeur;
    cout<<"\nDuree: ";
    cin>>duree;
    V.setDate(date);
    V.setDuree(duree);
    V.setEditeur(editeur);
    V.setTitre(titre);
    ensemble_videos.push_back(V);
}
    if(state ==2){
    string auteur;
    cout<<"\nAuteur: ";
    cin>> auteur;
    L.setAuteur(auteur);
    L.setDate(date);
    L.setTitre(titre);
    ensemble_livres.push_back(L);
}

}

void Bibliotheque::getOuvrage(string titre)
{
int state =0;
for(auto it = ensemble_videos.begin();it<ensemble_videos.end();it++){
        if(it->getTitre() == titre){
          cout<<"\t\t\t\t======================== "<<endl;
          cout<<"\t\t\t\t\tType d'Ouvrage (Video)"<<endl;
          cout<< "\t\t\t\t\tTitre :" <<it->getTitre()<<endl;
          cout<< "\t\t\t\t\tDate de creation :" <<it->getDate()<<endl;
          cout<< "\t\t\t\t\tDisponiblity :" <<it->getExistence()<<endl;
          cout<< "\t\t\t\t\tEditeur :" <<it->getEditeur()<<endl;
          cout<< "\t\t\t\t\tDuree :" <<it->getDuree()<<endl;
          state =1;
          break;

        }
    }
if(state==0){
    for(auto it = ensemble_livres.begin();it<ensemble_livres.end();it++){
        if(it->getTitre() == titre){
          cout<<"\t\t\t\t======================== "<<endl;
          cout<<"\t\t\t\t\tType d'Ouvrage (Livre)"<<endl;
          cout<< "\t\t\t\t\tTitre :" <<it->getTitre()<<endl;
          cout<< "\t\t\t\t\tDate de creation :" <<it->getDate()<<endl;
          cout<< "\t\t\t\t\tDisponiblity :" <<it->getExistence()<<endl;
          cout<< "\t\t\t\t\tAuteur :" <<it->getAuteur()<<endl;
          state =1;
          break;

        }
    }
if(state ==0){
    cout<<"\t\t=============Ouvrage n'exist pas dans la Bibliotheque=========== "<<endl;
}

}
}

void Bibliotheque::getAbonne(int id)
{
    int state =0;
    for(auto it = ensemble_abonnes.begin();it<ensemble_abonnes.end();it++){
        if(it->getId() == id){
          cout<<"\t\t\t=============================================================== "<<endl;
          cout<< "\t\t\t\t\tNom :" <<it->getNom()<<endl;
          cout<< "\t\t\t\t\tNumero d'identite :" <<it->getId()<<endl;
          cout<< "\t\t\t\t\tNumero d'abonnement :" <<it->getNumAbonnement()<<endl;
          cout<< "\t\t\t\t\tOuvrage Emprunter :" <<it->getTitre_ouvrage()<<endl;
          state =1;
          break;
        }
        }
         if(state == 0){
            cout<<"\t\t=============Abonne n'exist pas dans la Bibliotheque=========== "<<endl;

          }


}

void Bibliotheque::emprunter(string titre,int id,int state)
{
 if(state == 1){
   for(auto it = ensemble_videos.begin();it<ensemble_videos.end();it++){
        if(it->getTitre() == titre){
            if(it->getExistence()){
                for(auto itt = ensemble_abonnes.begin();itt<ensemble_abonnes.end();itt++){
                        if(itt->getTitre_ouvrage()==""){
                            itt->setTitre_ouvrage(titre);
                            it->setExistence(false);
                        }else{
                         cout<< "un abonne peut prendre a la fois un seul ouvrage"<<endl;
                        }

                }

            }else{
            cout<< "ouvrage ne pas disponible"<<endl;
            }

        }else{
          cout<< "Video n'exist pas dans la Bibliotheque"<<endl;

        }
    }
 }else if(state == 2){
   for(auto it = ensemble_livres.begin();it<ensemble_livres.end();it++){
        if(it->getTitre() == titre){
            if(it->getExistence()){
                for(auto itt = ensemble_abonnes.begin();itt<ensemble_abonnes.end();itt++){
                        if(itt->getTitre_ouvrage()==""){
                            itt->setTitre_ouvrage(titre);
                            it ->setExistence(false);
                        }else{
                         cout<< "un abonne peut prendre a la fois un seul ouvrage"<<endl;
                        }

                }

            }else{
            cout<< "ouvrage ne pas disponible"<<endl;
            }

        }else{
          cout<< "Livre n'exist pas dans la Bibliotheque"<<endl;

        }
    }

 }
}

void Bibliotheque::rendre(int id)
{
string temp;
int e=0;
 for(auto it = ensemble_abonnes.begin();it<ensemble_abonnes.end();it++){
        if(it->getId() == id){
          temp = it->getTitre_ouvrage();
          it->setTitre_ouvrage("");
          for(auto itt = ensemble_videos.begin();itt<ensemble_videos.end();itt++){
                if(itt->getTitre() == temp){
                    itt->setExistence(true);
                    e=1;
                    break;
                }
            }
          if(e==0)
          for(auto itt = ensemble_livres.begin();itt<ensemble_livres.end();itt++){
                 if(itt->getTitre() == temp){
                    itt->setExistence(true);
                    e=1;
                    break;
                }
            }
            cout<<"\t\t\tRendre avec succes"<<endl;
        }
        }

}

void Bibliotheque::info()
{
    cout<<"\t\t\t\t\======Les Ouvrages====== "<<endl;
    cout<<"\t\t\t\t\tLivres:"<<endl;
    for(auto it = ensemble_livres.begin();it<ensemble_livres.end();it++){
        cout<<"\t\t\t\t\t"<<it->getTitre()<<endl;
    }
    cout<<"\t\t\t\t======================== "<<endl;
    cout<<"\t\t\t\t\tVideos:"<<endl;
    for(auto it = ensemble_videos.begin();it<ensemble_videos.end();it++){
        cout<<"\t\t\t\t\t"<<it->getTitre()<<endl;
    }


    cout<<"\t\t\t\t======================== "<<endl;
    cout<<"\t\t\t\t======Les Abonnes====== "<<endl;
    for(auto it = ensemble_abonnes.begin();it<ensemble_abonnes.end();it++){
        if(!(it->getTitre_ouvrage()==""))
        cout<<"\t\t\t\t\t"<<it->getNom()<<endl;
    }
}


