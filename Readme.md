# CPP02

In this module we get an introduction to **ad-hoc polymorphism** (using the same name funcion for different types of arguments) and **operator overloading** (a type of polymorphism which defines custom behaviors for arithmetic and stream operators like '=', '+', '-', '<' within a user's class).

Starting from this C++ module, we will design classes in the Orthodox Canonical Form. This means that will contain at least these four required member functions:
* Default constructor
* Copy constructor
* Copy assignment operator
* Destructor

A good practice, recommended in the 42 training videos is to always include an **Overloading Stream Insertion Operator** (std::ostream & operator<<(ruleTBD)), so that we can print to the standard output values of our current class. This is useful for debugging.


The module also introduces us to the notion of **fixed-point**: (vs float number. Accuracy vs Precision).

"Fixed-point representation is a real data type for integers in computers. Data can be converted into binary form using fixed point representation, which the computer can store and use."

It specifies how many bits should be used to represent the decimal 
portion of a binary integer or floating-point value. 
The first 24 bits are stated as the integer component and 
the final 8 bits are expressed as the decimal part in the 32-bit system 
if the fractional bits are set to 8 bits.

With the fractional bits equal to 8 we get: Num.00000000


**To convert an integer number Num to a fixed point:**
formula:
multiply the number by 2^(n- 1) or we left shift the bits by (n - 1) 
where n is the fractional bits specified.

**To convert fixed points values to an integer**
formula:
(float)fixed_point_number / (1 << 8)
or
(float)(fixed_point_number / 256)


**Useful links:**
https://medium.com/@oumaimafisaoui/floating-and-fixed-point-representation-in-c-what-is-going-on-b71af54718a5

https://learn.microsoft.com/fr-fr/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170

