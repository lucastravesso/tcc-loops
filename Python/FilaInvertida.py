import random
import time
import psutil
from collections import deque

MAX_VALOR = 9
NUM_LINHAS = 100
NUM_COLUNAS = 10

matriz = [[random.randint(1, MAX_VALOR) for j in range(NUM_COLUNAS)] for i in range(NUM_LINHAS)]

inicio = time.time()
pmc_start = psutil.Process().memory_info()

filasPorValor = [[] for j in range(NUM_COLUNAS)]
for j in range(NUM_COLUNAS):
    filas = []
    for valor in range(1, MAX_VALOR+1):
        fila = deque()
        for i in range(NUM_LINHAS):
            if matriz[i][j] == valor:
                fila.append(i)
        if len(fila) > 0:
            filas.append(fila)
    filasPorValor[j] = filas

fim = time.time()
tempo = fim - inicio
pmc_end = psutil.Process().memory_info()
memoria = pmc_end.rss - pmc_start.rss

print(f"Memoria: {memoria / 1024 / 1024:.2f} MB")
print(f"Tempo: {tempo:.4f} segundos")

for linha in matriz:
    print("\t".join(str(valor) for valor in linha))

for j, filas in enumerate(filasPorValor):
    print(f"{chr(ord('A') + j)}:")
    for i, fila in enumerate(filas):
        valor = i+1
        print(f"{valor}: {' '.join(str(i) for i in fila)}")
