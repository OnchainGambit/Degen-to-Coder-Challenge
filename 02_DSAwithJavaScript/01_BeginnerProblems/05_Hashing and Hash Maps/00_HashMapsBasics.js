// Creating a new Map
const myMap = new Map(); // or use let

// Adding key-value pairs
myMap.set("name", "Alice");
myMap.set(1, "Bob");
myMap.set({ age: 30 }, "Charlie");

// Accessing values
console.log(myMap.get("name")); // Output: "Alice"
console.log(myMap.get(1)); // Output: "Bob"
console.log(myMap.get({ age: 30 })); // Output: "Charlie" (Note: Object comparison)

// Checking for existence
console.log(myMap.has("name")); // Output: true
console.log(myMap.has(2)); // Output: false

// Deleting a key-value pair
myMap.delete(1);
console.log(myMap.get(1)); // Output: undefined

// Getting the size
console.log(myMap.size); // Output: 2

// Iterating over key-value pairs
for (const [key, value] of myMap.entries()) {
  console.log(key, value);
}