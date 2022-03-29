//Adds all possible combinations of set number of digit numbers to our combo array
function digitCombos(numOfDigits) {
    let combos = [];
    let i = 0;
    while (i !== Math.pow(10, numOfDigits)) {
        combos.push(String(i).padStart(numOfDigits, '0'));
        i++;
    }
    return combos;
}

const numCombos = digits => new Array(Math.pow(10, digits)).fill().map((a,b) => b.toString().padStart(digits, '0'));
console.log(new Array(10).fill().map((a,b) => b.toString()));

//console.log(numCombos(4));
//console.log(numCombos(5));
//console.log(digitCombos(4)); //Prints Array of all possible 4 digit numbers in order
//console.log(digitCombos(5)); //Prints Array of all possible 5 digit numbers in order