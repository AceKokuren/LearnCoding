const menu = {
  _courses: {
    appetizers: [],
    mains: [],
    desserts: []
  },
  set appetizers(appetizerIn) {
    
  },
  get appetizers() {
      return this._courses.appetizers;
  },
  set mains(mainsIn) {

  },
  get mains() {
    return this._courses.mains;
  },
  set desserts(dessertsIn) {

  },
  get desserts() {
    return this._courses.desserts;
  },
  get courses() {
    return {
      appetizers: this.appetizers,
      mains: this.mains,
      desserts: this.desserts
    };
  },
  addDishToCourse(courseName, dishName, dishPrice) {
    let dish = {
      name: dishName,
      price: dishPrice
    };
    return this._courses[courseName].push(dish);
  },
  getRandomDishFromCourse(courseName) {
    const dishes = this._courses[courseName];
    const randomIndex = Math.floor(Math.random() * dishes.length);
    return dishes[randomIndex];
  },
  generateRandomMeal() {
    const appetizer = this.getRandomDishFromCourse('appetizers');
    const mains = this.getRandomDishFromCourse('mains');
    const desserts = this.getRandomDishFromCourse('desserts');
    const totalPrice = appetizer.price + mains.price + desserts.price;
    return `Your meal for tonight: ${appetizer.name}, ${mains.name}, ${desserts.name} and will cost you ${totalPrice}.`
  }
};

menu.addDishToCourse('appetizers', 'garlic bread', 3.75);
menu.addDishToCourse('appetizers', 'calamari', 3.49);
menu.addDishToCourse('appetizers', 'Cheese Balls', 2.39);
menu.addDishToCourse('mains', 'Haddock and Chips', 12.50);
menu.addDishToCourse('mains', 'Steak', 14.75);
menu.addDishToCourse('mains', 'Omellette', 6.20);
menu.addDishToCourse('desserts', 'Chocolate Cake', 2.30);
menu.addDishToCourse('desserts', 'Cheesecake', 4.20);
menu.addDishToCourse('desserts', 'Ice Cream', 3.10);
console.log(menu.courses);
console.log(menu.generateRandomMeal());
