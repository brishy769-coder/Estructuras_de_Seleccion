Algoritmo SISTEMA_DE_CUENTAS_BANCARIAS
		Definir dniCliente Como Cadena
		Definir saldoCuenta Como Real
		Dimension saldoCuenta[3]
		saldoCuenta[1] <- 2000
		saldoCuenta[2] <- 1000
		saldoCuenta[3] <- 500
		
		Escribir "Ingrese DNI del cliente"
		Leer dniCliente
		
		Repetir
			Escribir "---- MENU ----"
			Escribir "1. Ver atributos"
			Escribir "2. Enviar dinero"
			Escribir "3. Recibir dinero"
			Escribir "4. Transferir entre cuentas"
			Escribir "5. Salir"
			Leer opcionMenu
			
			Segun opcionMenu Hacer
				1:
					Escribir "Seleccione cuenta (1-3)"
					Leer cuentaSeleccionada
					Escribir "Saldo: ", saldoCuenta[cuentaSeleccionada]
				2:
					Escribir "Seleccione cuenta (1-3)"
					Leer cuentaSeleccionada
					Escribir "Monto a enviar"
					Leer monto
					Si saldoCuenta[cuentaSeleccionada] >= monto Entonces
						saldoCuenta[cuentaSeleccionada] <- saldoCuenta[cuentaSeleccionada] - monto
						Escribir "Envío realizado"
					Sino
						Escribir "Fondos insuficientes"
					FinSi
				3:
					Escribir "Seleccione cuenta (1-3)"
					Leer cuentaSeleccionada
					Escribir "Monto a recibir"
					Leer monto
					saldoCuenta[cuentaSeleccionada] <- saldoCuenta[cuentaSeleccionada] + monto
					Escribir "Recepción realizada"
				4:
					Escribir "Cuenta origen (1-3)"
					Leer origen
					Escribir "Cuenta destino (1-3)"
					Leer destino
					Escribir "Monto a transferir"
					Leer monto
					Si saldoCuenta[origen] >= monto Entonces
						saldoCuenta[origen] <- saldoCuenta[origen] - monto
						saldoCuenta[destino] <- saldoCuenta[destino] + monto
						Escribir "Transferencia realizada"
					Sino
						Escribir "Fondos insuficientes"
					FinSi
				5:
					Escribir "Saliendo..."
			FinSegun
		Hasta Que opcionMenu = 5

FinAlgoritmo
