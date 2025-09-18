#include <iostream>
#include <string>
using namespace std;

int main() {
    string vardas;
    int amzius;
    string grupe;
    string programa;

    cout << "Studentu Vardas Pavarde";
    getline(cin,vardas);

    cout << "Studentu amzius";
    cin >> amzius;

    cin.ignore();

    cout << "Studentu grupe";
    getline(cin,grupe);

    cout << "Studentu programa";
    getline(cin, programa);

    cout << "Vardas Pavarde: " << vardas << endl;
    cout << "Studentu amzius: " << amzius << endl;
    cout << "Studentu grupe: " << grupe << endl;
    cout << "Studentu programa: " << programa << endl;

    return 0;
}