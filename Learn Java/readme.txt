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

&& - AND Statement
 
|| OR Statement

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
