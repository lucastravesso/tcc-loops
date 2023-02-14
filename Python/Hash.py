import datetime

hashmap = {}
horaDeInicio = datetime.datetime.now()
for i in range(1000000):
    hashmap[i] = 0
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((int((2 * len(hashmap) * (24 + 8)) + 240) / 1024) / 1024))

hashmap.clear()
horaDeInicio = datetime.datetime.now()
for i in range(50000000):
    hashmap[i] = 0
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((int((2 * len(hashmap) * (24 + 8)) + 240) / 1024) / 1024))

hashmap.clear()
horaDeInicio = datetime.datetime.now()
for i in range(100000000):
    hashmap[i] = 0
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((int((2 * len(hashmap) * (24 + 8)) + 240) / 1024) / 1024))

hashmap.clear()
horaDeInicio = datetime.datetime.now()
for i in range(150000000):
    hashmap[i] = 0
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((int((2 * len(hashmap) * (24 + 8)) + 240) / 1024) / 1024))

hashmap.clear()
horaDeInicio = datetime.datetime.now()
for i in range(200000000):
    hashmap[i] = 0
print("Horario de finalizacao:", (datetime.datetime.now() - horaDeInicio).total_seconds())
print("Uso de memoria: {:.0f} MB".format((int((2 * len(hashmap) * (24 + 8)) + 240) / 1024) / 1024))
