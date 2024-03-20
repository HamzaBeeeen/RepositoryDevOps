
#include <iostream>
#include <string>
using namespace std;

class DateEmbauche {
protected :
int jour;
int mois;
int annee;
 public :
 DateEmbauche ();
 DateEmbauche (int , int , int );
 ~DateEmbauche ();
 void setjour (int);
 void setmois (int);
 void setannee (int);
 int getjour ();
 int getmois ();
 int getannee ();
 };

class Employee:public DateEmbauche {
 int code;
 string nom;
 int nmbrheures;
 float tauxRemuniration;
 public :
 Employee();
 Employee(int, int, int, int, string, int, float);
 ~Employee();
 void setcode (int);
 void setnom (string);
 void setnmbrheures (int);
 void settauxRemuniration (float);
 int getcode ();
 string getnom ();
 int getnmbrheures();
 float gettauxRemuniration();
 void saisir ();
 void afficher ();
 float calculer ();
};



class vendeur: public Employee{
    float montantVentes;
    float pourcentage;
public :
vendeur ();
vendeur (int, int, int, int, string, int, float, float, float);
~vendeur ();
void setmontantVentes (float);
void setpourcentage (float);
float getmontantVentes ();
float getpourcentage ();
void saisir ();
void afficher ();
float calculer ();
};
