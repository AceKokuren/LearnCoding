const _ = {

    clamp (currentValue, lowerBound, upperBound) {
  
      const low = Math.max(currentValue, lowerBound);
      const clamped = Math.min(low, upperBound);
      return clamped
    }
  };
  console.log(_.clamp(5, 3, 4))

  // Do not write or modify code below this line.
  module.exports = _;