package main

import (
	"fmt"
	"strings"
)

func runMatriz(){
	// declarando matriz 3x3
	var matriz [3][3]int

	// Con valores directos
	matriz = [3][3]int{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	}

	// Slice de slices (tamaño dinámico)
	matrizDinamica := [][]int{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	}

	fmt.Println("Matriz: ", matriz)
	fmt.Println("Matriz Dinamica: ", matrizDinamica,"\n")

	fmt.Println("\n")
	recorrerPorColumna(matrizDinamica)
	fmt.Println("\n")
	imprimirTabla(matrizDinamica)
	fmt.Println("\n")
	sumarElementos(matrizDinamica);
	fmt.Println("\nIntercambiando primera fila por ultima : ")
	intercambiarFila(matrizDinamica)
}

func recorrerPorFila(matriz [][]int){
	var mensaje string = " Recorrer matriz por fila "

	fmt.Println(strings.Repeat("=",30))
	fmt.Println(mensaje)
	fmt.Println(strings.Repeat("=",30))

	for i, value := range matriz {
		fmt.Println(strings.Repeat("-",25))
		fmt.Println(":",strings.Repeat(" ",6),"Fila ",i,strings.Repeat(" ",6),":")
		fmt.Println(strings.Repeat("-",25))
		for index,v := range value {
			fmt.Printf("| elemento: [%d][%d] -> %d |\n", i,index,v)
		}
		fmt.Println(strings.Repeat("-",25),"\n")
	}
}

func recorrerPorColumna(matriz [][]int){
	var mensaje string = " Recorrer matriz por Columna "

	fmt.Println(strings.Repeat("=",30))
	fmt.Println(mensaje)
	fmt.Println(strings.Repeat("=",30))

	for i := 0; i < len(matriz) ; i++{
		fmt.Println(strings.Repeat("-",24))
		fmt.Println(":",strings.Repeat(" ",4),"Columna ",i,strings.Repeat(" ",4),":")
		fmt.Println(strings.Repeat("-",24))
		for j := 0; j < len(matriz); j++{
			fmt.Printf("| elemento [%d][%d] -> %d |\n", j, i, matriz[j][i])
		}
		fmt.Println(strings.Repeat("-",24)+"\n")

	}
}

func imprimirTabla(matriz [][]int) {
	var mensaje string = "Imprimir Matriz en Tabla"
	fmt.Println(strings.Repeat("=",31))
	fmt.Println(":",strings.Repeat(" ",2),mensaje,":")
	fmt.Println(strings.Repeat("=",31))
	fmt.Println("┌─────────────┐")
	for _, fila := range matriz {
		fmt.Print("│ ")
		for _, val := range fila {
			fmt.Printf("%3d", val)
		}
		fmt.Println("   │")
	}
	fmt.Println("└─────────────┘")
}

func sumarElementos(matriz [][]int){
	var suma int = 0
	for _, fila := range matriz {
		for _, val := range fila {
			suma += val
		}
	}
	fmt.Println("Suma total: ", suma)
}

func intercambiarFila(matriz [][]int){
	ultima := len(matriz) - 1
	matriz[0], matriz[ultima] = matriz[ultima], matriz[0]
	fmt.Println("Matriz: ", matriz)
}