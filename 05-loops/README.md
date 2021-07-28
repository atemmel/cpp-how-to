## Loops

Loops can be used to repeat a set of actions. This can be useful for reducing the amount of code needed to be written, as instead of writing four `std::cout`s, you can tell the program to perform one `std::cout` four times back to back. Loops are also useful for when we do not have proper knowledge beforehand about how many times we wish to do something. In C++, there are three primary ways of writing loops, all of which are covered below.

### `while`

The `while` loop is the perhaps most basic form of loop within C++. It only requires a single expression to evaluate in order to determine wether the loop should be run again or not.

```cpp
#include <iostream>

int main()
{
	int i = 0;
	while(i < 5) // while i is less than 5
	{
		i = i + 1;	// increment i with 1
	}

	std::cout << i << std::endl;

	return 0;
}
```

Output:
```
5
```

### `for`

Thereafter comes the `for` loop. The `for` loop is particularly useful when you have an idea beforehand regarding how many times you wish to perform a set of operations.

```cpp
#include <iostream>

int main()
{
	// for every number between 0 and 5
	for(int i = 0; i < 5; i++)
	{
		// print it
		std::cout << i << std::endl;
	}
	return 0;
}
```

Output:
```
0
1
2
3
4
```

The `for` loop is a very powerful way to write a loop, as all important parts of a loop can be written within a single line of code. All this power does make the way of writing it slightly daunting to new developers, however. Let's break down the concept a bit more.

#### `for(A; B; C)`

We can say that the `for` loop consists of three major parts (not counting the `{}` block that follows). Any and all of the three above parts are completely optional within the `for` loop. The first part, labeled above as `A` is where you may declare and assign variables for use within the `for` loop. The second part, labeled above as `B` is where the actual condition for the loop is placed, e.g *how many times*, or *for how long* you wish for a set of actions to be performed. The third part of the `for` loop, labeled `C`, specifies what we wish to happen at the end of each step within the loop. A very common use case for this part is to increment a variable by a certain number of steps, thus progressing the loop.

Here are a few examples of writing different loops that all look mildly different although produces the same results:

```cpp
for(int i = 0; i < 5; i++)
{
	std::cout << "Here I am!" << std::endl;
}
```

```cpp
int i = 0;
for(; i < 5; i++)
{
	std::cout << "Here I am!" << std::endl;
}
```

```cpp
int i = 0;
for(; i < 5;)
{
	std::cout << "Here I am!" << std::endl;
	i++;
}
```

```cpp
for(int i = 0; i < 5;)
{
	std::cout << "Here I am!" << std::endl;
	i++;
}
```

```cpp
int i = 0;
while(i < 5)
{
	std::cout << "Here I am!" << std::endl;
	i++;
}
```

### `do while`

`do while` loops are quite similar to the regular `while` loop, with the exception that the instructions within a `do while` loop are executed *at least once*. They are also written a little bit differently.

```cpp
#include <iostream>

int main()
{
	// Here, the while loop is never run, as 1 is never greater than 5
	while(1 > 5)
	{
		std::cout << "Hello from the While loop!" << std::endl;
	}

	// Even though 1 is never greater than 5, the do while loop will always run once
	do
	{
		std::cout << "Hello from the Do While loop!" << std::endl;
	} 
	while(1 > 5);

	return 0;
}
```

Output:
```
Hello from the Do While loop!
```

### `break` and `continue`

`break` and `continue` are two additional tools for designing loops. These can be used inside the `{}` block of any of the above loops (regardless of it being a `for`, `while` or `do while` loop). `break` is a way to end the loop prematurely.

```cpp
#include <iostream>

int main()
{
	int i = 0;
	while(i < 10)
	{
		// if i is equal to 5, end the loop
		if(i == 5)
		{
			break;
		}
		std::cout << i << std::endl;
		i++;
	}

	std::cout << "End of program" << std::endl;

	return 0;
}
```

Output:
```
0
1
2
3
4
End of program
```

`continue`, on the other hand is used to skip an individual step of the loop.

```cpp
#include <iostream>

int main()
{
	for(int i = 0; i < 5; i++)
	{
		// if i is equal to 2
		if(i == 2)
		{
			// skip this step of the loop
			continue;
		}

		std::cout << i << std::endl;
	}
}
```

Output:
```
0
1
3
4
```
