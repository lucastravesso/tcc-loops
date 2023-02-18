let hashMap: Map<bigint, number> = new Map();
let horaDeInicio: Date = new Date();
for (let i: bigint = 0n; i < 100000000n; i++) {
    hashMap.set(i, 0);
}
console.log("Horário de finalização:", (new Date().getTime() - horaDeInicio.getTime()) / 1000, "segundos");
let usoDeMemoria: number = (2 * hashMap.size * (24 + 8) + 240) / 1024 / 1024;
console.log("Uso de memória:", usoDeMemoria.toFixed(0), "MB");
hashMap.clear();