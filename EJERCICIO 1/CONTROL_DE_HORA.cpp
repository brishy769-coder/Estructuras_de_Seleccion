#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hora, minutos, segundos, opcion;

    cout << "Ingrese hora (0-23): ";
    cin >> hora;
    cout << "Ingrese minutos (0-59): ";
    cin >> minutos;
    cout << "Ingrese segundos (0-59): ";
    cin >> segundos;

    if(hora < 0 || hora > 23 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59) {
        cout << "Hora invalida" << endl;
    } else {
        cout << "Hora registrada: " << setw(2) << setfill('0') << hora << ":"
             << setw(2) << setfill('0') << minutos << ":"
             << setw(2) << setfill('0') << segundos << endl;

        cout << "¿ Desea cambiarla? (1=Si, 0=No): ";
        cin >> opcion;

        if(opcion == 1) {
            cout << "Ingrese nueva hora (0-23): ";
            cin >> hora;
            cout << "Ingrese nuevos minutos (0-59): ";
            cin >> minutos;
            cout << "Ingrese nuevos segundos (0-59): ";
            cin >> segundos;

            if(hora < 0 || hora > 23 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59) {
                cout << "Nueva hora invalida" << endl;
            } else {
                cout << "Nueva hora: " << setw(2) << setfill('0') << hora << ":"
                     << setw(2) << setfill('0') << minutos << ":"
                     << setw(2) << setfill('0') << segundos << endl;
            }
        }
    }
    return 0;
}
