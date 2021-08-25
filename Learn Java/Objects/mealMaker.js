const menu = {
  _courses: {
    appetizers: [],
    mains: [],
    desserts: []
  },
  set appetizers(appetizerIn) {
    this._courses.appetizers = appetizerIn;
  },
  get appetizers() {
      return this.appetizers;
  },
  set mains(mainsIn) {

  },
  get mains() {

  },
  set desserts(dessertsIn) {

  },
  get desserts() {

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
};