const fourNumCombos = []; //Empty Array for four digit numbers
const createCombo = () => String(Math.floor(Math.random() * Math.pow(10, 4))).padStart(4, '0'); //4 Digit Number Generator with leading 0s

//Adds all possible combinations of 4 digit numbers to our four digit array
function addCombos() {
    do {
        let num = createCombo();
        if (!fourNumCombos.includes(num)) {
            fourNumCombos.push(num);
        }
    }   while (fourNumCombos.length < Math.pow(10, 4));
    return fourNumCombos;
}

console.log(addCombos().sort()); //Prints Array of all 10,000 possible outcomes in random order