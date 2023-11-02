function getFee(isMember) {
    return isMember ? '$2.00' : '$10.00';
  }

  console.log(getFee(true));
  // Expected output: "$2.00"
  
  console.log(getFee(false));
  // Expected output: "$10.00"
  
  console.log(getFee(null));
  // Expected output: "$10.00"

///////////////////////////////////////////

const age = 26;
const beverage = age >= 21 ? "Beer" : "Juice";
console.log(beverage); // "Beer"

////////////////////////////////////////
  
  console.log(greeting({ name: "Alice" })); // "Howdy, Alice"
  console.log(greeting(null)); // "Howdy, stranger"

////////////////////////////////////
function example() {
    return condition1 ? value1
      : condition2 ? value2
      : condition3 ? value3
      : value4;
  }
  