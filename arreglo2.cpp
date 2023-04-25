/*Declare un arreglo según la tabla y asigne los valores propuestos;
imprima en pantalla los valores almacenados utilizando las funciones de E/S y
formato adecuado.
95.75 87.91 85.72*/
#include <iostream>
using namespace std;

int main()
{
     float arreglo[3] = {95.75, 87.91, 85.72};

    for (int i = 0; i < 3; i++)
    {
        cout << arreglo[i] << " ";
    }
    return 0;
}
