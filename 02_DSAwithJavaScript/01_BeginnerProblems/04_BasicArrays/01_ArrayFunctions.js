let fruits = ["apple", "banana", "orange"];

// Push elements to the end
fruits.push("grape");

// Remove the last element
let lastFruit = fruits.pop();
console.log("Last fruit:", lastFruit); // Output: "grape"

// Remove the first element
let firstFruit = fruits.shift();
console.log("First fruit:", firstFruit); // Output: "apple"

// Add elements to the beginning
fruits.unshift("kiwi", "mango");

// Add or remove elements at a specific index
fruits.splice(2, 1, "strawberry", "blueberry");

// Create a new array containing a portion
let subFruits = fruits.slice(1, 3);

// Combine two arrays
let vegetables = ["carrot", "potato"];
let combined = fruits.concat(vegetables);

// Convert array to string
let fruitString = fruits.join(", ");

// Reverse the order
fruits.reverse();

// Sort the array
fruits.sort();

// Iterate over elements and print their squares
fruits.forEach(function(fruit) {
  console.log(fruit + " squared:", fruit * fruit);
});

// Create a new array with squared values
let squaredFruits = fruits.map(function(fruit) {
  return fruit * fruit;
});

// Filter fruits starting with "a"
let fruitsStartingWithA = fruits.filter(function(fruit) {
  return fruit.startsWith("a");
});

// Reduce to find the longest fruit
let longestFruit = fruits.reduce(function(acc, curr) {
  return acc.length > curr.length ? acc : curr;
});

console.log("Combined array:", combined); // Output: ["kiwi", "mango", "strawberry", "blueberry", "banana", "orange", "carrot", "potato"]
console.log("Fruit string:", fruitString); // Output: "kiwi, mango, strawberry, blueberry, banana, orange"
console.log("Reversed fruits:", fruits); // Output: ["potato", "carrot", "orange", "banana", "blueberry", "strawberry", "mango", "kiwi"]
console.log("Sorted fruits:", fruits); // Output: ["banana", "blueberry", "carrot", "kiwi", "mango", "orange", "potato", "strawberry"]
console.log("Squared fruits:", squaredFruits); // Output: ["banana", "blueberry", "carrot", "kiwi", "mango", "orange", "potato", "strawberry"]
console.log("Fruits starting with A:", fruitsStartingWithA); // Output: ["apple"]
console.log("Longest fruit:", longestFruit); // Output: "strawberry"