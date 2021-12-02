const characters = ['Captain Jack Sparrow'];
const line1 = ['This is the day you will always remember as the day'];
const line2 = ['you almost caught, Captain Jack Sparrow'];

const randomElement = (arr) => {
    let el  =  Math.floor(Math.random() * arr.length);
    return arr[el];
}

const quote = () => {
    let char = randomElement(characters);
    let part1 = randomElement(line1);
    let part2 = randomElement(line2);

    console.log(`${part1},\n ${part2} \n    -${char}`)
}
quote();