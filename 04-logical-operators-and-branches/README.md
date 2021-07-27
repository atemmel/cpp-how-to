## Logical operators and Branches

### Logical operators

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

### Branches

Branches are used to perform different actions depending on specific circumstances. Usually, this is done by using one of the operations above to determine what the program should do next.

### `if`

`if` is arguably the most basic form of branching in most programming languages. `if` needs to be followed with a parentheses containing something that can evaluate to either `true` or `false`, as well as a block of operations to perform if the `if` expression evaluates to `true`.

```cpp
#include <iostream>

int main()
{
	// if 1 is less than 2, then print "1 is less than 2"
	if(1 < 2)
	{
		std::cout << "1 is less than 2" << std::endl;
	}
	return 0;
}
```

### `else`

`else` works as a counterpart to `if`. In the event that the `if` statement did not run, the `else` statement will be run instead.

```cpp
#include <iostream>

int main()
{
	// if 3 is greater than 4, then print "3 is greater than 4"
	if(3 > 4)
	{
		std::cout << "3 is greater than 4" << std::endl;
	}
	else	// otherwise, print "3 is not greater than 4"
	{
		std::cout << "3 is not greater than 4" << std::endl;
	}
	return 0;
}
```

### `else if`

`else if` can be written in the event that you wish to execute code if a preceeding `if` statement does not get executed.

```cpp
#include <iostream>

int main()
{
	// if 3 is greater than 4, then print "3 is greater than 4"
	if(3 > 4)
	{
		std::cout << "3 is greater than 4" << std::endl;
	}
	else if(3 == 4) 
	{
		std::cout << "
	}
	else	// otherwise, print "3 is not greater than 4"
	{
		std::cout << "3 is not greater than 4" << std::endl;
	}
	return 0;
}
```

Unlike `if` and `else`, you can also chain several `else if` statements together

```cpp
#include <iostream>

int main()
{
	int choice;

	std::cout << "Choose a colour:" << std::endl
		<< "1 Red" << std::endl
		<< "2 Blue" << std::endl
		<< "3 Green" << std::endl;
	std::cin >> choice;

	if(choice == 1)
	{
		std::cout << "You chose Red!" << std::endl;
	}
	else if(choice == 2)
	{
		std::cout << "You chose Blue!" << std::endl;
	}
	else if(choice == 3)
	{
		std::cout << "You chose Green!" << std::endl;
	}
	else
	{
		std::cout << "You chose something else..." << std::endl;
	}

	return 0;
}
```

### `&&` (and)

`&&` checks if *both* the expression to the left *and* right are true.

```cpp
#include <iostream>

int main()
{
	if(4 > 3 && 3 > 2)	// if 4 is greater than 3, and 3 is greater than 2
	{
		std::cout << "3 is between 4 and 2" << std::endl;
	}
	else
	{
		std::cout << "3 is not between 4 and 2" << std::endl;
	}

	if(4 > 1 && 1 > 2) // if 4 is greater than 1, and 1 is greater than 2
	{
		std::cout << "1 is between 4 and 2" << std::endl;
	}
	else
	{
		std::cout << "1 is not between 4 and 2" << std::endl;
	}
}
```
Output:
```
3 is between 4 and 2
1 is not between 4 and 2
```

### `||` (or)

`||` checks if *either* the expression to the left *or* right are true.

```cpp
#include <iostream>

int main()
{
	if(4 > 3 || 3 > 2)	// if 4 is greater than 3, or 3 is greater than 2
	{
		std::cout << "3 is either less than 4 or greater than 2" << std::endl;
	}
	else
	{
		std::cout << "3 is not less than 4 and not greater than 2" << std::endl;
	}

	if(4 > 1 || 1 > 2) // if 4 is greater than 1, or 1 is greater than 2
	{
		std::cout << "1 is either less than 4 or greater than 2" << std::endl;
	}
	else
	{
		std::cout << "1 is not less than 4 and 1 is not greater than 2" << std::endl;
	}
}
```
Output:
```
3 is either less than 4 or greater than 2
1 is either less than 4 or greater than 2
```
