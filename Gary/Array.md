# ARRAYS 

## Fundamentos

### ✔ Concepto de arreglo

Un arreglo es una estructura de datos que permite almacenar varios valores en una sola variable, organizados mediante posiciones (índices).

Por ejemplo, en lugar de manejar variables separadas para valores como precios de vehículos o ventas, se puede usar un arreglo para agruparlos todos.

En Python no se usan “arrays” como tal en lo básico, sino listas (lists), que cumplen la misma función: almacenar varios valores en una sola variable.

Por ejemplo, en lugar de guardar cada venta o precio en variables separadas , se agrupan en una lista.

### ✔ Tipos de datos que puede almacenar

En  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/> TypeScript
, los arreglos pueden almacenar:

* Números → number[]
* Texto → string[]
* Booleanos → boolean[]
* Objetos → por ejemplo, vehículos o clientes

```typescript
let numeros: number[] = [1, 2, 3];
let nombres: string[] = ["Juan", "Ana"];
```
A diferencia de TypeScript,<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>  Python permite que una lista tenga diferentes tipos de datos al mismo tiempo:
```python
numeros = [1, 2, 3]
mezcla = [1, "texto", True]
```
Esto hace a Python más flexible, pero menos estricto.

### ✔ Diferencia entre tamaño fijo y dinámico


En TypeScript <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/> , los arreglos son dinámicos, es decir:
* Se pueden agregar elementos (push)
* Se pueden eliminar elementos

Esto los hace más flexibles para trabajar con datos reales.

Las listas en Python<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/> son dinámicas, es decir:

* Puedes agregar elementos → append()
* Puedes eliminar elementos → remove()

No necesitas definir un tamaño desde el inicio.

### ✔ Indexación y posiciones

Los arreglos tanto  en <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/> como en <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/> usan índices que comienzan en 0:

```typescript
let ejemplo = [10, 20, 30];
```
* ejemplo[0] → 10
* ejemplo[1] → 20
* ejemplo[2] → 30

### ✔ Operaciones básicas

Las operaciones más comunes tanto en <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/> como en <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/> son:

* Declarar
* Inicializar
* Recorrer
* Modificar

## Actividades
### 1. Declaración y creación de un arreglo
   
Vamos a crear un arreglo de 10 enteros, inicializado con valores aleatorios

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

 ```typescript
    static getRandomInt(min: number, max: number): number {
        min = Math.ceil(min);
        max = Math.floor(max);
        return Math.floor(Math.random() * (max - min + 1)) + min;
    }

    static getRandomListInt(size: number, min: number, max: number): number[] {
        let list: number[] = [];
        for (let i = 0; i < size; i++) {
            list.push(this.getRandomInt(min, max));
        }
        return list;
    }
```


Este código define dos funciones que trabajan juntas para generar números aleatorios. La primera, `getRandomInt`, se encarga de devolver un número entero al azar dentro de un rango específico, asegurándose de incluir tanto el valor mínimo como el máximo; para lograrlo, ajusta los límites a enteros y usa `Math.random()` junto con algunos cálculos para distribuir correctamente los posibles resultados. La segunda función, `getRandomListInt`, utiliza la anterior dentro de un ciclo para construir una lista de varios números aleatorios: repite el proceso tantas veces como se indique en el parámetro `size` y va guardando cada número en un arreglo. En conjunto, estas funciones permiten generar fácilmente uno o varios números aleatorios dentro de un rango definido.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
import random

valores = []

for i in range(10):
    valores.append(random.randint(0, 99))

print("Lista inicial:", valores)
```
Este código en Python crea una lista vacía y luego la llena con 10 números aleatorios entre 0 y 99 usando un ciclo for; en cada repetición se genera un número con random.randint y se agrega a la lista con append, y al final simplemente imprime la lista completa, por lo que cada vez que lo ejecutes vas a ver valores diferentes porque son aleatorios.

### 2. Recorrido e impresión
✔ Con bucle for clásico

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

```typescript
console.log("recorriendo por bucle For");
for (let i = 0; i < numeros.length; i++) {
    console.log(`\tElemento ${i}: ${numeros[i]}`);
}

```
Este tipo de recorrido es muy importante porque permite trabajar con el índice directamente.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
print("recorriendo por bucle For")

for i, valor in enumerate(valores):
    print(f"\tElemento {i}: {valor}")

```
`enumerate()` en Python se usa para recorrer una lista (u otro iterable) obteniendo al mismo tiempo el índice y el valor de cada elemento en cada iteración del ciclo, es decir, en lugar de acceder manualmente a las posiciones con `range(len(lista))`, te entrega automáticamente pares como `(índice, valor)`, lo que hace el código más claro, corto y seguro, permitiéndote trabajar directamente con ambos datos dentro del `for` sin riesgo de errores con los índices.

✔ Con for-each 

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

```typescript
console.log("recorriendo por bucle ForEach");
numeros.forEach((valor, index) => {
    console.log(`\tElemento ${index}: ${valor}`);
});
```

Es más simple, pero no permite acceder fácilmente a la posición.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
for valor in valores:
    print(valor)
