/*Defina, declare e inicialice una estructura para almacenar la información
de los dispositivos electrónicos (celular, tablet, Smart tv, laptop etc.) que distribuye la
empresa “Conico”. Utilice el ciclo apropiado para imprimir en pantalla información
almacenada en la estructura y recuerde utilizar las funciones de E/S con el formato
adecuado.*/

#include <iostream>
using namespace std;

struct disp
{
    char marca[100];
    char dispositivo[100];
    char modelo[100];
    char precio[100];
    char disponibles[100];
};
int main()
{

    disp arraydisp[] = {
        {"Dell", "Monitor", "E2216HV 21.5", "C$8.140,00", "16 disponibles"},
        {"HP", "Monitor", "450M3AA#ABA", "C$7.080,00", "14 disponibles"},
        {"AOC", "Monitor", "27B1H 27", "C$9.590,00", "49 disponibles"},
        {"Dell", "Laptop", "LATITUDE 3420 14", "C$48.410,00", "3 disponibles"},
        {"Lenovo", "Laptop", "THINKPAD E15 G2 I5-1135G7U", "C$35.740,00", "15 disponibles"},
        {"HP", "Laptop", "5-DW1514 CELERON N4020", "C$10.710,00", "15 disponibles"},
        {"Epson", "Impresora", "LQ-590II", "C$15.790,00", "25 disponibles"},
        {"Epson", "Impresora", "LX-350", "C$9.720,00", "11 disponibles"},
        {"Epson", "Impresora", "TM-T20III-001", "C$6.570,00", "31 disponibles"}};

    cout << "Información de los dispositivos electrónicos en CONICO: " << endl;

    for (int i = 0; i < 9; i++)
    {
        cout << "Dispositivo:" << endl;
        cout << "Marca: " << arraydisp[i].marca << endl;
        cout << "Tipo de dispositivo: " << arraydisp[i].dispositivo << endl;
        cout << "Modelo: " << arraydisp[i].modelo << endl;
        cout << "Precio: " << arraydisp[i].precio << endl;
        cout << "Cantidad disponible: " << arraydisp[i].disponibles << endl;
    }
        return 0;

}
