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
     if (padding <= string.length) {
      return string;
    }
    space = ' ';
    const padStart = Math.floor((padding - string.length) / 2);
    const padEnd = Math.ceil((padding -string.length) / 2);
    const paddedString = `${space.repeat(padStart)}${string}${space.repeat(padEnd)}`;
    return paddedString;
  },

  has (object, key) {
    if (!object.hasOwnProperty(key)) {
      return false;
    }
    else {
      return true;
    }
  },

  invert (object) {
    let inverse = {};
    for (let key in object) {
      const originalValue = object[key];
      inverse[originalValue] = key
    }
    return inverse;
  },

  findKey (object, predicate) {
    for (let key in object) {
      let value = object[key];
      let predicateReturnValue = predicate(value);
      if (predicateReturnValue) {
        return key;
      }
    }
    return undefined
  },

  drop (arr, num) {
    let removeElements;
    if (!num) {
      removeElements = 1;
    }
    else { 
      removeElements = num;
    }
    arr.splice(0, removeElements);
    return arr;
  },

  dropWhile (arr, predicate) {
    let dropNum = arr.findIndex(function(element, index) { return !predicate(element, index, arr)});
    return this.drop(arr, dropNum);
  },

  chunk (arr, size) {
    chunkArr = [];
    if (!size) {
      size = 1;
    }
    for (let i = 0; i < arr.length; i + size) {
      let chunk = arr.slice(i, i + size);
      chunkArr.push(chunk);
    }
    return chunkArr;
  }  
};

let array = [1, 2, 3, 4, 5, 6, 7, 8, 9]
console.log(_.chunk(array, 2))
  // Do not write or modify code below this line.
  module.exports = _;