#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Valiutos keitimas" << endl;
    cout << "Iveskite valiuta (EUR arba USD): ";
    string valiuta;
    cin >> valiuta;

    double USD_Bendras   = 1.1793;
    double USD_Pirkti    = 1.1460;
    double USD_Parduoti  = 1.2340;
    double EUR_Bendras   = 1.0000;
    double EUR_Pirkti    = 0.9800;
    double EUR_Parduoti  = 1.0500;

    int pasirinkimas;

    if (valiuta == "EUR") {
        cout << "Ka jus norite padaryti?" << endl;
        cout << "1. Paliginti EUR" << endl;
        cout << "2. Pirkti EUR" << endl;
        cout << "3. Parduoti EUR" << endl;
        cin >> pasirinkimas;
        if (pasirinkimas == 1) {
            cout << "1 EUR = " << USD_Bendras << " USD" << endl;
        } else if (pasirinkimas == 2) {
            double suma;
            string suma1;
            cout << "Kiek EUR norite pirkti? ";
            cin >> suma;
            cout << "Reikes sumoketi: " << suma * EUR_Pirkti << " USD - Toliau?" << endl;
            cin >> suma1;
            if (suma1 == "Taip") {
                cout << "Jus pirkote " << suma << " EUR" << endl;
            } else if (suma1 == "Ne") {
                cout << "Gerai" << endl;
            }
        } else if (pasirinkimas == 3) {
            double suma;
            string suma1;
            cout << "Kiek EUR norite parduoti? ";
            cin >> suma;
            cout << "Gausite: " << suma * EUR_Parduoti << " USD - Toliau?" << endl;
            cin >> suma1;
            if (suma1 == "Taip") {
                cout << "Jus pardavete " << suma << " EUR" << endl;
            } else if (suma1 == "Ne") {
                cout << "Gerai" << endl;
            }
        }
    }
    else if (valiuta == "USD") {
            cout << "Ka jus norite padaryti?" << endl;
            cout << "1. Paliginti USD" << endl;
            cout << "2. Pirkti USD" << endl;
            cout << "3. Parduoti USD" << endl;
            cin >> pasirinkimas;

            if (pasirinkimas == 1) {
                cout << "1 USD = " << 1.0 / USD_Bendras << " EUR" << endl;
            } else if (pasirinkimas == 2) {
                double suma;
                string suma1;
                cout << "Kiek USD norite pirkti? ";
                cin >> suma;
                cout << "Reikes sumoketi: " << suma * USD_Pirkti << " EUR - Toliau?" << endl;
                cin >> suma1;
                if (suma1 == "Taip") {
                    cout << "Jus pirkote " << suma << " USD" << endl;
                } else if (suma1 == "Ne") {
                    cout << "Gerai" << endl;
                }
            } else if (pasirinkimas == 3) {
                double suma;
                string suma1;
                cout << "Kiek USD norite parduoti? ";
                cin >> suma;
                cout << "Gausite: " << suma * USD_Parduoti << " EUR - Toliau?" << endl;
                cin >> suma1;
                if (suma1 == "Taip") {
                    cout << "Jus pardavete " << suma << " USD" << endl;
                } else if (suma1 == "Ne") {
                    cout << "Gerai" << endl;
                }
            }
    }

    return 0;
}