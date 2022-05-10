//Spaceship Object
let spaceship = {
    'Fuel Type' : 'Turbo Fuel',
    'Active Mission' : true,
    homePlanet : 'Earth', 
    numCrew: 5
   };
  
  let propName =  'Active Mission';
  
  // Created variable to store the value of Active Mission
  const isActive = spaceship['Active Mission'];
  //Print Active Mission to the console
  console.log(isActive);
  console.log(spaceship['Active Mission']);