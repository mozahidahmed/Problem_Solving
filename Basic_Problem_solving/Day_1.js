//01. Check whether a number is even or odd
//use variable
var num=41;
if(num % 2 == 0)
    console.log("is even.", num);
else
console.log("%d is odd.", num);

//use user input 
let num = prompt("Please enter your name:");
if (num % 2 == 0) {
    console.log("is even.", num);
}
else {
    console.log("%d is odd.", num);
}

//02. Check whether a character is a vowel or consonant
var c = 'a';
var lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');;
var uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

if (lowercase_vowel || uppercase_vowel) {
    console.log("Is a vawel");
}
else {
    console.log("consonent");
}
var c = prompt("");
var lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');;
var uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

if (lowercase_vowel || uppercase_vowel) {
    console.log("Is a vawel");
}
else {
    console.log("consonent");
}

//switch case
let letter = prompt("Enter a letter:");

switch(letter.toLowerCase()){
    case 'a':
    case 'i':
    case 'o':
    case 'u':
    console.log(letter + " is a vowel.");
    
    break;
    default:
        console.log("Consonent yors inter value")
        
    
}




//03. Find the largest number among three numbers
//normal variable 
var a = 267567; var b = 249; var c = 29; 
//functionality i mean function 
if (a > b && a > c) {
    console.log("big number is ", a);
}
else if (b > a && b > c) {
    console.log("big number is ", b);
}
else {
    console.log("big number is ", c);
}


// user input
var a = prompt("Enter number a:")
var b = prompt("Enter number b:")
var c = prompt("Enter number c:")

if (a > b && a > c) {
    console.log("big number is ", a);
}
else if (b > a && b > c) {
    console.log("big number is ", b);
}
else {
    console.log("big number is ", c);
}

//switch_case
let num1 = parseInt(prompt("Enter the first number:"));
let num2 = parseInt(prompt("Enter the second number:"));
let num3 = parseInt(prompt("Enter the third number:"));

let largest;

switch (true) {
    case (num1 > num2 && num1 > num3):
        largest = num1;
        break;
    case (num2 > num1 && num2 > num3):
        largest = num2;
        break;
    case (num3 > num1 && num3 > num2):
        largest = num3;
        break;
    default:

}

console.log("The largest number is " + largest);


