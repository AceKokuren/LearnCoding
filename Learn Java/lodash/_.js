const _ = {
  clamp (currentValue, lowerBound, upperBound) {
    const low = Math.max(currentValue, lowerBound);
    const clamped = Math.min(low, upperBound);
    return clamped
    },
  inRange (number, startValue, endValue) {
    if (!endValue) {
      endValue = startValue;
      startValue = 0;
    }
    if (startValue > endValue) {
      let swap = endValue;
      endValue = startValue;
      startValue = swap;
    }
    if (number < startValue || number >= endValue) {
      return false;
    }
    else {
      return true;
    }
  },
  words (string) {
    return string.split(' ');
  },
  pad (string, padding) {
    if (string.length === padding) {
      return string;
    }
    const padStart = Math.floor((padding - string.length) / 2);
    //console.log(padStart);
  }
};
  //console.log(_.clamp(5, 3, 4));
  //console.log(_.inRange(5, 1, 10));
  //console.log(_.words('Hello, my name is Cameron'));
  console.log(_.pad('Hello', 6));
  // Do not write or modify code below this line.
  module.exports = _;