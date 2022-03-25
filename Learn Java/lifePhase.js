// Write your function here:
const ages = {3: 'baby', 12: 'child', 19: 'teen', 64: 'adult', 140: 'senior citizen'};

const lifePhase = age => {
  const ageRange = Object.keys(ages).find(a => age >= 0 && age <= a) ?? 0
  return ages[ageRange] ?? 'This is not a valid age'
}
  
  console.log(lifePhase(1)); //Prints 'baby'
  console.log(lifePhase(4)); //Prints 'child'
  console.log(lifePhase(-5));
  console.log(lifePhase(0));