# MATRIZ

## Fundamentos

### ✔ Concepto de matriz

Una matriz es una estructura de datos bidimensional, es decir, un arreglo que contiene otros arreglos en Typescript, o una lista de listas en Python.

Se utiliza cuando necesitamos organizar información en forma de tabla, por ejemplo:

* Filas → días
* Columnas → ventas o registros

En TypeScript se trabaja con arrays tipados (number[][]), mientras que en Python se usan listas (list), que son más flexibles porque no requieren definir el tipo de dato.

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

En ambos lenguajes el acceso a los datos es igual (doble índice), lo que facilita pasar de uno a otro sin cambiar la lógica.

### ✔ Declaración e inicialización

En <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>, una matriz se declara así:

```typescript
let matriz: number[][] = [];
```

Esto significa que hay un arreglo que contiene arreglos de números.

En <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/> , se hace así:

```python
matriz = []
```
TypeScript exige especificar el tipo (number[][]), lo que lo hace más estricto y seguro. Python no requiere esto, lo que lo hace más simple pero menos controlado.

### ✔ Recorridos por filas y columnas

* Por filas → recorres primero las filas, luego columnas
* Por columnas → recorres primero columnas, luego filas

Esto cambia completamente la forma de leer los datos.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

```typescript
for (let i = 0; i < matriz.length; i++) {
    for (let j = 0; j < matriz[i].length; j++) {
        console.log(matriz[i][j]);
    }
}
```
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        print(matriz[i][j])
```
La lógica es exactamente la misma, solo cambia la sintaxis. Python es más corto, mientras que TypeScript es más estructurado.

### ✔ Matrices irregulares

En <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/> también existen matrices irregulares, donde cada fila puede tener diferente tamaño:

```typescript
let irregular: number[][] = [
    [1, 2],
    [3, 4, 5],
    [6]
];
```
En <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
irregular = [
    [1, 2],
    [3, 4, 5],
    [6]
]
```
Ambos lenguajes permiten matrices irregulares, pero en Python es más común usarlas debido a su flexibilidad y tipado dinámico.

## Actividades
### 1. Declaración e inicialización
* Crear una matriz 3x3 de enteros en lenguaje de programación (<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/> y <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>)
* Inicializar con valores del 1 al 9.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

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
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
matriz = []
contador = 1

for i in range(3):
    fila = []
    for j in range(3):
        fila.append(contador)
        contador += 1
    matriz.append(fila)

print("Matriz:")
for fila in matriz:
    print(fila)
```
### 2. Recorrido

* Imprimir la matriz en forma de tabla.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

```typescript
for (let i = 0; i < matriz.length; i++) {
    let fila = "";
    for (let j = 0; j < matriz[i].length; j++) {
        fila += matriz[i][j] + "\t";
    }
    console.log(fila);
}
```
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
print("Imprimir la matriz en forma de tabla:")
for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        print(matriz[i][j], end="\t")
    print()
```

* Recorrerla por columnas.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

```typescript
for (let j = 0; j < 3; j++) {
    let columna = "";
    for (let i = 0; i < 3; i++) {
        columna += matriz[i][j] + "\t";
    }
    console.log(columna);
}
```
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
print("Recorrer por columnas:")
for j in range(len(matriz[0])):
    for i in range(len(matriz)):
        print(matriz[i][j], end="\t")
    print()
```
### 3. Operaciones

* Sumar todos los elementos.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

```typescript
let suma = 0;
for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
        suma += matriz[i][j];
    }
}
console.log("Suma total de la matriz:", suma);
```
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
print("Sumar todos los elementos:")
suma = 0

for i in range(3):
    for j in range(3):
        suma += matriz[i][j]

print("Suma total:", suma)
```

* Intercambiar la primera fila con la última.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

```typescript
let temp = matriz[0];
matriz[0] = matriz[2];
matriz[2] = temp;
console.log("Matriz después del intercambio:");
console.table(matriz);
```
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
matriz[0], matriz[2] = matriz[2], matriz[0]

print("Intercambiar la primera fila con la ultima:")
for fila in matriz:
    print(fila)
```