import datetime
import sys
from collections import deque

fila = deque()
horaDeInicio = datetime.datetime.now()
for i in range(1000000):
    fila.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(fila)/1024)/1024))

fila.clear()
horaDeInicio = datetime.datetime.now()
for i in range(50000000):
    fila.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(fila)/1024)/1024))

fila.clear()
horaDeInicio = datetime.datetime.now()
for i in range(100000000):
    fila.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(fila)/1024)/1024))

fila.clear()
horaDeInicio = datetime.datetime.now()
for i in range(150000000):
    fila.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(fila)/1024)/1024))

fila.clear()
horaDeInicio = datetime.datetime.now()
for i in range(200000000):
    fila.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(fila)/1024)/1024))


