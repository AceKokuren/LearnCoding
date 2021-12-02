const characters = ['Captain Jack Sparrow'];
const line1 = ['This is the day you will always remember as the day'];
const line2 = ['you almost caught Captain Jack Sparrow'];

const randomElement = (arr) => {
    let el  =  Math.floor(Math.random() * arr.length);
    return arr[el];
}

const quote = () => {
    let char = randomElement(characters)
}