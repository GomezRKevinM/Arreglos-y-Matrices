# ARRAYS 

## Fundamentos

### ✔ Concepto de arreglo

Un arreglo es una estructura de datos que permite almacenar varios valores en una sola variable, organizados mediante posiciones (índices).

Por ejemplo, en lugar de manejar variables separadas para valores como precios de vehículos o ventas, se puede usar un arreglo para agruparlos todos.

### ✔ Tipos de datos que puede almacenar

En TypeScript, los arreglos pueden almacenar:

* Números → number[]
* Texto → string[]
* Booleanos → boolean[]
* Objetos → por ejemplo, vehículos o clientes

```typescript
let numeros: number[] = [1, 2, 3];
let nombres: string[] = ["Juan", "Ana"];
```
### ✔ Diferencia entre tamaño fijo y dinámico


En TypeScript, los arreglos son dinámicos, es decir:
* Se pueden agregar elementos (push)
* Se pueden eliminar elementos

Esto los hace más flexibles para trabajar con datos reales.

### ✔ Indexación y posiciones

Los arreglos usan índices que comienzan en 0:

```typescript
let ejemplo = [10, 20, 30];
```
* ejemplo[0] → 10
* ejemplo[1] → 20
* ejemplo[2] → 30

### ✔ Operaciones básicas

Las operaciones más comunes son:

* Declarar
* Inicializar
* Recorrer
* Modificar

## Actividades
### 1. Declaración y creación de un arreglo
   
Vamos a crear un arreglo de 10 enteros, inicializado con valores aleatorios

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


### 2. Recorrido e impresión
✔ Con bucle for clásico
```typescript
console.log("recorriendo por bucle For");
for (let i = 0; i < numeros.length; i++) {
    console.log(`\tElemento ${i}: ${numeros[i]}`);
}

```
Este tipo de recorrido es muy importante porque permite trabajar con el índice directamente.

✔ Con for-each 
```typescript
console.log("recorriendo por bucle ForEach");
numeros.forEach((valor, index) => {
    console.log(`\tElemento ${index}: ${valor}`);
});
```

Es más simple, pero no permite acceder fácilmente a la posición.

### 3. Modificación
✔ Cambiar todos los valores impares por cero

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


✔ Multiplicar todos los valores por su índice

```typescript
numeros2.forEach((valor,index) => {

    numeros2[index] *= index;
    console.log(`\tElemento ${index}: ${valor} * ${index} = ${numeros2[index]}`);

})
```
Este código recorre el arreglo `numeros2` usando `forEach`, que permite acceder tanto al valor de cada elemento como a su posición (índice). En cada iteración, toma el número actual y lo multiplica por su índice, guardando el resultado en la misma posición del arreglo, es decir, modifica directamente la lista original. Luego, imprime en consola una línea que muestra la operación realizada, indicando el índice, el valor original y el resultado de la multiplicación. En resumen, el código transforma cada elemento del arreglo multiplicándolo por su posición y va mostrando el proceso paso a paso.


### 4. Búsqueda
 
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


### 5. Comparativa (TypeScript)
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


* TypeScript → más control, menos errores, pero más estricto
* Python → más simple, más flexible, pero menos control