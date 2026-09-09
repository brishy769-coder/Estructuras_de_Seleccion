#include <iostream>
#include <string>
using namespace std;

class Jean {
public:
    string codigo, color, talla, estadoTela;
    bool fueTenido;
    int cantidadTenidos, cantidadBotones, humedad;
    double precio;

    void mostrarDatos() {
        cout << "Codigo: " << codigo << endl;
        cout << "Color: " << color << endl;
        cout << "Talla: " << talla << endl;
        cout << "Fue tenido: " << (fueTenido ? "true" : "false") << endl;
        cout << "Cantidad de tenidos: " << cantidadTenidos << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad de botones: " << cantidadBotones << endl;
        cout << "Humedad: " << humedad << endl;
        cout << "Estado de la tela: " << estadoTela << endl;
    }

    void lavar() {
        cantidadTenidos--;
        cout << "Jean lavado. Tenidos restantes: " << cantidadTenidos << endl;
    }

    void secar() {
        humedad -= 10;
        if(humedad < 0) humedad = 0; // evitar valores negativos
        cout << "Jean secado. Humedad actual: " << humedad << endl;
    }
};

int main() {
    Jean jean;

    cout << "Ingrese codigo: ";
    cin >> jean.codigo;
    cout << "Ingrese color: ";
    cin >> jean.color;
    cout << "Ingrese talla: ";
    cin >> jean.talla;
    cout << "Fue tenido (1=true, 0=false): ";
    cin >> jean.fueTenido;
    cout << "Cantidad de tenidos: ";
    cin >> jean.cantidadTenidos;
    cout << "Precio: ";
    cin >> jean.precio;
    cout << "Cantidad de botones: ";
    cin >> jean.cantidadBotones;
    cout << "Humedad: ";
    cin >> jean.humedad;
    cout << "Estado de la tela: ";
    cin >> jean.estadoTela;

    int opcion;
    do {
        cout << "\n---- MENU ----\n";
        cout << "1. Mostrar datos\n";
        cout << "2. Lavar\n";
        cout << "3. Secar\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                jean.mostrarDatos();
                break;
            case 2:
                jean.lavar();
                break;
            case 3:
                jean.secar();
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while(opcion != 4);

    return 0;
}
