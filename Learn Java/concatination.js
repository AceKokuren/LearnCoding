let str1 = 'Hello World';
let str2, str3, str4;

str2 = ' my name is ';
str3 = "NAME";
str4 = str1 += str2 += str3;
console.log(str4);

let convertHours;
const hours = 8;
const mins = hours * 60; 
console.log(`You have ${mins} minutes remaining!`);
