#include <iostream>
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    float promedio;
};

int main() {
    int maxestud = 1000;
    Estudiante estudiantes[maxestud];

    // Solicitud de la cantidad de estudiantes a ingresar
    int numestud;
    cout << "Ingrese la cantidad de estudiantes a ingresar (máximo " << maxestud << "): ";
    cin >> numestud;
    cin.ignore();

    // Ciclo para solicitar los datos de cada estudiante
    for (int i = 0; i < numestud; i++) {
        // Solicitud de los datos al usuario
        cout << endl;
        cout << "Ingrese la información del estudiante " << i+1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        cout << "Promedio: ";
        cin >> estudiantes[i].promedio;
        cin.ignore();
    }

    // Impresión en pantalla de la información almacenada para cada estudiante
    cout << endl;
    for (int i = 0; i < numestud; i++) {
        cout << "Información del estudiante " << i+1 << ":" << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl << endl;
    }

    return 0;
}
