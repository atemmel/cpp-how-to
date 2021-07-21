### Primitive types

In order to work with data efficiently, most programming languages find it to be a good idea to abstract away the idea of working with bytes directly.
This is usually done by implementing a set of basic types. These types generally mark some form of intent regarding how the developer wishes to work
with the data. Some of C++'s basic types are as follows:

## int
`int` (Integer) is used to represent basic numbers in a very precise manner, such as an age or an amount. The caveat here is that `int`'s cannot 
represent decimal numbers at all. (e.g `0.5` or `1.2`)
```cpp
int age = 18;
std::cout << "James is " << age << " years old" << std::endl;
```
Output:
```
James is 18 years old
```

## char
`char` (Character) is used to represent a _single_ letter, digit, or symbol. Unlike the int type, char values must be contained within single quotes (`''`).
```cpp
char letter = 'a';
std::cout << "letter contains the value: " << letter << std::endl;
```
Output:
```
letter contains the value: a
```
There are also several special values which can be accessed using the backslash character. (`\`) Some of them are mentioned below.

```cpp
std::cout << "backslash + n prints a newline" << '\n';
std::cout << "backslash + t prints a tab" << '\t' << "as you can see" << std::endl;
std::cout << "backslash + backslash prints a backslash " << '\\' << std::endl;
```
Output:
```
backslash + n prints a newline
backslash + t prints a tab	as you can see
backslash + backslash prints a backslash \
```

## float
`float` is used to represent a 'floating-point-number'. Unlike ints, floats can represent decimal numbers, making them an ideal choice for most math
operations. The caveat here is instead that floats are not as precise as ints, meaning that they are ill-suited for e.g bank transactions. Floats are
generally written as a regular decimal, followed by a lowercase `f`. 
```cpp
float a = 1.0f;
float b = 0.5f;
float c = 3.14159f;
std::cout << "a contains: " << a << std::endl;
std::cout << "b contains: " << b << std::endl;
std::cout << "c contains: " << c << std::endl;
```
Output:
```
a contains: 1
b contains: 0.5
c contains: 3.14159
```

## double
`double` is used to represent a _more_ precise floating-point-number. This datatype is twice as big as a float (hence the name) but fulfills the
same purpose. In some cases, a more exact answer might be preferable, such as when measuring or calculating the result of a formula, suggesting
the use of a double. In other cases, smaller size might be preferred over precision, such as during a physics simulation, suggesting the use of
a float. A double value is declared by writing a decimal value _without_ a lowercase `f` suffix.
```cpp
double pi = 3.14159265359;
std::cout << "Pi is approximated to: " << pi << std::endl;
```
Output:
```
Pi is approximated to: 3.14159
```
(The rounding 'error' present here is not actually an error, `std::cout` by default does not print decimal values beyond a certain precision.
There are ways to circumvent this behavior, but they happen to be beyond the scope of this chapter :] )

## bool
`bool` (Boolean) is used to represent the binary values `true` and `false`. The impact of this type is further discussed in future chapters.
```cpp
bool yes = true;
bool no = false;
std::cout << "Yes means " << yes << std::endl;
std::cout << "No means " << no << std::endl;
```
Output:
```
Yes means 1
No means 0
```
(Boolean values are generally written by `std::cout` as `1` or `0`, this is intended behaviour.)

## std::string
`std::string` is used to represent a _sequence_ of characters, such as a word, or an entire sentence. Just like with `std::cout`, in order to 
use `std::string`, one must include the `string` library. String values can be created using double quotes. (`""`)
```cpp
#include <string>
...
std::string name = "James";
std::cout << "Nice to meet you, " << name << std::endl;
```
Output:
```
Nice to meet you, James
```
(In reality, strings are a relatively quirky datatype with a bunch of additional functionality not discussed here. This will be covered in future chapters.)
