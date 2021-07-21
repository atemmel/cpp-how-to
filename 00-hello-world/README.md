### Hello World

Chances are you might already be familiar with the concept of a 'Hello World'-program. It is usually one of the first programs written when a developer
is familiarizing themself with a new language. It is perfectly tolerable to be somewhat puzzled or confused regarding parts of the 'Hello World'-program,
especially in the case of it being the developer's first or second language.

The C++ version of a 'Hello World'-program looks as follows;

```cpp
#include <iostream>

int main() 
{
	std::cout << "Hello World!" << std::endl;
	return 0;
}
```

Compiling and running this program will output:
```
Hello World!
```

If this is a lot to unpack, don't worry. In time, most, if not all, components of the code will be understood. We can simplify a few of the more vital pieces
of the program for the time being.

* `main` represents the starting point of our program. The first line of code between the curly braces (`{}`) is the first line of code that will be executed.
To keep things simple, we will end our `main` with a `return 0;`
* `std::cout` is our way of interacting with the terminal. Values and variables placed after a `std::cout <<` are written to the terminal window. In order to
use `std::cout`, we need to have `iostream` included, which is done at the beginning of the program. (`#include <iostream>`)
* `std::endl` is one (of many!) ways to tell the terminal to insert a 'newline'. This makes the next set of data written to the terminal appear on the line below.
* All lines of code within the curly braces (`{}`) in `main` must end with a semicolon. (`;`)
