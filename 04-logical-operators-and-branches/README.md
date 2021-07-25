## Logical operators and Branches

To accompany the regular arithmetical operators, C++ also has a set of logical operators. Logical operators differ from arithmetical operators in that instead of producing some sort of number, they produce either `true` or `false` (alternatively, `1` or `0`, if you're so inclined). They are as follows:

### `==` (equals)

`==` compares two values, returning true if they are equal and false otherwise.

### `!=` (does not equal)

`!=` compares two values, returning true if they are *not* equal and false otherwise.

### `<` (less than)

`<` compares two values, returning true if the left hand side is less than the right hand side and false otherwise.

### `>` (greater than)

`>` compares two values, returning true if the left hand side is greater than the right hand side and false otherwise.

### `<=` (less or equals)

`<=` compares two values, returning true if the left hand side is less or equal to the right hand side and false otherwise.

### `>=` (less or equals)

`>=` compares two values, returning true if the left hand side is greater or equal to the right hand side and false otherwise.

```cpp
#include <iostream>

int main()
{
	bool b = 4 == 4;
	std::cout << b << std::endl;
	b = 4 == 3;
	std::cout << b << std::endl;
	b = 4 < 3;
	std::cout << b << std::endl;
	b = 4 > 3;
	std::cout << b << std::endl;
	b = 4 <= 3;
	std::cout << b << std::endl;
	b = 4 >= 3;
	std::cout << b << std::endl;
}
```

Output:
```
1
0
0
1
0
1
```
