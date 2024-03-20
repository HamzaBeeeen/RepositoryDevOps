#include <iostream>
#include <string>
#include "tp.h"
using namespace std;



DateEmbauche::DateEmbauche (){}
DateEmbauche::DateEmbauche (int jr, int mo, int ann){
    jour = jr;
    mois = mo;
    annee =ann;
}
DateEmbauche::~DateEmbauche (){}
void DateEmbauche::setjour (int jr){
    jour = jr;
}
void DateEmbauche::setmois (int mo){
    mois = mo;
}
void DateEmbauche::setannee (int ann){
    annee = ann;
}
int DateEmbauche::getjour (){
    return jour;
}
int DateEmbauche::getmois (){
    return mois;
}
 int DateEmbauche::getannee (){
    return annee;
}


Employee::Employee():DateEmbauche(0,0,0){
code =0;
nom ="hamza";
nmbrheures=0;
tauxRemuniration=0;
}
Employee::Employee(int jr, int mo , int ann, int a, string b, int c, float d):DateEmbauche(jr,mo,ann){
    code = a;
    nom = b;
    nmbrheures = c;
    tauxRemuniration = d;
}
Employee::~Employee(){}
void Employee::setcode (int a){
    code = a;
}
void Employee::setnom (string b){
    nom = b;}
void Employee::setnmbrheures (int c){
    nmbrheures = c;
}
void Employee::settauxRemuniration (float d){
    tauxRemuniration = d;
}
int Employee::getcode (){
    return code;
}
string Employee::getnom (){
    return nom;
}
int Employee::getnmbrheures(){
    return nmbrheures;
}
float Employee::gettauxRemuniration(){
    return tauxRemuniration;
}
void Employee::saisir (){
    cin >> code ;
    cin >> nom ;
    cin >> nmbrheures;
    cin >> tauxRemuniration;
}
float Employee::calculer (){
    return nmbrheures * tauxRemuniration;
}
void Employee::afficher (){
    cout << code <<endl;
    cout << nom <<endl;
    cout << nmbrheures <<endl;
    cout << tauxRemuniration<<endl;
    cout << calculer() <<endl;
}


vendeur::vendeur (){}
vendeur::vendeur(int jr, int mo , int ann, int a, string b, int c, float d, float e, float f):Employee(jr, mo, ann, a, b, c,d ){
 montantVentes = e;
 pourcentage = f;
}
vendeur::~vendeur(){}
void vendeur::setmontantVentes (float e){
    montantVentes = e;
}
void vendeur::setpourcentage (float f){
    pourcentage = f;
    }

float vendeur::getmontantVentes (){
    return montantVentes;
}
float vendeur::getpourcentage (){
    return pourcentage;
}
void vendeur::saisir (){
    Employee::saisir();
    cin >> montantVentes;
    cin >> pourcentage;
}
float vendeur::calculer (){
    return montantVentes * pourcentage;
}
void vendeur::afficher (){
    Employee::afficher();
    cout << montantVentes<<endl;
    cout << pourcentage <<endl;
    cout << calculer();
}
