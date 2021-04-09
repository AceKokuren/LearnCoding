let spaceship = {
    crew: {
    captain: { 
        name: 'Lily', 
        degree: 'Computer Engineering', 
        cheerTeam() { console.log('You got this!') } 
        },
    'chief officer': { 
        name: 'Dan', 
        degree: 'Aerospace Engineering', 
        agree() { console.log('I agree, captain!') } 
        },
    medic: { 
        name: 'Clementine', 
        degree: 'Physics', 
        announce() { console.log(`Jets on!`) } },
    translator: {
        name: 'Shauna', 
        degree: 'Conservation Science', 
        powerFuel() { console.log('The tank is full!') } 
        }
    },
    passangers: {
        physicist: {
            name: 'Cole',
            class: '1st Class',
            showOff() {console.log('I was part of the team that helped invent these spaceship cruises')}
        },
        biologist: {
            name: 'Claire',
            class: '1st Class',
            colony() {console.log("I can't wait to help build a new colony on Mars!")}
        },
        filmMaker: {
            name: 'Chad',
            class: '2nd Class',
            brag() {console.log('I have made some of the best cinematic pieces you can find nowadays!')}
        }
    }
}; 

// Write your code below
for (let crewMember in spaceship.crew) {
  console.log(`${crewMember}: ${spaceship.crew[crewMember].name}`);
}
for (let passanger in spaceship.passangers) {
    console.log(`${spaceship.passangers[passanger].name}: ${passanger}`);
}