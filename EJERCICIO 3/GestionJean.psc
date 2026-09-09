Algoritmo GestionJean
		Definir codigo, color, talla, estadoTela Como Cadena
		Definir fueTenido Como Logico
		Definir cantidadTenidos, cantidadBotones, humedad, opcion Como Entero
		Definir precio Como Real
		
		Escribir "Ingrese codigo del jean"
		Leer codigo
		Escribir "Ingrese color"
		Leer color
		Escribir "Ingrese talla"
		Leer talla
		Escribir "Fue tenido? (true/false)"
		Leer fueTenido
		Escribir "Cantidad de tenidos"
		Leer cantidadTenidos
		Escribir "Precio"
		Leer precio
		Escribir "Cantidad de botones"
		Leer cantidadBotones
		Escribir "Humedad"
		Leer humedad
		Escribir "Estado de la tela"
		Leer estadoTela
		
		Repetir
			Escribir "---- MENU ----"
			Escribir "1. Mostrar datos"
			Escribir "2. Lavar"
			Escribir "3. Secar"
			Escribir "4. Salir"
			Leer opcion
			
			Segun opcion Hacer
				1:
					Escribir "Codigo:", codigo
					Escribir "Color:", color
					Escribir "Talla:", talla
					Escribir "Fue tenido:", fueTenido
					Escribir "Cantidad de tenidos:", cantidadTenidos
					Escribir "Precio:", precio
					Escribir "Cantidad de botones:", cantidadBotones
					Escribir "Humedad:", humedad
					Escribir "Estado de la tela:", estadoTela
				2:
					cantidadTenidos <- cantidadTenidos - 1
					Escribir "Jean lavado. Tenidos restantes:", cantidadTenidos
				3:
					humedad <- humedad - 10
					Escribir "Jean secado. Humedad actual:", humedad
				4:
					Escribir "Saliendo..."
			FinSegun
		Hasta Que opcion = 4


FinAlgoritmo
