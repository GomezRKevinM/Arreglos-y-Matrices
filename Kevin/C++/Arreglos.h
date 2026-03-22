//
// Created by Songu on 18/03/2026.
//

#ifndef ARREGLO
#define ARREGLO
#include <vector>


namespace ARREGLOS {

        void runArreglos();

        // 1. Reccorido e impresión
        void recorrerFor(std::vector<int> arreglo);
        void recorrerForEach(std::vector<int> arreglo);

        // 2. Modificación
        void cambiarImpares(std::vector<int>& arreglo);
        void multiplicarValuesIndices(std::vector<int>& arreglo);

        // 3. Busqueda
        bool findValue(std::vector<int> arreglo, int valor);

}

#endif //ARREGLO