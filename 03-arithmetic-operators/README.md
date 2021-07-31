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

C++ also comes with the `%` (modulo) operator, which calculates the remainder of a number when performing division. This operation deserves a special mention, as it is quite useful within programming, but not necessarily that common outside of programming. Let's look at a mathematical example to see what this operator means first:

As an example, let's say that we are interested in calculating `8/3`. If you were to type this into a calculator, you would most likely get something close to `2.66666667` as a result. C++ has quite a few types that are unable to represent decimal numbers, such as the infamous `int` type. As mentioned in chapter 1, `int` completely ignores the concept of a decimal number, instead producing a result of `2`. What this tells us, is that `3` is able to fit `2` times within the number `8`. It is here that the prospect of a modulo operator becomes interesting. Instead of telling us how many times `3` is able to fit inside `8`, modulo tells us how big the remainder is after fitting the maximum numbers of `3` into `8`. After placing `2` `3`s into `8`, we've reached a sum of `6`, unable to fit any more `3`s into `8`. The remaining room (remainder) is here `2`, as the difference between `8` and `6` is `2`.

```cpp
#include <iostream>

int main()
{
	// 3 fits into 8 2 times, with a remainder of 2
	int a = 8 % 3;

	// 3 fits into 7 2 times, with a remainder of 1
	int b = 7 % 3;

	// 2 fits into 2 1 time, with a remainder of 0
	int c = 2 % 2;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return 0;
}
```

Output:
```
2
1
0
```
