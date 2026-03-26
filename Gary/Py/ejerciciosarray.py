import random

valores = []

for i in range(10):
    valores.append(random.randint(0, 99))

print("Lista inicial:", valores)


print("recorriendo por bucle For")

for i, valor in enumerate(valores):
    print(f"\tElemento {i}: {valor}")

for valor in valores:
    print(valor)

def modificar_impares(lista):
    for i in range(len(lista)):
        if lista[i] % 2 != 0:
            lista[i] = 0

modificar_impares(valores)
print("Lista modificada:", valores)

numeros2 = [10, 20, 30, 40]

for index, valor in enumerate(numeros2):
    numeros2[index] *= index
    print(f"\tElemento {index}: {valor} * {index} = {numeros2[index]}")

print("Lista final:", numeros2)

def encontrar_elemento(valores, elemento):
    for i in range(len(valores)):
        if valores[i] == elemento:
            return i
    return -1

elemento_a_encontrar = 17

indice = encontrar_elemento(valores, elemento_a_encontrar)
if indice != -1:
    print(f"El elemento {elemento_a_encontrar} se encuentra en la posición {indice}.")
else:
    print(f"El elemento {elemento_a_encontrar} no se encuentra en la lista.")