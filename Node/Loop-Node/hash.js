var hashMap = new Map();
var horaDeInicio = new Date();
for (var i = 0n; i < 100000000n; i++) {
    hashMap.set(i, 0);
}
console.log("Horário de finalização:", (new Date().getTime() - horaDeInicio.getTime()) / 1000, "segundos");
var usoDeMemoria = (2 * hashMap.size * (24 + 8) + 240) / 1024 / 1024;
console.log("Uso de memória:", usoDeMemoria.toFixed(0), "MB");
hashMap.clear();
