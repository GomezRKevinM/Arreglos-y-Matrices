#ifndef Matriz
#define Matriz

#include <vector>


namespace Matrices {
    void run();

    void imprimirTable(std::vector<std::vector<int>> matriz);

    void imprimirMatriz(std::vector<std::vector<int>> matriz);

    void recorrerPorColumnas(std::vector<std::vector<int>> matriz);

    int sumarMatriz(std::vector<std::vector<int>> matriz);

    void intercambiarFilas(std::vector<std::vector<int>>& matriz,int fila1, int fila2);
}

#endif