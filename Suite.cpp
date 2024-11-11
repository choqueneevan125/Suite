#include <iostream>
#include <iomanip> // Pour l'affichage formaté
#include <cmath>

using namespace std;

// Fonction pour calculer et afficher la suite arithmétique avec sa somme
void suiteArithmetique(int premierTerme, int raison, int nombreTermes) {
    cout << "\nTableau de la Suite Arithmétique" << endl;
    cout << "+-----------+----------+" << endl;
    cout << "| Terme n   | Valeur   |" << endl;
    cout << "+-----------+----------+" << endl;

    int terme = premierTerme;
    int somme = 0;
    for (int i = 0; i < nombreTermes; ++i) {
        cout << "| " << setw(9) << i + 1 << " | " << setw(8) << terme << " |" << endl;
        somme += terme;
        terme += raison;
    }
    cout << "+-----------+----------+" << endl;
    cout << "Somme des termes de la suite arithmétique : " << somme << endl;
}

// Fonction pour calculer et afficher la suite géométrique avec sa somme
void suiteGeometrique(int premierTerme, int raison, int nombreTermes) {
    cout << "\nTableau de la Suite Géométrique" << endl;
    cout << "+-----------+----------+" << endl;
    cout << "| Terme n   | Valeur   |" << endl;
    cout << "+-----------+----------+" << endl;

    int terme = premierTerme;
    int somme = 0;
    for (int i = 0; i < nombreTermes; ++i) {
        cout << "| " << setw(9) << i + 1 << " | " << setw(8) << terme << " |" << endl;
        somme += terme;
        terme *= raison;
    }
    cout << "+-----------+----------+" << endl;
    cout << "Somme des termes de la suite géométrique : " << somme << endl;
}

int main() {
    int premierTerme, raison, nombreTermes;

    cout << "Entrez le premier terme : ";
    cin >> premierTerme;

    cout << "Entrez la raison : ";
    cin >> raison;

    cout << "Entrez le nombre de termes : ";
    cin >> nombreTermes;

    // Affichage des suites sous forme de tableau
    suiteArithmetique(premierTerme, raison, nombreTermes);
    suiteGeometrique(premierTerme, raison, nombreTermes);

    return 0;
}
