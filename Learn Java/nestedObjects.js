let spaceship = {
    passengers: [
        {
            name: 'Keith', 
            travellingFor: 'business'
        }, 
        {
            name: 'Susan', 
            travellingFor: 'Business'
        }
    ],
    telescope: {
      yearBuilt: 2018,
      model: "91031-XLT",
      focalLength: 2032 
    },
    crew: {
      captain: { 
        name: 'Sandra', 
        degree: 'Computer Engineering', 
        encourageTeam() { console.log('We got this!') },
       'favorite foods': ['cookies', 'cakes', 'candy', 'spinach'] }
    },
    engine: {
      model: "Nimbus2000"
    },
    nanoelectronics: {
      computer: {
        terabytes: 100,
        monitors: "HD"
      },
      'back-up': {
        battery: "Lithium",
        terabytes: 50
      }
    }
  }; 
  
  const capFave = spaceship.crew.captain['favorite foods'][0];
  console.log(capFave);
  console.log(spaceship.passengers[0].name);
  //To test calling an index in a nested array
  console.log(spaceship.passengers[0][0]);