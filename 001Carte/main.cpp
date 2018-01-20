#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Carte{
    string titlu_carte;
    string autor1;
    string autor2;
    string autor3;
    string editura;
    int an_aparitie;
    int nr_pagini;
public:
    //Constructorii clasei
    Carte(){}
    Carte(string tc, string aut1, string aut2, string aut3,
          string ed, int aa, int np);
    Carte citesteCarte(void);
};

Carte::Carte(string tc, string aut1, string aut2, string aut3,
          string ed, int aa, int np) {
    titlu_carte = tc;
    autor1      = aut1;
    autor2      = aut2;
    autor3      = aut3;
    editura     = ed;
    an_aparitie = aa;
    nr_pagini   = np;

}

Carte Carte::citesteCarte(){
    Carte carte;
    cout << "Introduceti titlul cartii: ";
    getline(cin, carte.titlu_carte);
    cout << "Introduceti numele primului autor: ";
    getline(cin, carte.autor1);

    return carte;
}

int main()
{
    cout << "Hello world!" << endl;
    Carte carte;
    carte.citesteCarte();
    return 0;
}
