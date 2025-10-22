#include <iostream>
#include <string>
using namespace std;

const int MAX_MOKINIAI = 10;
const int MAX_PAZYMIAI = 10;

int main() {
    string vardai[MAX_MOKINIAI];
    int pazymiai[MAX_MOKINIAI][MAX_PAZYMIAI];
    int kiek_pazymiu[MAX_MOKINIAI];
    int mokiniu_kiekis = 0;

    int pasirinkimas;

    do {
        cout << "---- MOKINIU PAZIMIU SISTEMA ----\n";
        cout << "1. Prideti mokini\n";
        cout << "2. Perziureti visus mokinius\n";
        cout << "3. Perziureti konkretaus mokinio pazymius\n";
        cout << "4. Atnaujinti pazymi\n";
        cout << "5. Pasalinti mokini\n";
        cout << "0. Iseiti\n";
        cout << "Pasirinkite: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
        case 1: {
            if (mokiniu_kiekis >= MAX_MOKINIAI) {
                cout << "Maksimalus mokiniu kiekis pasiektas!\n";
                break;
            }

            cout << "Iveskite mokinio varda: ";
            cin >> vardai[mokiniu_kiekis];

            cout << "Kiek pazymiu norite ivesti (iki 10): ";
            cin >> kiek_pazymiu[mokiniu_kiekis];

            if (kiek_pazymiu[mokiniu_kiekis] > MAX_PAZYMIAI)
                kiek_pazymiu[mokiniu_kiekis] = MAX_PAZYMIAI;

            for (int j = 0; j < kiek_pazymiu[mokiniu_kiekis]; j++) {
                cout << j + 1 << "-as pazymys: ";
                cin >> pazymiai[mokiniu_kiekis][j];
            }

            mokiniu_kiekis++;
            break;
        }

        case 2: {
            if (mokiniu_kiekis == 0) {
                cout << "Nera mokiniu!\n";
                break;
            }

            for (int i = 0; i < mokiniu_kiekis; i++) {
                cout << i + 1 << ". " << vardai[i] << " - ";
                for (int j = 0; j < kiek_pazymiu[i]; j++) {
                    cout << pazymiai[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }

        case 3: {
            string vardas;
            cout << "Iveskite mokinio varda: ";
            cin >> vardas;
            bool rastas = false;

            for (int i = 0; i < mokiniu_kiekis; i++) {
                if (vardai[i] == vardas) {
                    cout << vardai[i] << " pazymiai: ";
                    for (int j = 0; j < kiek_pazymiu[i]; j++) {
                        cout << pazymiai[i][j] << " ";
                    }
                    cout << endl;
                    rastas = true;
                    break;
                }
            }

            if (!rastas) cout << "Mokinys nerastas!\n";
            break;
        }

        case 4: {
            string vardas;
            cout << "Iveskite mokinio varda: ";
            cin >> vardas;
            bool rastas = false;

            for (int i = 0; i < mokiniu_kiekis; i++) {
                if (vardai[i] == vardas) {
                    rastas = true;
                    cout << "Kurio pazymio numeri norite pakeisti (1-" << kiek_pazymiu[i] << "): ";
                    int nr;
                    cin >> nr;
                    if (nr < 1 || nr > kiek_pazymiu[i]) {
                        cout << "Neteisingas numeris!\n";
                        break;
                    }
                    cout << "Naujas pazymys: ";
                    cin >> pazymiai[i][nr - 1];
                    cout << "Pazymys atnaujintas!\n";
                    break;
                }
            }

            if (!rastas) cout << "Mokinys nerastas!\n";
            break;
        }

        case 5: {
            string vardas;
            cout << "Iveskite mokinio varda, kuri norite pasalinti: ";
            cin >> vardas;
            bool rastas = false;

            for (int i = 0; i < mokiniu_kiekis; i++) {
                if (vardai[i] == vardas) {
                    for (int j = i; j < mokiniu_kiekis - 1; j++) {
                        vardai[j] = vardai[j + 1];
                        kiek_pazymiu[j] = kiek_pazymiu[j + 1];
                        for (int k = 0; k < MAX_PAZYMIAI; k++) {
                            pazymiai[j][k] = pazymiai[j + 1][k];
                        }
                    }
                    mokiniu_kiekis--;
                    rastas = true;
                    cout << "Mokinys pasalintas!\n";
                    break;
                }
            }

            if (!rastas) cout << "Mokinys nerastas!\n";
            break;
        }

        case 0:
            cout << "Programa baigta.\n";
            break;

        default:
            cout << "Neteisingas pasirinkimas!\n";
        }

    } while (pasirinkimas != 0);

    return 0;
}
