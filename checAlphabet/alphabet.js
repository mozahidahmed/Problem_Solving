const inputValue = prompt("Write Your balue:")
console.log("your value is ", inputValue)
if ((inputValue >= 'a' && inputValue <= 'z') || (inputValue >= 'A' && inputValue <= 'Z')) {
    console.log('value is alphabet');
}
else {
    console.log('value is not a alphabet');
}