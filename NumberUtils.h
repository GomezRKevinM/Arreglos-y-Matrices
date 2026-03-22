#include <random>
#include <vector>
#ifndef NUMBERUTILS_H
#define NUMBERUTILS_H

namespace NumberUtils {


    std::vector<int> generarArreglo(int size, int min, int max) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dist(min, max);

        std::vector<int> arreglo;
        for (int i = 0; i < size; i++) {
            arreglo.push_back(dist(gen));
        }
        return arreglo;
    }

}

#endif //ARREGLOS_Y_MATRICES_NUMBERUTILS_H