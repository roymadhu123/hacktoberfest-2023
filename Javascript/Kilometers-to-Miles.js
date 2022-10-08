// Ask the user for the kilometers value to convert
const kilometers = prompt("Enter value in kilometers: ")

// conversion factor
const factor = 0.621371

// calculate miles by multiplying user input with conversion factor
const miles = kilometers * factor

console.log(`${kilometers} kilometers is equal to ${miles} miles.`);
