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
      let el = Math.floor(Math.random() * this.dnaArr.length);
      let base = returnRandBase();
      while (dnaArr[el] === base){
        base = returnRandBase();
      }
      dnaArr[el] = base;
      return dnaArr;  
    },
    compareDNA(otherOrg) {
      let counter = 0;
      for (let i = 0; i < this.dnaArr.length; i++) {
        if (this.dnaArr[i] === otherOrg.dnaArr[i]) {
          counter++;
        }
      }
      console.log(counter);
      const percentage = counter/(this.dnaArr.length / 100)
      console.log(`Specimen ${this.id} and Specimen ${otherOrg.id} have ${percentage.toFixed(2)}% DNA in common.`);
    },
    willLikelySurvive() {
      let counterCAndG = 0;
      for (let i = 0; i < this.dnaArr.length; i++) {
        if (this.dnaArr[i] === 'C' || this.dnaArr[i] === 'G') {
          counterCAndG++;
        }
      }
      percentageOfCAndGStrands = counterCAndG / (this.dnaArr.length / 100);
      return percentageOfCAndGStrands >= 60;
    }
  }
};

