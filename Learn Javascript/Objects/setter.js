const person = {
    
    _firstName: '',
    _lastName: '',
    get fullName() {
        if (this._firstName && this._lastName) {
            return `${this._firstName} ${this._lastName}`;
        }
        else {
            return `Missing first or last name`;
        }
    },
    set firstName(first) { 
        this._firstName = first;
    },
    set lastName(last) {
        this._lastName = last;
    }
};

console.log(person.fullName)
person.firstName = 'Steve'
person.lastName = 'Taylor'
console.log(person.fullName)