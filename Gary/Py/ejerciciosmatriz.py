matriz = []
contador = 1

for i in range(3):
    fila = []
    for j in range(3):
        fila.append(contador)
        contador += 1
    matriz.append(fila)

print("Matriz:")
for fila in matriz:
    print(fila)

print("**********************************")

print("Imprimir la matriz en forma de tabla:")
for i in range(len(matriz)):
    for j in range(len(matriz[i])):
        print(matriz[i][j], end="\t")
    print()

print("**********************************")

print("Recorrer por columnas:")
for j in range(len(matriz[0])):
    for i in range(len(matriz)):
        print(matriz[i][j], end="\t")
    print()

print("**********************************")

print("Sumar todos los elementos:")
suma = 0

for i in range(3):
    for j in range(3):
        suma += matriz[i][j]

print("Suma total:", suma)

print("**********************************")

matriz[0], matriz[2] = matriz[2], matriz[0]

print("Intercambiar la primera fila con la ultima:")
for fila in matriz:
    print(fila)