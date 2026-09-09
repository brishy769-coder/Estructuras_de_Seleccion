import java.util.Scanner;

public class SISTEMA_DE_CUENTAS_BANCARIAS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String dniCliente;
        double[] saldoCuenta = {2000, 1000, 500};
        int opcionMenu, cuentaSeleccionada, origen, destino;
        double monto;

        System.out.print("Ingrese DNI del cliente: ");
        dniCliente = sc.nextLine();

        do {
            System.out.println("\n---- MENU ----");
            System.out.println("1. Ver atributos");
            System.out.println("2. Enviar dinero");
            System.out.println("3. Recibir dinero");
            System.out.println("4. Transferir entre cuentas");
            System.out.println("5. Salir");
            System.out.print("Opcion: ");
            opcionMenu = sc.nextInt();

            switch(opcionMenu) {
                case 1:
                    System.out.print("Seleccione cuenta (1-3): ");
                    cuentaSeleccionada = sc.nextInt();
                    System.out.println("Saldo cuenta " + cuentaSeleccionada + ": " + saldoCuenta[cuentaSeleccionada-1]);
                    break;
                case 2:
                    System.out.print("Seleccione cuenta (1-3): ");
                    cuentaSeleccionada = sc.nextInt();
                    System.out.print("Monto a enviar: ");
                    monto = sc.nextDouble();
                    if(saldoCuenta[cuentaSeleccionada-1] >= monto) {
                        saldoCuenta[cuentaSeleccionada-1] -= monto;
                        System.out.println("Envio realizado. Nuevo saldo: " + saldoCuenta[cuentaSeleccionada-1]);
                    } else {
                        System.out.println("Fondos insuficientes");
                    }
                    break;
                case 3:
                    System.out.print("Seleccione cuenta (1-3): ");
                    cuentaSeleccionada = sc.nextInt();
                    System.out.print("Monto a recibir: ");
                    monto = sc.nextDouble();
                    saldoCuenta[cuentaSeleccionada-1] += monto;
                    System.out.println("Recepcion realizada. Nuevo saldo: " + saldoCuenta[cuentaSeleccionada-1]);
                    break;
                case 4:
                    System.out.print("Cuenta origen (1-3): ");
                    origen = sc.nextInt();
                    System.out.print("Cuenta destino (1-3): ");
                    destino = sc.nextInt();
                    System.out.print("Monto a transferir: ");
                    monto = sc.nextDouble();
                    if(saldoCuenta[origen-1] >= monto) {
                        saldoCuenta[origen-1] -= monto;
                        saldoCuenta[destino-1] += monto;
                        System.out.println("Transferencia realizada.");
                        System.out.println("Saldo origen: " + saldoCuenta[origen-1]);
                        System.out.println("Saldo destino: " + saldoCuenta[destino-1]);
                    } else {
                        System.out.println("Fondos insuficientes");
                    }
                    break;
                case 5:
                    System.out.println("Saliendo...");
                    break;
                default:
                    System.out.println("Opcion invalida");
            }
        } while(opcionMenu != 5);

        sc.close();
    }
}
