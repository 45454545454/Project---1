#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Valiutos keitimas" << endl;
    cout << "Jus galite:" << endl;
    cout << "1. Paliginti" << endl;
    cout << "2. Pirkti" << endl;
    cout << "3. Parduoti" << endl;
    cout << "Pasirinkite viena varianta: ";
    string valiuta;
    cin >> valiuta;

    double GBP_Bendras   = 0.8729;
    double GBP_Pirkti    = 0.8600;
    double GBP_Parduoti  = 0.9220;
    double USD_Bendras   = 1.1793;
    double USD_Pirkti    = 1.1460;
    double USD_Parduoti  = 1.2340;
    double INR_Bendras   = 104.6918;
    double INR_Pirkti    = 101.3862;
    double INR_Parduoti  = 107.8546;
    double EUR_Bendras   = 1.0000;
    double EUR_Pirkti    = 0.9800;
    double EUR_Parduoti  = 1.0500;

    int pasirinkimas;

    if (valiuta == "1") {
        cout << "Koki valiuta jus norite palyginti?" << endl;
        cout << "1. GBP" << endl;
        cout << "2. USD" << endl;
        cout << "3. INR" << endl;
        cin >> pasirinkimas;
        if (pasirinkimas == 1)
            cout << "1 EUR = " << GBP_Bendras << " GBP" << endl;
        else if (pasirinkimas == 2)
            cout << "1 EUR = " << USD_Bendras << " USD" << endl;
        else if (pasirinkimas == 3)
            cout << "1 EUR = " << INR_Bendras << " INR" << endl;
    }

    else if (valiuta == "2") {
        cout << "Koki valiuta jus norite pirkti?" << endl;
        cout << "1. GBP" << endl;
        cout << "2. USD" << endl;
        cout << "3. INR" << endl;
        cin >> pasirinkimas;
        double suma;
        string patvirtinimas;

        if (pasirinkimas == 1) {
            cout << "Kiek GBP norite pirkti? ";
            cin >> suma;
            cout << "Reikes sumoketi: " << suma * GBP_Pirkti << " EUR - Toliau?: ";
            cin >> patvirtinimas;
            if (patvirtinimas == "Taip")
                cout << "Jus pirkote " << suma << " GBP" << endl;
            else
                cout << "Gerai." << endl;
        } else if (pasirinkimas == 2) {
            cout << "Kiek USD norite pirkti? ";
            cin >> suma;
            cout << "Reikes sumoketi: " << suma * USD_Pirkti << " EUR - Toliau?: ";
            cin >> patvirtinimas;
            if (patvirtinimas == "Taip")
                cout << "Jus pirkote " << suma << " USD" << endl;
            else
                cout << "Gerai." << endl;
        } else if (pasirinkimas == 3) {
            cout << "Kiek INR norite pirkti? ";
            cin >> suma;
            cout << "Reikes sumoketi: " << suma * INR_Pirkti << " EUR - Toliau?: ";
            cin >> patvirtinimas;
            if (patvirtinimas == "Taip")
                cout << "Jus pirkote " << suma << " INR" << endl;
            else
                cout << "Gerai." << endl;
        }
    }

    else if (valiuta == "3") {
        cout << "Koki valiuta jus norite parduoti?" << endl;
        cout << "1. GBP" << endl;
        cout << "2. USD" << endl;
        cout << "3. INR" << endl;
        cin >> pasirinkimas;
        double suma;
        string patvirtinimas;

        if (pasirinkimas == 1) {
            cout << "Kiek GBP norite parduoti? ";
            cin >> suma;
            cout << "Gausite: " << suma * GBP_Parduoti << " EUR - Toliau?: ";
            cin >> patvirtinimas;
            if (patvirtinimas == "Taip")
                cout << "Jus pardavete " << suma << " GBP" << endl;
            else
                cout << "Gerai." << endl;
        } else if (pasirinkimas == 2) {
            cout << "Kiek USD norite parduoti? ";
            cin >> suma;
            cout << "Gausite: " << suma * USD_Parduoti << " EUR - Toliau?: ";
            cin >> patvirtinimas;
            if (patvirtinimas == "Taip")
                cout << "Jus pardavete " << suma << " USD" << endl;
            else
                cout << "Gerai." << endl;
        } else if (pasirinkimas == 3) {
            cout << "Kiek INR norite parduoti? ";
            cin >> suma;
            cout << "Gausite: " << suma * INR_Parduoti << " EUR - Toliau?: ";
            cin >> patvirtinimas;
            if (patvirtinimas == "Taip")
                cout << "Jus pardavete " << suma << " INR" << endl;
            else
                cout << "Gerai." << endl;
        }
    }
    return 0;
}
