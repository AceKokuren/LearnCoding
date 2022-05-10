const numCombos = digits => new Array(Math.pow(10, digits)).fill().map((a,b) => b.toString().padStart(digits, '0'));

console.log(new Array(10).fill().map((a,b) => b.toString()));

console.log(numCombos(4));
console.log(numCombos(5));