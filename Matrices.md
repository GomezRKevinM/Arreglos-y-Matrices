# 🗂️ Matrices (Arrays Bidimensionales)

![Go](https://img.shields.io/badge/Go-00ADD8?style=for-the-badge&logo=go&logoColor=white)

---

## 1. Fundamentos

### 🔹 Concepto de Matriz

Una **matriz** es una estructura de datos bidimensional que organiza elementos del **mismo tipo** en filas y columnas, formando una cuadrícula. Se puede entender como un **arreglo de arreglos**.

```
Matriz 3x3:

        Col 0   Col 1   Col 2
Fila 0 [  1  ] [  2  ] [  3  ]
Fila 1 [  4  ] [  5  ] [  6  ]
Fila 2 [  7  ] [  8  ] [  9  ]

Acceso: matriz[fila][columna]
        matriz[1][2] → 6
```

---

### 🔹 Representación en memoria (fila-columna)

Aunque visualmente es una cuadrícula, en memoria los datos se almacenan de forma **lineal y contigua**, fila por fila (**row-major order**):

```
Memoria física:
┌───┬───┬───┬───┬───┬───┬───┬───┬───┐
│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │
└───┴───┴───┴───┴───┴───┴───┴───┴───┘
  ↑           ↑           ↑
Fila 0      Fila 1      Fila 2

Fórmula para acceder a matriz[i][j]:
  posición = (i * número_de_columnas) + j

  matriz[1][2] → (1 * 3) + 2 = posición 5 → valor 6 ✅
```

> 💡 Recorrer por **filas es más eficiente** que por columnas: se accede a posiciones contiguas en memoria (mejor uso del caché del procesador).

---

### 🔹 Declaración e inicialización

#### Go

```go
// Array 2D estático
var matriz [3][3]int

// Con valores directos
matriz := [3][3]int{
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
```


### 🔹 Recorridos por filas y columnas

```
Recorrido por FILAS (→):        Recorrido por COLUMNAS (↓):
[1][2][3] →                     [1]↓  [2]↓  [3]↓
[4][5][6] →                     [4]   [5]   [6]
[7][8][9] →                     [7]   [8]   [9]
```

**Por filas** — el índice de columna varía más rápido:
```go
// Go
for i := 0; i < 3; i++ {       // fila
    for j := 0; j < 3; j++ {   // columna
        fmt.Print(matriz[i][j])
    }
}
```

**Por columnas** — el índice de fila varía más rápido:
```go
// Go
for j := 0; j < 3; j++ {       // columna primero
    for i := 0; i < 3; i++ {   // luego fila
        fmt.Print(matriz[i][j])
    }
}
```

---

### 🔹 Matrices irregulares (Jagged Arrays)

Matrices donde cada fila puede tener **diferente número de columnas**.

#### Go — slice de slices

```go
// Cada fila tiene diferente longitud
irregular := [][]int{
    {1, 2},
    {3, 4, 5, 6},
    {7},
}

// Recorrido seguro con len() dinámico
for i := 0; i < len(irregular); i++ {
    for j := 0; j < len(irregular[i]); j++ {  // ← longitud por fila
        fmt.Printf("%d ", irregular[i][j])
    }
    fmt.Println()
}
```

## 2. Actividades

### 📝 Declaración e inicialización — Matriz 3x3 con valores del 1 al 9

#### Go

```go
package main

import "fmt"

func main() {
    // Opción 1: Inicialización directa
    matriz := [3][3]int{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    }

    // Opción 2: Inicialización con bucle
    var matrizBucle [3][3]int
    valor := 1

    for i := 0; i < 3; i++ {
        for j := 0; j < 3; j++ {
            matrizBucle[i][j] = valor
            valor++
        }
    }

    fmt.Println("Matriz directa:", matriz)
    fmt.Println("Matriz con bucle:", matrizBucle)
}
```

## 3. Recorrido

### 🖨️ Imprimir la matriz en forma de tabla

#### Go

```go
func imprimirTabla(matriz [3][3]int) {
    fmt.Println("┌─────────────┐")
    for _, fila := range matriz {
        fmt.Print("│ ")
        for _, val := range fila {
            fmt.Printf("%3d", val)
        }
        fmt.Println("  │")
    }
    fmt.Println("└─────────────┘")
}
```

### 🔄 Recorrer por columnas

#### Go

```go
func recorrerPorColumnas(matriz [3][3]int) {
    fmt.Println("Recorrido por columnas:")
    for j := 0; j < len(matriz[0]); j++ {        // columna primero
        fmt.Printf("Columna %d: ", j)
        for i := 0; i < len(matriz); i++ {        // luego fila
            fmt.Printf("%d ", matriz[i][j])
        }
        fmt.Println()
    }
}
```

## 4. Operaciones

### ➕ Sumar todos los elementos

#### Go

```go
func sumarElementos(matriz [3][3]int) int {
    suma := 0
    for _, fila := range matriz {
        for _, val := range fila {
            suma += val
        }
    }
    return suma
}

// En main:
fmt.Println("Suma total:", sumarElementos(matriz)) // 45
```

### 🔃 Intercambiar la primera fila con la última

#### Go

```go
func intercambiarFilas(matriz *[3][3]int) {
    // Se necesita puntero porque Go pasa arrays por copia
    ultima := len(matriz) - 1
    matriz[0], matriz[ultima] = matriz[ultima], matriz[0]  // swap idiomático
}

// En main:
intercambiarFilas(&matriz)
```

## 5. Programa completo

### Go

```go
package main

import "fmt"

func imprimirTabla(matriz [3][3]int) {
    fmt.Println("┌─────────────┐")
    for _, fila := range matriz {
        fmt.Print("│ ")
        for _, val := range fila {
            fmt.Printf("%3d", val)
        }
        fmt.Println("  │")
    }
    fmt.Println("└─────────────┘")
}

func recorrerPorColumnas(matriz [3][3]int) {
    for j := 0; j < len(matriz[0]); j++ {
        fmt.Printf("Columna %d: ", j)
        for i := 0; i < len(matriz); i++ {
            fmt.Printf("%d ", matriz[i][j])
        }
        fmt.Println()
    }
}

func sumarElementos(matriz [3][3]int) int {
    suma := 0
    for _, fila := range matriz {
        for _, val := range fila {
            suma += val
        }
    }
    return suma
}

func intercambiarFilas(matriz *[3][3]int) {
    ultima := len(matriz) - 1
    matriz[0], matriz[ultima] = matriz[ultima], matriz[0]
}

func main() {
    matriz := [3][3]int{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    }

    fmt.Println("=== Matriz original ===")
    imprimirTabla(matriz)

    fmt.Println("\n=== Recorrido por columnas ===")
    recorrerPorColumnas(matriz)

    fmt.Println("\n=== Suma total ===")
    fmt.Println("Resultado:", sumarElementos(matriz))

    fmt.Println("\n=== Intercambio de filas ===")
    intercambiarFilas(&matriz)
    imprimirTabla(matriz)
}
```

## 6. Comparativa entre lenguajes

| Aspecto                     | Go                                         | C++                                        |
|-----------------------------|--------------------------------------------|--------------------------------------------|
| **Array estático**          | `[3][3]int`                                | `int matriz[3][3]`                         |
| **Array dinámico**          | `[][]int` (slice de slices)                | `vector<vector<int>>`                      |
| **Matrices irregulares**    | ✅ Con `[][]int`                           | ✅ Con `vector<vector<int>>`               |
| **Paso a función**          | Por copia (usar `*[3][3]int` para modificar) | Por puntero implícito (modifica directo) |
| **Swap de filas**           | `a, b = b, a` con puntero                 | `swap_ranges` de la STL                    |
| **For-each**                | `for i, fila := range matriz`              | `for (auto& fila : matriz)`                |
| **Verificación de límites** | En tiempo de ejecución (panic)             | No verificado (comportamiento indefinido)  |

---

> **Conclusión:** Ambos lenguajes manejan matrices estáticas de forma similar, pero difieren en cómo pasan arreglos a funciones. En Go los arrays se copian por defecto (se requiere puntero para modificarlos), mientras que en C++ los arrays se pasan como puntero implícitamente. Para matrices dinámicas o irregulares, ambos ofrecen estructuras equivalentes: `[][]int` en Go y `vector<vector<int>>` en C++.