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
    }
    /*getRandomDishFromCourse(courseName) {

    }*/
  };
  
  menu.addDishToCourse('mains', 'fish', 7.69);
  //menu.mains = 'fish';
  console.log(menu.mains);
  console.log(menu);