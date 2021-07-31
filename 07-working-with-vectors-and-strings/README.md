## Working with `vector`s and `strings`

### `std::vector`

`std::vector` is a very powerful tool in any C++ developer's toolbox. It allows us to store a bunch of values that all are of the same type together. This is what other languages might call a *list* or *dynamic array* type. Let's look at a small example using `std::vector`:

```cpp
#include <iostream>
#include <vector>	// We need to include this part of the standard library

int main()
{
	// Note how we specify which type the vector will contain using the "<>" operators
	std::vector<int> numbers;

	// push_back inserts a new element at the back of the vector
	numbers.push_back(1);
	numbers.push_back(3);
	numbers.push_back(5);

	// size is used to get the current length of the vector
	std::cout << "Our vector now contains " << numbers.size() << " elements" << std::endl;

	// This very common for loop goes over each element in the vector
	for(int i = 0; i < numbers.size(); i++)
	{
		// by using the indexing operator, [], we can get the N'th element of a vector
		std::cout << "Element " << i << " is: " << numbers[i] << std::endl;
	}

	return 0;
}
```

Output:
```
Our vector now contains 3 elements
Element 0 is: 1
Element 1 is: 3
Element 2 is: 5
```

Here follows a couple more useful examples of what you can do with a `std::vector`:

### `empty`

```cpp
// numbers is currently empty, as we have not inserted anything into it
std::vector<int> numbers;

// empty returns either true or false, true if the size of the vector is 0
// otherwise false
if(numbers.empty())
{
	std::cout << "Numbers is empty!" << std::endl;
}
else
{
	std::cout << "Numbers is not empty..." << std::endl;
}
```

Output:
```
Numbers is empty!
```

### `pop_back`

```cpp
// Push the numbers 0 to 4 into the vector
std::vector<int> numbers;
for(int i = 0; i < 5; i++)
{
	numbers.push_back(i);
}

std::cout << "Before pop_back:" << std::endl;
for(int i = 0; i < numbers.size(); i++)
{
	std::cout << numbers[i] << std::endl;
}

// pop_back removes the last element of a vector
numbers.pop_back();

std::cout << "After pop_back:" << std::endl;
for(int i = 0; i < numbers.size(); i++)
{
	std::cout << numbers[i] << std::endl;
}
```

Output:
```
Before pop_back:
0
1
2
3
4
After pop_back:
0
1
2
3
```

### `clear`

```cpp
// Push the numbers 0 to 4 into the vector
std::vector<int> numbers;
for(int i = 0; i < 5; i++)
{
	numbers.push_back(i);
}

std::cout << "Before clear:" << std::endl;
for(int i = 0; i < numbers.size(); i++)
{
	std::cout << numbers[i] << std::endl;
}
std::cout << "Size is " << numbers.size() << std::endl;

// clear removes every element in the vector
numbers.clear();

std::cout << "After clear:" << std::endl;
for(int i = 0; i < numbers.size(); i++)
{
	std::cout << numbers[i] << std::endl;
}
std::cout << "Size is " << numbers.size() << std::endl;
```

Output:
```
Before clear:
0
1
2
3
4
Size is 5
After clear:
Size is 0
```