```
Aunque no existe un método .forEach() como en JavaScript, de esta forma podemos simular el comportamiento de “forEach”, ya que hace exactamente lo mismo: recorrer cada elemento y ejecutar una acción.

### 3. Modificación
✔ Cambiar todos los valores impares por cero

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

```typescript
   static modificarImpares(list: number[]): void {
        for (let i = 0; i < list.length; i++) {
            if (list[i] % 2 !== 0) {
                list[i] = 0;
            }
        }
    }
```
Esta función recorre una lista de números y modifica directamente su contenido. Lo que hace es revisar cada elemento del arreglo y verificar si es impar. Cuando encuentra un número impar, lo reemplaza por 0. Como la función es `void`, no devuelve nada, sino que cambia la lista original que se le pasa como parámetro. En resumen, convierte todos los números impares de la lista en ceros, manteniendo intactos los pares.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
def modificar_impares(lista):
    for i in range(len(lista)):
        if lista[i] % 2 != 0:
            lista[i] = 0

modificar_impares(valores)
print("Lista modificada:", valores)
```
La función recorre la lista posición por posición (igual que en TypeScript). Cada vez que encuentra un número impar, lo reemplaza por 0. Como en Python las listas se pasan por referencia, los cambios se aplican directamente sobre la lista original.

✔ Multiplicar todos los valores por su índice

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

```typescript
numeros2.forEach((valor,index) => {

    numeros2[index] *= index;
    console.log(`\tElemento ${index}: ${valor} * ${index} = ${numeros2[index]}`);

})
```
Este código recorre el arreglo `numeros2` usando `forEach`, que permite acceder tanto al valor de cada elemento como a su posición (índice). En cada iteración, toma el número actual y lo multiplica por su índice, guardando el resultado en la misma posición del arreglo, es decir, modifica directamente la lista original. Luego, imprime en consola una línea que muestra la operación realizada, indicando el índice, el valor original y el resultado de la multiplicación. En resumen, el código transforma cada elemento del arreglo multiplicándolo por su posición y va mostrando el proceso paso a paso.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
numeros2 = [10, 20, 30, 40]

for index, valor in enumerate(numeros2):
    numeros2[index] *= index
    print(f"\tElemento {index}: {valor} * {index} = {numeros2[index]}")
print("Lista final:", numeros2)
```
En Python no usamos forEach como en TypeScript, pero el equivalente más cercano es un for con enumerate, que nos da tanto el valor como su índice al mismo tiempo. Aquí recorremos la lista y, en cada posición, multiplicamos el valor por su índice. Luego imprimimos el resultado mostrando el cálculo paso a paso.

### 4. Búsqueda
 
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>

 ```typescript
 static encontrarElemento(list: number[], elemento: number): number {
    
        for (let i = 0; i < list.length; i++) {
            if (list[i] === elemento) {
                return i;
            }
        }
        return -1;
    }
```
Esta función recorre una lista de números con el objetivo de encontrar un elemento específico. Va comparando uno por uno cada valor del arreglo con el número que se está buscando, y si encuentra una coincidencia, devuelve inmediatamente la posición (índice) en la que está ese elemento. Si termina de recorrer toda la lista y no lo encuentra, entonces retorna -1, indicando que el elemento no existe en el arreglo.

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/>

```python
def encontrar_elemento(valores, elemento):
    for i in range(len(valores)):
        if valores[i] == elemento:
            return i
    return -1

elemento_a_encontrar = 17

indice = encontrar_elemento(valores, elemento_a_encontrar)
if indice != -1:
    print(f"El elemento {elemento_a_encontrar} se encuentra en la posición {indice}.")
else:
    print(f"El elemento {elemento_a_encontrar} no se encuentra en la lista.")
```
Esta función recorre la lista elemento por elemento, comparando cada valor con el que se esta buscando. Si lo encuentra, devuelve la posición (índice), igual que en TypeScript. Si termina el recorrido y no lo encuentra, retorna -1, lo cual es una forma común de indicar que el elemento no existe en la lista.

### 5. Comparativa 
| Característica              | TypeScript 🟦                          | Python 🟨                       |
| --------------------------- | -------------------------------------- | ------------------------------- |
| Tipo de tipado              | Estático                               | Dinámico                        |
| Definición de tipos         | Obligatoria (`number[]`)               | No obligatoria                  |
| Tipado fuerte/débil         | Fuerte (estricto)                      | Fuerte pero flexible            |
| Mezcla de tipos en arreglos |  No permitida                         |  Permitida                     |
| Tamaño del arreglo          | Dinámico                               | Dinámico                        |
| Declaración de arreglo      | `let arr: number[] = []`               | `arr = []`                      |
| Agregar elementos           | `arr.push(10)`                         | `arr.append(10)`                |
| Recorrido (for clásico)     | `for (let i = 0; i < arr.length; i++)` | `for i in range(len(arr))`      |
| Recorrido (for-each)        | `for (let x of arr)`                   | `for x in arr`                  |
| Acceso por índice           | `arr[i]`                               | `arr[i]`                        |
| Modificación de valores     | `arr[i] = valor`                       | `arr[i] = valor`                |
| Sintaxis                    | Más estructurada                       | Más simple y corta              |
| Control de errores          | En compilación                         | En ejecución                    |
| Facilidad de aprendizaje    | Media                                  | Alta                            |
| Uso recomendado             | Proyectos grandes                      | Aprendizaje y desarrollo rápido |


<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" width="20"/>  más control, menos errores, pero más estricto

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" width="20"/> más simple, más flexible, pero menos control