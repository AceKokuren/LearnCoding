// Returns a random DNA base
const returnRandBase = () => {
  const dnaBases = ['A', 'T', 'C', 'G'];
  return dnaBases[Math.floor(Math.random() * 4)];
};

// Returns a random single stand of DNA containing 15 bases
const mockUpStrand = () => {
  const newStrand = [];
  for (let i = 0; i < 15; i++) {
    newStrand.push(returnRandBase());
  }
  return newStrand;
};

const pAequorFactory = (id, dnaArr) => {
  return {
    id,
    dnaArr,
    mutate() {
      let el = Math.floor(Math.random() * 15);
      let base = returnRandBase();
      while (dnaArr[el] === base){
        base = returnRandBase();
      }
      dnaArr[el] = base;  
    }
  }
};

const dna1 = pAequorFactory(1, mockUpStrand());
console.log(dna1.dnaArr);
dna1.mutate();
dna1.mutate();
console.log(dna1.dnaArr);