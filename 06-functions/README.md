## Functions

Functions (sometimes also called *methods* or *subprograms*) are a very helpful tool to help structure your code, both from an organization standpoint and as a way to reuse code. You'll also have already written a function quite a number of times, you might just not have realized it yet. Let's look at an example of a function and then destruct it into smaller parts.

```cpp
void printHello()
{
	std::cout << "Hello!" << std::endl;
}
```

Here, we have written a function named `printHello`. The function consists of all commands within the `{}` block. A more complete example, were we call the function, looks like this:

```cpp
#include <iostream>

void printHello()
{
	std::cout << "Hello!" << std::endl;
}

int main()
{
	printHello();
	return 0;
}
```

Output:
```
Hello!
```

We can do more advanced things with functions as well! Just like their mathematical equivalent, functions are able to take in *arguments*. Here is another example of defining and calling a function with a single `int` as an argument:

```cpp
#include <iostream>

void printInt(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	printInt(0);
	printInt(42);
	printInt(10);
	return 0;
}
```

Output:
```
0
42
10
```

You can also write functions that support multiple arguments:

```cpp
#include <iostream>

void printSum(int a, int b)
{
	int sum = a + b;
	std::cout << sum << std::endl;
}

int main()
{
	printSum(2, 3);
	return 0;
}
```

Output:
```
5
```

Moreover, much like how mathematical functions are capable of producing results, we can also `return` a result value from the calling of our function. If we wish to create a function that returns a value, we must specify the type of the value returned. In the previous examples, we have written `void` at the beginning of each function definition. `void` signifies the absence of a return value, e.g, that we do not wish to return anything. If we were to change this type to something different, such as an `int`, we would then be able to `return` a result from the function using the `return` keyword. Let's take a look at another example of this:

```cpp
#include <iostream>

int square(int i)
{
	return i * i;
}

int main()
{
	int twoSquared = square(2);
	std::cout << twoSquared << std::endl;
	std::cout << square(16) << std::endl;
}
```

Output:
```
4
256
```

Of course, even though all previous functions have used exclusively `int` as their return and argument types, it is possible to write functions that returns or recieves other kinds of data as well.
