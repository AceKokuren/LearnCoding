const dayNames = ['MONDAY', 'TUESDAY', 'WEDNESDAY', 'THURSDAY', 'FRIDAY', 'SATURDAY', 'SUNDAY'];

const sleepHoursByDayName = new Map();
sleepHoursByDayName.set('MONDAY', 8);
sleepHoursByDayName.set('TUESDAY', 8);
sleepHoursByDayName.set('WEDNESDAY', 8);
sleepHoursByDayName.set('THURSDAY', 8);
sleepHoursByDayName.set('FRIDAY', 8);
sleepHoursByDayName.set('SATURDAY', 8);
sleepHoursByDayName.set('SUNDAY', 8);

const totalSleepHours = dayNames.map(dayName => sleepHoursByDayName.get(dayName))
    .reduce((left, right) => left + right, 0);

const getIdealSleepHours = () => {
  let idealHours = 8;
  return idealHours * 7;
};

const calculateSleepDebt = () => {
  const actualSleepHours = totalSleepHours;
  const idealSleepHours = getIdealSleepHours();
  const difference = Math.abs(actualSleepHours - idealSleepHours);
  
  if (idealSleepHours > actualSleepHours) {
    console.log(`You need ${difference} more hours of sleep a week!`);
    }
  else if (idealSleepHours == actualSleepHours) {
    console.log(`You got your ideal amount of sleep!`);
  }
  else if (idealSleepHours < actualSleepHours) {
    console.log(`You got ${difference} more hours of sleep than needed this week!`);
  }
}
calculateSleepDebt();