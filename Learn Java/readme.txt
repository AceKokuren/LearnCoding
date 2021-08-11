Java is a platform 
Java language is part of Java platform
Java runs on:
 OS
 Cars
 Cards
 Rings
 PDA
When running Java on OS, a virual machine is required.
Java was designed to be a mobile platform.

______________________________________________
Java Platforms:
 
 Java Standard Edition (Java SE)
  Desktop PCs, High End Small Devices
  Contains API's Essential to enterprise Applications (JDBC and RMI)
 
 Java Enterprise Edition (Java EE) Now known as Jakarta EE
  Used for large scale multi-tier enterprise applications
  Built on Java SE
  Contains Enterpise-Specific APIs such as CDI and JAX-RS, not found in Java SE
  
 Java Micro Edition
  Primarily Embedded Systems
  Subset of Java SE
  Sub-divided into profiles

______________________________________________

Java SE
 Support for areas of functionality
  
  Essentials:
   Objects
   Strings
   Threads
   Numbers
   I/O
   Data Structures
   System Properties
   Date and Time
  
  Networking
   Urls
   TCP (Transmission Control Protocol)
   UDP (User Datagram Protocol)
   Sockets
   IP (Internet Protocol)
  
  Internationalization
   Creating programs for a global userbase
   
  Security
   High Level and low level security
   Electronic Signatures
   Key Management 
   Access Control 
   Certificates
  
  Software Components 
   Javabean( Able to plug into existing computer architectures)

  Object Serialization 
   Allows lightweight persistence 



JVM -> Base Libarys -> Intergration Libaries -> User Interface Toolkit -> Tool and Tool APIs -> Java Language


JDK Java Development Kit Complies code
JRE Java Runtime Engine 



JDK Major components - 
 Javac - java complier
 Java  - Java Bytecode Interpreter (Java Virtual Machine)
 JavaDoc - Generates Documentation from source code
 JAR - creates and extracts Archives
 Javap - Disassembles Class Files
 JDB = basic command line Debugger

____________________________________________________________

  Java source code is contain in Java classes,
  Java Classes compiled in Byte code
  Byte code is then ran by the JVM
  This allows Java Source code to be cross compatible

___________________________________________ 

JVM Responsibilities 
 Loading and using Classes
 Garbage Collection 
 Security
 Interfacing to Native Code

__________________________________________
  Java is dynamic

  Bava bytecode _:> puts bytecode in memory _> Java Verifier


  Garbage collection - sorts memory managment

  Java- Automatically generates documentation
 
  JavaDOC generates an html based on the comments made in the code.


_________________________________________________________

Javadoc
 Provides a description  of what the method does
 Describes the parameters and their types
 Describes the return type of method 
 Describes any exceptions the might occur

__________________________________________________________

Using the JDK 
  Java development kit provides development enviroment 
  Java packages are namespaces for classes
  Java class libaries (JCL) provide a set of publically accessible resources
  Java ARchives are a standardized packaging format
  Java modules are a newer packaging format that are more powerful than JAR files

_____________________________________________________________

JAVA_HOME - Installation directory of the JDK

PATH - Should include JAVA_HOME \bin

CLASSPATH - This indicates locations that might be loaded during execution.
 These are classes that are not part of the the Java platform.
____________________________________________________

java applications conform to basic rules
 FIles with .Java contain source code
   These files are Case sensitive
 
Source code is complied into Byte code 
 -Complier reads .java  and writes .class files
  -File name stays the same and the extention changes.

Files are writted to the folder path containing the source file,  -d changes file loctation


_______________________________________________________

Eclipse is an Integrated Development Enviroment (IDE)

Conceptional Levels:
 Workspace - Physical Location of Projects, packages and Files 
 Workbench -Perspectives editors and views

___________________________________________________________
 Perspectives
 
  A ways to look at different facets of the project
   
  - Java Developer - JAVA
  - Debugging - Debug Perspective
  - Collaboration - Team Synchronizing
  - XML = XML perspective 

_________________________________________________________
Java Project
 
 Contains Java files and JavaBeans
 
 Defines the Java Build Path
 - Build path used to compile source files
    other projects may be included 
    Jar files internal or external may be included
 Facilitates package, class creation and organisation
 

_________________________________________________________
Access Modifiers
  Define Visibility of class, field or method
   A class can be Public And Private

  Fields and methods
   Can be defined as private or protected
    Private - Only visible to owning class
     Majority of Fields are defined as private
    Protected  - makes subject visible to subclasses 

_______________________________________________________
Java-Defined Primitive Types
 
 Byte 8 bit
 Char 16 Bit
 Boolean 1 Bit 
 Short 16 bit
 INT 32 bit
 Long 64 bit
 Float 32 bit
 Double  64 bit

_____________________________________________________

