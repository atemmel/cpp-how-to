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

### `std::string`

`std::string` very closely resambles a `std::vector<char>` from a developers point of view. A `std::string` can grow and shrink dynamically during the course of the program, much like how `std::vector` operates. In fact, *every* operation this page has mentioned so far regarding `std::vector` is also applicable to `std::string`. You can query the `size` of a ``std::string``, you can index into it using the indexing operator (`[]`) and you can even push or pop individual `char`s to it using `push_back` and `pop_back`. Most of the few differences between a `std::vector` and a `std::string` are a few quality-of-life additions made to `std::string` for certain scenarios. A few of them are as follows:

### `+`, `+=`

```cpp
// You can use the + and += operators on std::string variables
// 'Adding' two strings together will concatenate them into one larger string
std::string letters = "abc";
letters += "def";
std::cout << letters << std::endl;
```

Output:
```
abcdef
```

### `find`

```cpp
std::string letters = "abcdef";

// find will return the index of the first encountered character in a std::string
int index = letters.find('d');
std::cout << "d was encountered at index: " << index << std::endl;

// In the event that character we search for does not appear within the string, -1 is returned instead
index = letters.find('z');
std::cout << "z was encountered at index: " << index << std::endl;
```

Output:
```
d was encountered at index: 3
z was encountered at index: -1
```

### `substr`

```cpp
std::string letters = "abcdef";

// substr can be used to create a substring containing parts of another std::string
// By providing it a single index, substr will create a new std::string containing 
// everything from that index to the end of the original std::string

std::string part1 = letters.substr(3);
std::cout << part1 << std::endl;

// You can also give substr another argument, which then specifies how many characters 
// the substring should consist of
std::string part2 = letters.substr(0, 3);
std::cout << part2 << std::endl;
```

Output:
```
def
abc
```
