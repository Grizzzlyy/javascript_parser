try {
    throw new TypeError("oops");
  } catch ({ name, message, x }) {
    console.log(name); // "TypeError"
    console.log(message); // "oops"
  }