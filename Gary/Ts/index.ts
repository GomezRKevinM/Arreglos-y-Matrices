import {Utils} from "./Utils";

console.log("**********************************");
console.log("         ***ARREGLOS***");

console.log("");
console.log("arreglo de 10 numeros enteros aleatorios: ");
let numeros: number[];
numeros = Utils.getRandomListInt(10, 1, 100);
console.log(numeros);
console.log("");


console.log("recorriendo por bucle For");
for (let i = 0; i < numeros.length; i++) {
    console.log(`\tElemento ${i}: ${numeros[i]}`);
}
console.log("");

console.log("recorriendo por bucle ForEach");
numeros.forEach((valor, index) => {
    console.log(`\tElemento ${index}: ${valor}`);
});
console.log("");
console.log("Cambiar todos los valores impares por cero");
Utils.modificarImpares(numeros);
console.log(numeros);
let numeros2: number[] = Utils.getRandomListInt(10, 1, 100);

console.log("");
console.log("Multiplicar todos los valores por su índice");
console.log("Nuevo arreglo:"+ numeros2);

numeros2.forEach((valor,index) => {

    numeros2[index] *= index;
    console.log(`\tElemento ${index}: ${valor} * ${index} = ${numeros2[index]}`);

})
console.log("Nuevo arreglo:"+ numeros2);

console.log("");
console.log("Buscar un elemento en el arreglo");

let posicion: number = Utils.encontrarElemento(numeros2, 0);
console.log((posicion >= 0) ? `El elemento se encuentra en la posición ${posicion}` : "El elemento no se encuentra en el arreglo");
console.log("");

console.log("*************************************");
console.log("         ***MATRICES***");
console.log("");

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

console.log("");
console.log("Imprimir la matriz en forma de tabla:");
for (let i = 0; i < matriz.length; i++) {
    let fila = "";
    for (let j = 0; j < matriz[i].length; j++) {
        fila += matriz[i][j] + "\t";
    }
    console.log(fila);
}

console.log("");
console.log("Recorrerla por columnas:");
for (let j = 0; j < 3; j++) {
    let columna = "";
    for (let i = 0; i < 3; i++) {
        columna += matriz[i][j] + "\t";
    }
    console.log(columna);
}

console.log("");
console.log("Sumar todos los elementos:");
let suma = 0;
for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
        suma += matriz[i][j];
    }
}
console.log("Suma total de la matriz:", suma);

console.log("");
console.log("Intercambiar la primera, por la ultima fila:");
let temp = matriz[0];
matriz[0] = matriz[2];
matriz[2] = temp;
console.log("Matriz despues del intercambio:");
console.table(matriz);