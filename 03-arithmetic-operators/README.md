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
