import datetime
import sys

pilha = []
horaDeInicio = datetime.datetime.now()
for i in range(1000000):
    pilha.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(pilha)/1024)/1024))

pilha.clear()
horaDeInicio = datetime.datetime.now()
for i in range(50000000):
    pilha.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(pilha)/1024)/1024))

pilha.clear()
horaDeInicio = datetime.datetime.now()
for i in range(100000000):
    pilha.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(pilha)/1024)/1024))

pilha.clear()
horaDeInicio = datetime.datetime.now()
for i in range(150000000):
    pilha.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(pilha)/1024)/1024))

pilha.clear()
horaDeInicio = datetime.datetime.now()
for i in range(200000000):
    pilha.append(i)
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((sys.getsizeof(pilha)/1024)/1024))


