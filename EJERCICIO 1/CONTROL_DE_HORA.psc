Algoritmo CONTROL_DE_HORA
		Definir hora, minutos, segundos, opcion Como Entero
		
		Escribir "Ingrese hora (0-23): "
		Leer hora
		Escribir "Ingrese minutos (0-59): "
		Leer minutos
		Escribir "Ingrese segundos (0-59): "
		Leer segundos
		
		Si (hora < 0 O hora > 23) O (minutos < 0 O minutos > 59) O (segundos < 0 O segundos > 59) Entonces
			Escribir "Hora inválida"
		Sino
			Escribir "Hora registrada: ", hora, ":", minutos, ":", segundos
			Escribir "¿Desea cambiarla? (1=Sí, 0=No): "
			Leer opcion
			
			Si opcion = 1 Entonces
				Escribir "Ingrese nueva hora (0-23): "
				Leer hora
				Escribir "Ingrese nuevos minutos (0-59): "
				Leer minutos
				Escribir "Ingrese nuevos segundos (0-59): "
				Leer segundos
				
				Si (hora < 0 O hora > 23) O (minutos < 0 O minutos > 59) O (segundos < 0 O segundos > 59) Entonces
					Escribir "Nueva hora inválida"
				Sino
					Escribir "Nueva hora: ", hora, ":", minutos, ":", segundos
				FinSi
			FinSi
		FinSi

FinAlgoritmo
