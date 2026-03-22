#include "Matrices.h"
#include <iostream>

using namespace std;
namespace Matrices {

    void run() {
        vector<vector<int>> matriz = {{1,2,3},{4,5,6},{7,8,9}};
        imprimirTable(matriz);
        intercambiarFilas(matriz,0,2);
        imprimirTable(matriz);
    }

    void imprimirTable(std::vector<std::vector<int>> matriz) {
        cout << string(40, '=') << "\n";
        cout << "Imprimiendo Tabla de la Matriz\n";
        cout << string(40, '=') << "\n";
        cout << "Matriz: ";
        imprimirMatriz(matriz);
        cout << endl;

        cout << string(13,'=') << "\n";
        cout << "|   Tabla   |" << "\n";
        cout << string(13,'=') << endl;
        for (int i = 0; i < matriz.size(); i++) {
            cout << "| " ;
            for (int j = 0; j < matriz[i].size(); j++) {
                cout << matriz[i][j] << " | ";
            }
            cout << "\n";
        }
    }

    void imprimirMatriz(std::vector<std::vector<int>> matriz) {
        cout << "{ ";
        for (int i = 0; i < matriz.size(); i++) {
        cout << " { ";
            for (int j = 0; j < matriz[i].size(); j++) {
                cout << matriz[i][j] << (j == matriz[i].size() - 1 ? "" : ", ");
            }
        cout << ( i == matriz.size() - 1 ? " }" : " }, ");
        }
        cout << " }" << endl;
    }

    void recorrerPorColumnas(std::vector<std::vector<int> > matriz) {
        for (int i = 0; i < matriz.size(); i++) {
            cout << "Columna " << i << ": {";
            for (int j = 0; j < matriz[i].size(); j++) {
                cout << matriz[j][i] << (j == matriz[i].size() - 1 ? "" : ", ");
            }
            cout << "}";
            cout << endl;
        }
    }

    int sumarMatriz(vector<vector<int>> matriz) {
        int suma = 0;
        for (int i = 0; i < matriz.size(); i++) {
            for (int j = 0; j < matriz[i].size(); j++) {
                suma += matriz[i][j];
            }
        }
        return suma;
    }

    void intercambiarFilas(std::vector<std::vector<int> > &matriz, int fila1, int fila2) {
        if (fila1 < 0 || fila2 < 0 || fila1 >= matriz.size() || fila2 >= matriz.size()) {
            cout << "Error: índices fuera de rango\n";
            return;
        }
        swap(matriz[fila1], matriz[fila2]);
    }
}
