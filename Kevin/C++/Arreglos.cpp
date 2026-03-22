#include "Arreglos.h"
#include "NumberUtils.h"
#include <iostream>
#include <format>
#include <thread>
using namespace std;

namespace ARREGLOS {

    void runArreglos() {
        // Declaración y creación de un arreglo
        vector<int> arreglo = NumberUtils::generarArreglo(10,1,100);
        vector<int> arreglo2 = NumberUtils::generarArreglo(5,1,10);
        recorrerForEach(arreglo);
        cambiarImpares(arreglo);
        recorrerFor(arreglo);

        recorrerFor(arreglo2);
        multiplicarValuesIndices(arreglo2);
        recorrerFor(arreglo2);
        cout << "Comprobando si el numero 2 esta en el arrelgo\n";
        bool existe = findValue(arreglo, 2);
        cout << "Resultado: " << (existe ? "El numero 2 existe en el arreglo" : "El numero 2 no existe en el arreglo") << "\n";
    }

    void recorrerForEach(vector<int> arreglo) {
        cout << std::string(60, '=') << "\n";
        cout << "Recorriendo Arreglo (forEach)\n";
        cout << std::string(60, '=') << "\n";

        cout << "-----------------\n";
        cout << "| index | value |\n";
        cout << "-----------------\n";

        int i = 0;
        for ( int value: arreglo) {
            cout << format("| {:5} | {:5} |\n", i, value);
            i++;
        }
        cout << "-----------------\n";
    }

    void recorrerFor(std::vector<int> arreglo) {
        cout << string(40, '=') << "\n";
        cout << "Recorriendo Arreglo (for)\n";
        cout << string(40, '=') << "\n";

        cout << "-----------------\n";
        cout << "| index | value |\n";
        cout << "-----------------\n";

        for (int i = 0; i < arreglo.size(); i++) {
            cout << format("| {:5} | {:5} |", i, arreglo[i]) << "\n";
        }
        cout << "-----------------\n";
    }

    void cambiarImpares(std::vector<int>& arreglo) {
        cout << "Cambiando Impares a 0" << "\n";
        int impares = 0;
        for (int i = 0; i < arreglo.size(); i++) {
            if (arreglo[i] % 2 != 0) {
                impares++;
                cout << arreglo[i] << " impar encontrado y cambiado a 0" << "\n";
                arreglo[i] = 0;
            }
        }
        cout << format("Elementos totales: {}\n", arreglo.size());
        cout << format("impares encontrados: {}\n", impares);
    }

    void multiplicarValuesIndices(std::vector<int> &arreglo) {
        cout << "Multiplicando valores (Index * Value)" << "\n";
        for (int i = 0; i < arreglo.size(); i++) {
            cout << format("-> Index: {} valor: {} producto: {}\n",i, arreglo[i],i*arreglo[i]);
            arreglo[i] *= i;
        }
    }

    bool findValue(std::vector<int> arreglo, int valor) {
        auto it = std::find(arreglo.begin(), arreglo.end(), valor);
        if (it != arreglo.end()) {
            return true;
        }else {
            return false;
        }
    }
}

