// Write your function here:
const grades = {59: 'F', 69: 'D', 79: 'C', 89: 'B', 100: 'A'};

function checkValidGrade() {
    array1 = Array.from(arguments);
    return array1.every(element => element >= 0 && element <= 100);
}

function finalGrade(grade1, grade2, grade3) {
    if (!checkValidGrade(grade1, grade2, grade3)) {
        return `You entered an invalid grade!`;
    }
    const averageGrade = (grade1 + grade2 + grade3) / 3;
    const gradeRange = Object.keys(grades).find(grade => averageGrade <= grade);
    return grades[gradeRange]; 
}

console.log(finalGrade(65, 92, 95)) // Prints 'B'
console.log(finalGrade(100, 80, 90)) // Prints 'A'
console.log(finalGrade(101, 101, 101)); //Prints 'You have entered an invalid grade.'
console.log(finalGrade(-1, -1, -1)); //Prints 'You have entered an invalid grade.'