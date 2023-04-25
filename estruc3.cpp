#include <iostream>
#include <string>

using namespace std;

struct infopersonal {
    string nombre;
    int edad;

};

struct infoprofesional {
    string deporte;
    string equipo;
    
};
struct atleta {
    infopersonal infoPersonal;
    infoprofesional infoProfesional;
};

int main() {
    const int numatletas = 5;
    atleta atletas[numatletas];

    for (int i = 0; i < numatletas; i++) {
        cout << endl;
        cout << "Ingrese la información del atleta " << i+1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, atletas[i].infoPersonal.nombre);
        cout << "Edad: ";
        cin >> atletas[i].infoPersonal.edad;
        cout << "Deporte: ";
        getline(cin, atletas[i].infoProfesional.deporte);
        cout << "Equipo: ";
        getline(cin, atletas[i].infoProfesional.equipo);
        
    }

    cout << endl;
    for (int i = 0; i < numatletas; i++) {
        cout << "Información del atleta " << i+1 << ":" << endl;
        cout << "Nombre: " << atletas[i].infoPersonal.nombre << endl;
        cout << "Edad: " << atletas[i].infoPersonal.edad << endl;
        cout << "Deporte: " << atletas[i].infoProfesional.deporte << endl;
        cout << "Equipo: " << atletas[i].infoProfesional.equipo << endl;

    }
}