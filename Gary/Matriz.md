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
