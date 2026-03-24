import {Utils} from "./Utils";

let numeros: number[];

numeros = Utils.getRandomListInt(10, 1, 100);

console.log(numeros);

console.log("recorriendo por bucle For");
for (let i = 0; i < numeros.length; i++) {
    console.log(`\tElemento ${i}: ${numeros[i]}`);
}

console.log("recorriendo por bucle ForEach");
numeros.forEach((element, index) => {
    console.log(`\tElemento ${index}: ${element}`);
});