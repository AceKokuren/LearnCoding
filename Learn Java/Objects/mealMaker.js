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
      switch (courseName) {
        case 'appetizers':
          this._courses.appetizers.push(dish)
      }
    }
  };
  
  menu.appetizers = 'Calamari';
  console.log(menu._courses.appetizers);
  menu.addDishToCourse('appetizers', 'Soup', 3.49);