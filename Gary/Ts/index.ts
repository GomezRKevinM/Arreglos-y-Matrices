import {Utils} from "./Utils";

// ARREGLOS
let numeros: number[];

numeros = Utils.getRandomListInt(10, 1, 100);

console.log(numeros);

console.log("recorriendo por bucle For");
for (let i = 0; i < numeros.length; i++) {
    console.log(`\tElemento ${i}: ${numeros[i]}`);
}

console.log("recorriendo por bucle ForEach");
numeros.forEach((valor, index) => {
    console.log(`\tElemento ${index}: ${valor}`);
});

Utils.modificarImpares(numeros);

console.log(numeros);

let numeros2: number[] = Utils.getRandomListInt(10, 1, 100);

console.log("Nuevo arreglo:"+ numeros2);

numeros2.forEach((valor,index) => {

    numeros2[index] *= index;
    console.log(`\tElemento ${index}: ${valor} * ${index} = ${numeros2[index]}`);

})

console.log("Nuevo arreglo:"+ numeros2);

let posicion: number = Utils.encontrarElemento(numeros2, 0);

console.log((posicion >= 0) ? `El elemento se encuentra en la posición ${posicion}` : "El elemento no se encuentra en el arreglo");

// MATRICES

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