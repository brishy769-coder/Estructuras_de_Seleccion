//package APE2EJERCICIOS;

import java.util.Scanner;

public class CONTROL_DE_HORA {
    public static void main(String[] args) {
      

        Scanner sc = new Scanner(System.in);
        int hora, minutos, segundos, opcion;

        System.out.print("Ingrese hora (0-23): ");
        hora = sc.nextInt();
        System.out.print("Ingrese minutos (0-59): ");
        minutos = sc.nextInt();
        System.out.print("Ingrese segundos (0-59): ");
        segundos = sc.nextInt();

        if(hora < 0 || hora > 23 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59) {
            System.out.println("Hora inválida");
        } else {
            System.out.printf("Hora registrada: %02d:%02d:%02d\n", hora, minutos, segundos);
            System.out.print("¿Desea cambiarla? (1=Sí, 0=No): ");
            opcion = sc.nextInt();

            if(opcion == 1) {
                System.out.print("Ingrese nueva hora (0-23): ");
                hora = sc.nextInt();
                System.out.print("Ingrese nuevos minutos (0-59): ");
                minutos = sc.nextInt();
                System.out.print("Ingrese nuevos segundos (0-59): ");
                segundos = sc.nextInt();

                if(hora < 0 || hora > 23 || minutos < 0 || minutos > 59 || segundos < 0 || segundos > 59) {
                    System.out.println("Nueva hora inválida");
                } else {
                    System.out.printf("Nueva hora: %02d:%02d:%02d\n", hora, minutos, segundos);
                }
            }
        }
        sc.close();
    }
}
