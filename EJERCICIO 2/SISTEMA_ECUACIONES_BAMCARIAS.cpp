#include <iostream>
#include <string>
using namespace std;

void mostrarMenu() {
    cout << "\n---- MENU ----\n";
    cout << "1. Ver atributos\n";
    cout << "2. Enviar dinero\n";
    cout << "3. Recibir dinero\n";
    cout << "4. Transferir entre cuentas\n";
    cout << "5. Salir\n";
    cout << "Opcion: ";
}

int main() {
    string dniCliente;
    double saldoCuenta[3] = {2000, 1000, 500};
    int opcionMenu, cuentaSeleccionada, origen, destino;
    double monto;

    cout << "Ingrese DNI del cliente: ";
    cin >> dniCliente;

    do {
        mostrarMenu();
        cin >> opcionMenu;

        switch(opcionMenu) {
            case 1:
                cout << "Seleccione cuenta (1-3): ";
                cin >> cuentaSeleccionada;
                cout << "Saldo cuenta " << cuentaSeleccionada << ": " 
                     << saldoCuenta[cuentaSeleccionada-1] << endl;
                break;
            case 2:
                cout << "Seleccione cuenta (1-3): ";
                cin >> cuentaSeleccionada;
                cout << "Monto a enviar: ";
                cin >> monto;
                if(saldoCuenta[cuentaSeleccionada-1] >= monto) {
                    saldoCuenta[cuentaSeleccionada-1] -= monto;
                    cout << "Envio realizado. Nuevo saldo: " 
                         << saldoCuenta[cuentaSeleccionada-1] << endl;
                } else {
                    cout << "Fondos insuficientes\n";
                }
                break;
            case 3:
                cout << "Seleccione cuenta (1-3): ";
                cin >> cuentaSeleccionada;
                cout << "Monto a recibir: ";
                cin >> monto;
                saldoCuenta[cuentaSeleccionada-1] += monto;
                cout << "Recepcion realizada. Nuevo saldo: " 
                     << saldoCuenta[cuentaSeleccionada-1] << endl;
                break;
            case 4:
                cout << "Cuenta origen (1-3): ";
                cin >> origen;
                cout << "Cuenta destino (1-3): ";
                cin >> destino;
                cout << "Monto a transferir: ";
                cin >> monto;
                if(saldoCuenta[origen-1] >= monto) {
                    saldoCuenta[origen-1] -= monto;
                    saldoCuenta[destino-1] += monto;
                    cout << "Transferencia realizada.\n";
                    cout << "Saldo origen: " << saldoCuenta[origen-1] << endl;
                    cout << "Saldo destino: " << saldoCuenta[destino-1] << endl;
                } else {
                    cout << "Fondos insuficientes\n";
                }
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opcion invalida\n";
        }
    } while(opcionMenu != 5);

    return 0;
}
