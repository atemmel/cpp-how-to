## Arithmetic operators

Most of the regular operators one might be used to also apply to programming in C++. These include: addition (`+`),
subtraction (`-`), multiplication (`*`) and division (`/`). Likewise, the compiler also understands operator precedence, meaning that the expression `1 + 1 * 2` will be equal to `3`, as `1 * 2` is evaluated before `1 + 1`. Here are some examples of using basic arithmetic in C++.

```cpp
#include <iostream>

int main()
{
	std::cout << "2 + 2 = " << 2 + 2 << std::endl;

	int i = 10;
	std::cout << "10 * 3 + 1 = " << i * 3 + 1 << std::endl;

	// C++ also understands parantheses:
	std::cout << "10 * (3 + 1) = " << i * (3 + 1) << std::endl;
}
```

Output:
```
2 + 2 = 4
10 * 3 + 1 = 31
10 * (3 + 1) = 40
```

There are also a few shorthand versions of these operators:

```cpp
#include <iostream>

int main()
{
	int value = 1;

	value += 2;	// shorter version of: value = value + 2
	value -= 2;	// shorter version of: value = value - 2
	value *= 2; // shorter version of: value = value * 2
	value /= 2; // shorter version of: value = value / 2

	std::cout << value << std::endl;

	return 0;
}
```

Output:
```
1
```

Some operations are also fairly common, to the point that they also have their own operator. An example of those are incrementing/decrementing a number by one:

```cpp
#include <iostream>

int main()
{
	int value = 1;

	value++;	// shorter version of value = value + 1 or value += 1
	std::cout << value << std::endl;
	value--;	// shorter version of value = value - 1 or value -= 1
	std::cout << value << std::endl;

	return 0;
}
```

Output:
```
2
1
```
