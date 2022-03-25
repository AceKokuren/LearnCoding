// Write your function here:
/*const grades = {59: 'F', 69: 'D', 79: 'C', 89: 'B', 100: 'A'};

function checkValidGrade() {
    for (let i = 0; i < arguments.length; i++) {
        if (arguments[i] < 0 || arguments[i] > 100) {
            return false;
        }
    }
    return true;
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
console.log(finalGrade(100, 80, 90)) // Prints 'A'*/

const grades = {59: 'F', 69: 'D', 79: 'C', 89: 'B', 100: 'A'};

function finalGrade(grade1, grade2, grade3) {
    if (grade1 < 0 || grade2 )
} 