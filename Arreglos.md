# 📦 Arreglos (Arrays)

![Go](https://img.shields.io/badge/Go-00ADD8?style=for-the-badge&logo=go&logoColor=white)

---

## 1. Fundamentos

### 🔹 Concepto de Arreglo

Un **arreglo** (o array) es una estructura de datos que almacena una colección de elementos del **mismo tipo** en posiciones de memoria **contiguas**. Permite acceder a cada elemento de forma directa mediante un **índice numérico**.

```
Índice:  [0]  [1]  [2]  [3]  [4]
Valor:   [ 5] [12] [ 8] [23] [ 1]
         ↑
     Primer elemento (índice 0)
```

---

### 🔹 Tipos de datos que puede almacenar

Un arreglo puede almacenar cualquier tipo de dato primitivo o compuesto, siempre que todos los elementos sean del **mismo tipo**:

| Tipo        | Ejemplo en Go          |
|-------------|------------------------|
| Enteros     | `[5]int`               |
| Decimales   | `[5]float64`           |
| Caracteres  | `[5]rune`              |
| Booleanos   | `[5]bool`              |
| Cadenas     | `[5]string`            |

---

### 🔹 Tamaño fijo vs. dinámico según el lenguaje

| Característica        | Go                                  |
|-----------------------|-------------------------------------|
| **Array estático**    | `[10]int` — tamaño fijo en compilación |
| **Array dinámico**    | `[]int` (slice) — tamaño flexible   |
| **Tipado**            | Fuertemente tipado                  |

> ⚠️ En **Go**, los arrays tienen tamaño fijo. Para arreglos dinámicos se usan los **slices** (`[]int`).

---

### 🔹 Indexación y posiciones

La indexación en ambos lenguajes comienza en **0** (base-cero):

```
Arreglo de 5 elementos:
  Posición:  0    1    2    3    4
  Valor:    [10] [20] [30] [40] [50]

- Primer elemento: arr[0] → 10
- Último elemento: arr[4] → 50
- Índice fuera de rango: arr[5] → ERROR
```

---

### 🔹 Operaciones básicas

| Operación        | Descripción                                         |
|------------------|-----------------------------------------------------|
| **Declaración**  | Definir el arreglo con tipo y tamaño                |
| **Inicialización** | Asignar valores iniciales a los elementos         |
| **Recorrido**    | Acceder a cada elemento del arreglo                 |
| **Modificación** | Cambiar el valor de uno o más elementos             |
| **Búsqueda**     | Encontrar un elemento específico dentro del arreglo |

---

## 2. Actividades

### 📝 Declaración y creación de un arreglo de 10 enteros

#### Go

```go
package main

import (
    "fmt"
    "math/rand"
    "time"
)

func main() {
    // Semilla para valores aleatorios
    rand.Seed(time.Now().UnixNano())

    // Declaración de arreglo de 10 enteros
    var arreglo [10]int

    // Inicialización con valores aleatorios (entre 1 y 100)
    for i := 0; i < 10; i++ {
        arreglo[i] = rand.Intn(100) + 1
    }

    fmt.Println("Arreglo:", arreglo)
}
```

## 3. Recorrido e impresión

### 🔁 Recorrido con `for` clásico

#### Go

```go
// For clásico en Go
for i := 0; i < len(arreglo); i++ {
    fmt.Printf("arreglo[%d] = %d\n", i, arreglo[i])
}
```

### 🔁 Recorrido con `for-each` o equivalente

#### Go — usando `range`

```go
// For-each en Go con range
for indice, valor := range arreglo {
    fmt.Printf("arreglo[%d] = %d\n", indice, valor)
}

// Si no se necesita el índice:
for _, valor := range arreglo {
    fmt.Println(valor)
}
```

> 💡 **Diferencia clave:** En Go, `range` devuelve tanto el índice como el valor. En C++, el for basado en rango solo devuelve el valor directamente (el índice no está disponible de forma directa).

---

## 4. Modificación

### ✏️ Cambiar todos los valores impares por cero

#### Go

```go
for i := 0; i < len(arreglo); i++ {
    if arreglo[i] % 2 != 0 {
        arreglo[i] = 0
    }
}
fmt.Println("Sin impares:", arreglo)
```

### ✏️ Multiplicar todos los valores por su índice

#### Go

```go
for i := 0; i < len(arreglo); i++ {
    arreglo[i] = arreglo[i] * i
}
fmt.Println("Multiplicado por índice:", arreglo)
```

## 5. Búsqueda

### 🔍 Búsqueda lineal

La **búsqueda lineal** recorre el arreglo elemento por elemento desde el inicio hasta encontrar el valor buscado o llegar al final.

**Complejidad:** O(n) — en el peor caso recorre todos los elementos.

#### Go

```go
package main

import "fmt"

func busquedaLineal(arreglo [10]int, objetivo int) int {
    for i := 0; i < len(arreglo); i++ {
        if arreglo[i] == objetivo {
            return i // Retorna el índice donde se encontró
        }
    }
    return -1 // No encontrado
}

func main() {
    arreglo := [10]int{4, 15, 7, 23, 9, 42, 1, 88, 36, 17}
    objetivo := 42

    resultado := busquedaLineal(arreglo, objetivo)

    if resultado != -1 {
        fmt.Printf("Valor %d encontrado en el índice %d\n", objetivo, resultado)
    } else {
        fmt.Printf("Valor %d no encontrado\n", objetivo)
    }
}
```

## 6. Comparativa entre lenguajes

| Aspecto                    | Go                                   | C++                                  |
|----------------------------|--------------------------------------|--------------------------------------|
| **Tipado**                 | Fuerte y estático                    | Fuerte y estático                    |
| **Tamaño del array**       | Fijo, parte del tipo (`[10]int`)     | Fijo con arrays nativos              |
| **Arrays dinámicos**       | Slices (`[]int`)                     | `std::vector<int>`                   |
| **Índice base**            | 0                                    | 0                                    |
| **Verificación de límites**| En tiempo de ejecución (panic)       | No verificado (comportamiento indefinido) |
| **For-each**               | `for i, v := range arr`              | `for (int v : arr)`                  |
| **Paso a función**         | Por valor (copia) o por referencia   | Por puntero o referencia             |
| **Gestión de memoria**     | Automática (GC)                      | Manual o con RAII / smart pointers   |

---

> **Conclusión:** Ambos lenguajes manejan arrays de forma similar en cuanto a indexación y operaciones básicas. La diferencia más notable es que Go gestiona la memoria automáticamente con su garbage collector, mientras que C++ ofrece mayor control pero requiere mayor cuidado al manejar memoria. Para uso dinámico, Go favorece los **slices** y C++ los **vectores** de la STL.