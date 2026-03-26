# MATRIZ

## Fundamentos

### ✔ Concepto de matriz

Una matriz es una estructura de datos bidimensional, es decir, un arreglo que contiene otros arreglos.

Se utiliza cuando necesitamos organizar información en forma de tabla, por ejemplo:

* Filas → días
* Columnas → ventas o registros


### ✔ Representación en memoria (fila-columna)

Una matriz se organiza en forma de filas y columnas:

```
[ [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9] ]
  ```

Para acceder a un valor se usa:

```typescript
matriz[fila][columna]
```
Ejemplo:

* matriz[0][1] → 2
* matriz[2][0] → 7

### ✔ Declaración e inicialización

En TypeScript, una matriz se declara así:

```typescript
let matriz: number[][] = [];
```

Esto significa que hay un arreglo que contiene arreglos de números.

### ✔ Recorridos por filas y columnas

* Por filas → recorres primero las filas, luego columnas
* Por columnas → recorres primero columnas, luego filas

Esto cambia completamente la forma de leer los datos.

### ✔ Matrices irregulares

En TypeScript también existen matrices irregulares, donde cada fila puede tener diferente tamaño:

```typescript
let irregular: number[][] = [
    [1, 2],
    [3, 4, 5],
    [6]
];
```

## Actividades
### 1. Declaración e inicialización
* Crear una matriz 3x3 de enteros en lenguaje de programación (Ts)
* Inicializar con valores del 1 al 9.

```typescript
let matriz: number[][] = [];
let contador = 1;
for (let i = 0; i < 3; i++) {
    matriz[i] = [];
    for (let j = 0; j < 3; j++) {
        matriz[i][j] = contador++;
    }
}
console.log("Matriz inicial:");
console.table(matriz);
```

### Recorrido

* Imprimir la matriz en forma de tabla.
```typescript
for (let i = 0; i < matriz.length; i++) {
    let fila = "";
    for (let j = 0; j < matriz[i].length; j++) {
        fila += matriz[i][j] + "\t";
    }
    console.log(fila);
}
```

* Recorrerla por columnas.
```typescript
for (let j = 0; j < 3; j++) {
    let columna = "";
    for (let i = 0; i < 3; i++) {
        columna += matriz[i][j] + "\t";
    }
    console.log(columna);
}
```
### Operaciones

* Sumar todos los elementos.
```typescript
let suma = 0;
for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
        suma += matriz[i][j];
    }
}
console.log("Suma total de la matriz:", suma);
```
* Intercambiar la primera fila con la última.
```typescript
let temp = matriz[0];
matriz[0] = matriz[2];
matriz[2] = temp;
console.log("Matriz después del intercambio:");
console.table(matriz);
```
