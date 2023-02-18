const hashMap = new Map();
const horaDeInicio = new Date();
let pmc_end = {};

for (let i = 0; i < 10000000; i++) {
    hashMap.set(i, 0);
}
const process = require('process');
pmc_end = process.memoryUsage();

const horaDeFim = new Date();
const duration = (horaDeFim - horaDeInicio) / 1000;

console.log(`Memoria ${(pmc_end.heapUsed / 1024 / 1024).toFixed(2)} MB`);
console.log(`Tempo ${duration.toFixed(2)} segundos`);
hashMap.clear();