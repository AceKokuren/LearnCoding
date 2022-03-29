const createCombo = (numOfDigits) => String(Math.floor(Math.random() * Math.pow(10, numOfDigits))).padStart(numOfDigits, '0'); //4 Digit Number Generator with leading 0s

//Adds all possible combinations of set number of digit numbers to our combo array
function digitCombos(numOfDigits) {
    let combos = [];
    do {
        let num = createCombo(numOfDigits);
        if (!combos.includes(num)) {
            combos.push(num);
        }
    }   while (combos.length < Math.pow(10, numOfDigits));
    return combos;
}

console.log(digitCombos(4)); //Prints Array of all possible 4 digit numbers in random order
console.log(digitCombos(2).sort()); 