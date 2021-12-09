const characters = ['Captain Jack Sparrow.', 'Sherlock Holmes', 'Captain Kirk'];
const line1 = ['This is the day you will always remember as the day', 'When you have eliminated all which is impossible, then whatever remains', 'To boldly go'];
const line2 = ['you almost caught, Captain Jack Sparrow', 'however improbable, must be the truth.', 'where no man has gone before'];

const randomElement = (arr) => {
    let el  =  Math.floor(Math.random() * arr.length);
    return el;
}

const quote = () => {
    let charEl = randomElement(characters);
    let part1El = randomElement(line1);
    let part2El = randomElement(line2);

    //while (char === characters[0] && part1 === line1[0])
    console.log(`${part1},\n ${part2} \n    -${char}`)
}
quote();