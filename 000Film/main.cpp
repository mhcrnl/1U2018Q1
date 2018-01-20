#include <iostream>
#include <string>

using namespace std;

class Film {
public:
    string numeFilm;
    string regizor;
    int anLansare;

    Film(string nf, string reg, int anL){
        numeFilm = nf;
        regizor = reg;
        anLansare = anL;
    }
    void afisare(){
        cout << numeFilm <<" "<<regizor<<" "<<anLansare<<endl;
    }
};

int main()
{
    cout << "Hello world!" << endl;

    cout << "Introduceti numele filmului: ";
    string numeFilm;
    cin >> numeFilm;

    cout <<"Introduceti numele regizorului: ";
    string regizor;
    cin >> regizor;

    cout << "Introduceti anul lansarii: ";
    int anLansare;
    cin >>anLansare;

    Film film(numeFilm, regizor, anLansare);
    film.afisare();

    cout << numeFilm <<endl;
    return 0;
}
