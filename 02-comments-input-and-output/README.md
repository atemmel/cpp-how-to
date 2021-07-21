### Comments, input and output

## Comments

Some code might be hard to read or comprehend. One of the tools added to circumvent this problem is _comments_.
Comments work as text embedded within the code. It does not alter the code in any meaningful way, but allows the
developer to embed their thoughts when writing the code within it. In C++, there are two ways to insert a comment.

# Single-line comments

Single-line comments (as the name alludes to) are confined within a single line. They are written by inserting two 
forward slashes. (`//`)

```cpp
#include <iostream>

int main() // The program starts here
{
	// The line below prints "Hello World"
	std::cout << "Hello World!" << std::endl;
	return 0;
}
```

Although the above example regarding comments perhaps wasn't the most practical, their usefulness increases
greatly with the complexity of the code.

# Multi-line comments

Multi-line comments, in contrast to single line comments, may encompass one or several lines. A multi-line comment
starts with a slash and a star (`/*`) and ends with a star and a slash (`*/`).

```cpp
#include <iostream>

/* Of course, comments are allowed to be written here as well! */

int main()
{
	/*
	This is a multiline comment describing this program.
	This program is not of any particular interest, as 
	it only prints a stickman performing a salute.
	*/
	std::cout << "o7" << std::endl;
	return 0;
}
```

## Input

Our programs so far haven't been all that exciting, as their results are fairly predictable. One way to write more
interesting programs is to use user input within them. In C++, input is handled using `std::cin`, the counterpart
to `std::cout`. As with `std::cout`, in order to use `std::cin`, one must `#include` the `iostream` header.

```cpp
#include <iostream>

int main()
{
	int age;
	std::cout << "How old are you?" << std::endl;
	std::cin >> age;
	std::cout << "I see! So you are " << age << " years old!" << std::endl;
	return 0;
}
```
