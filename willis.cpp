#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int check (int deno, int nomi) {
    return (nomi % 2 == 0) && (deno % 2 == 1) && abs(deno-nomi) == 1 && nomi >= 2;
}

int main(void) {
    double acc = 1.0;
    int max = -1;
    int deno=0;
    int nomi=0;

    cout << "Entrez le nominateur: ";
    cin >> nomi;
    cout << "Entrez le dénominateur: ";
    cin >> deno;
    while (!check(deno,nomi)) {
        cout << "Entrez un numérateur-dénominateur valides." << endl;
        cout << "Entrez le nominateur: ";
        cin >> nomi;
        cout << "Entrez le dénominateur: ";
        cin >> deno;
    }
    int i =1;
    while (true) {
        acc *= (4.0* pow(i,2)) / (4.0*pow(i,2) - 1.0);
        //double n = (2.0*i / (2.0*i -1.0));
        if (2.0*i / (2.0*i -1.0) == double(nomi)/double(deno) or 2.0*i / (2.0*i +1.0) == double(nomi)/double(deno)) {
            if (2.0*i / (2.0*i -1.0) == double(nomi)/double(deno)) {
                acc /=2.0*i / (2.0*i +1.0);
            }
            break;
        }
        i++;

    }
    cout << acc << endl;
    return 0;
}
