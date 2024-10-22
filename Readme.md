# CPP02

In this module we get an introduction to **ad-hoc polymorphism** (using the same name funcion for different types of arguments) and **operator overloading** (a type of polymorphism which defines custom behaviors for arithmetic and stream operators like '=', '+', '-', '<' within a user's class).

Starting from this C++ module, we will design classes in the Orthodox Canonical Form. This means that will contain at least these four required member functions:
* Default constructor
* Copy constructor
* Copy assignment operator
* Destructor

A good practice, recommended in the 42 training videos is to always include an **Overloading Stream Insertion Operator** (std::ostream & operator<<(ruleTBD)), so that we can print to the standard output values of our current class. This is useful for debugging.
