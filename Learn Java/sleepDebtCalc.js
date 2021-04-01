function getSleepHours(day) {
    day = day.toLowerCase();
    switch (day) {
      case 'monday' :
       return 6;
      case 'tuesday' :
       return 5;
      case 'wednesday' :
       return 9;
      case 'thursday' :
       return 8;
      case 'friday' :
       return 7;
      case 'saturday' :
       return 10;
      case 'sunday' :
       return 12;
      default :
       return `${day} is an invalid day!`;   
    } 
}

const getActualSleepHours = () => getSleepHours('monday') + getSleepHours('tuesday') + getSleepHours('wednesday') + getSleepHours('thursday') + getSleepHours('friday') + getSleepHours('saturday') + getSleepHours('sunday');  

const getIdealSleepHours = idealHours => idealHours * 7;

const calcSleepDebt = () => {
    const actualSleepHours = getActualSleepHours();
    const idealSleepHours = getIdealSleepHours(8);
    const surplus = actualSleepHours - idealSleepHours;
    const debt = idealSleepHours - actualSleepHours;

    if (actualSleepHours === idealSleepHours) {
        console.log("You got the perfect amount of sleep, good job!");
    }
    else if (actualSleepHours < idealSleepHours) {
        console.log(`You need ${debt} more hours of sleep!`);
    }
    else if (actualSleepHours > idealSleepHours) {
        console.log(`You had ${surplus} more hours sleep than needed!`);
    }
}
calcSleepDebt();