Field types
 Primative 
 Object references
____________________________________________________

Return types
 Class
 Interface 
 Primitive Type
 Void
_____________________________________________________

System.out.println(""); prints to debug console
______________________________________________________

X += Y                            X = X + Y
X -= y                            X = X - Y
X++, ++X                          X = X + 1
X--, --X                          x = X - 1
______________________________________________________
Comparison Operators
  && - AND Statement
  || OR Statement
  != Not Equal to 
  == Value is equal to 
  === Strict Equals - checks value and data type
_______________________________________________________

Complex Language statments for looping,
 If/else
 For
 while/do
 Switch

Comparison Operators always return boolean

______________________________________________________

STRING
 Equals A character by Character comparison
 Length Returns the length of the String
 EqualIsIgnoreCase Ignores case during the comparison
 charAt Get the character at an index
 indexof see if the sub string exists within the string
 lastIndexOf the last occurence of the sub string
 startsWith does the start match the sub string
 EndsWith does the string end with the sub string
 toUpperCase Return the string in Upper case
 toLowercase Returns the string in Lower case
 Trim returns copy of string with leading and trailing whitespace
______________________________________________________

Data Types: 
  Number - Any number, including Decimals,
  String - A combination of characters surrounded by ' ' or " ".
  Boolean - True or False Data,
  Null - Intentional absence of data,
  Undefined - Also used as an intentional absence of data but has a different use to Null,
  Symbol - Unique identifiers, useful in more complex coding,
  Object - Collections of related data.
  ______________________________________________________

Objects:
  To create Object literals: let obj = {};
  The curly braces denote that it is an Object literal

  An Object stores unordered data in Key Value pairs.
  A key points to the location in the memory that holds a value.
  Can be any data type in the language.

  Creating Object literal pairs: 
  keyName: propertyName,

  Key value pairs in an Object are separated by commas.
  If there are no special characters in the key name or property, we can omit quotation marks.

  Accessing a property using dot notation:
  obj.propertyName;

  This will access the property in the called Object.
  If the property doesn't exist in the Object, undefined will be returned.

  Accessing a property using bracket [] notation:
  obj['Property Name'];

  We use bracket notation when accessing keys that contain, spaces or special characters.
  It's also useful to select keys of an Object, which is especially helpful when working with functions:

  let spaceship = {
  'Fuel Type': 'Turbo Fuel',
  'Active Duty': true,
  homePlanet: 'Earth',
  numCrew: 5
  };
  let returnAnyProp = (objectName, propName) => objectName[propName];
  returnAnyProp(spaceship, 'homePlanet'); // Returns 'Earth'

  Objects are mutable, allowing us to update them after they have been created.
  You can use dot or bracket notation for this, using the assignment operator = to add new key value pairs.

  obj['Property Name'] = value;
      or
  obj.propertyName = value;

  If the property already exists, the value will be changed to the new value.
  If the property  does not exist, then a new property with that value will be created in the Object.

  When an Object is declared with const, we can't reassign the Object, but we can still mutate it, (add or change properties).
  To remove a property, we can append the delete operator to the property:

  delete obj.propertyName;
      or
  delete obj['Property Name'];

  When the data stored in an Object is a function, it is called a method.
  A property is what an Object has, a method is what an Object does.

  To create a method:
  const objName = {
    methodName () {},
  };

  Remember to use commas to separate properties and methods in an Object.
______________________________________________________

Nested Objects:
  An Object might have another Object as a property, which may have a property with an array of Objects
  Creating Nested Objects:

  const objName = {
    nestedObjName: {

    },
    nestedObjName2 = {

    },
  };

  Here we have 2 empty nested Objects.

  The for...in loop will execute a given block of code for each property in an Object:

  for (let variableName in obj) {}
  ______________________________________________________

Advanced Objects:
  this keyword: 
    When accessing properties inside a method in an Object, we don't automatically have access to all the properties in the Object.
    this comes in use to reference the calling Object, providing access to the object's properties.
  
  Privacy:
    JavaScript does not contain the ability to prevent certain properties from being mutated.
    To get around this, there are certain naming conventions to indicate that a piece of code should not be edited directly.
    One such way is to use an _underscore before the property's name:

    _propertyName

    This indicates that the property should not be altered.

    Getters:
      Getters are methods used to get and return internal properties of an Object.
      To create a getter:

        const objName = {
          ...
          get methodName() {
            function;
          }
        };

      Getters can perform an action on the data when getting a property.
      Can return different values using conditionals.
      Can access the properties of the calling object using this.
      functionality of code is easier for other devs to understand.

      Properties cannot share the same name as the getter/setter function.
      A workaround is to use the _underscore at the beginng of the property.
      
    Setters:
      Setter methods reassign values of existing properties within an object:
      
