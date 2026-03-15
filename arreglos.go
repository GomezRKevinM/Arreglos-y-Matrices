package main

import (
	"fmt"
	"math/rand"
	"strings"
)

func runArreglos() {

	// Declarar arreglo
	var arreglo [10]int

	// Asignar valores a cada elemento del arreglo
	for i := 0; i < 10 ; i++{
		arreglo[i] = rand.Intn(100)+1
	}

	// Imprimir arreglo completo
	fmt.Println("Arreglo: ", arreglo)

	recorrerFor(arreglo[:])

	fmt.Println("")

	recorrerForEach(arreglo[:])

	cambiarImpares(arreglo[:])

	fmt.Println("\nrecorremos el arreglo nuevamente para verificar que se actualizaron los valores de impares -> 0\n")
	recorrerFor(arreglo[:])

}

func recorrerFor(arreglo []int){
	// Recorrer e imprimir elementos de un arreglo usando bucle for
	fmt.Println(strings.Repeat("=",60))
	fmt.Println("Recorrer en for clasico")
	fmt.Println(strings.Repeat("=",60))
	for i := 0 ; i < len(arreglo) ; i++{
		var valor int = arreglo[i]
		if valor < 10 {
			fmt.Printf("| index: %d -> valor: %d  |\n",i,valor)
		}else{
			fmt.Printf("| index: %d -> valor: %d |\n",i,valor)
		}
	}
	fmt.Println(strings.Repeat("=",60))
}

func recorrerForEach(arreglo []int){
	// Recorrer e imprimir elementos de un arreglo usando bucle for-each
	fmt.Println(strings.Repeat("=",60))
	fmt.Println("Recorrer en for-each")
	fmt.Println(strings.Repeat("=",60))

	for indice, valor := range arreglo {
		if valor < 10 {
			fmt.Printf("| index: %d -> valor: %d  |\n",indice,valor)
		}else{
			fmt.Printf("| index: %d -> valor: %d |\n",indice,valor)
		}
	}
	fmt.Println(strings.Repeat("=",60))
}

func cambiarImpares(arreglo []int)  {
	for indice, valor := range arreglo {
		if valor % 2 !=0 {
			arreglo[indice] = 0
			fmt.Printf("Valor del indice %d ha sido cambiado a 0\n",indice)
		}else{
			continue
		}
	}
}
