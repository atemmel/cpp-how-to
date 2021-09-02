## Excercises 2

Suggested reading: [`Working with vectors and strings`](07-working-with-vectors-and-strings)

### 1.0: Palindrome checker

The task is to create a program which can verify wether an inputted string is a palindrome or not. A palindrome is a word that reads the same both backwards and forwards, such as *madam* or *racecar*. The program should prompt the user for a potential palindrome string, and output either `true` or `false` depending on wether the string is a palindrome or not.

Example interactions with the program:
```
Please input a potential palindrome:
hello
false
```
```
Please input a potential palindrome:
abba
true
```
```
Please input a potential palindrome:
Abba
false
```

### 1.1: Improved Palindrome Checker

Suggested reading: [`Working with vectors and strings`](07-working-with-vectors-and-strings)

The task is to extend the previous program into being capable of recognizing palindromes, independent of the letter case (uppercase/lowercase). This can be done by using [`std::toupper`](https://en.cppreference.com/w/cpp/string/byte/toupper)/[`std::tolower`](https://en.cppreference.com/w/cpp/string/byte/tolower).

Example interactions with the program:
```
Please input a potential palindrome:
hello
false
```
```
Please input a potential palindrome:
abba
true
```
```
Please input a potential palindrome:
Abba
true
```

### 2.0 Explode a string into several substrings

Suggested reading: [`Working with vectors and strings`](07-working-with-vectors-and-strings)

The task is to create a function that should split a string into several substrings based upon a delimeter. The function should take a `std::string` and a `char` as inputs, and outputs a `std::vector` of `std::strings`.

```cpp
std::vector<std::string> explode(std::string base, char delimeter)
{
	// Code goes here...
	...
}
```

Example inputs and outputs for the function:
```cpp
std::vector<std::string> results = explode("Hi Hello Ciao Ola Tjena", ' ');
```
```
Ouput: results = {"Hi", "Hello", "Ciao", "Ola", "Tjena"}
```
```cpp
std::vector<std::string> results = explode("a,b,c,d,e,f", ',');
```
```
Ouput: results = {"a", "b", "c", "d", "e", "f"}
```
```cpp
std::vector<std::string> results = explode("a,b,c,d,e,f", 'z');
```
```
Ouput: results = {"a,b,c,d,e,f"}
```

### 3.0 Implode several strings into a single string

Suggested reading: [`Working with vectors and strings`](07-working-with-vectors-and-strings)

The task is to reverse the above process, creating a single `std::string` from several `std::string`s and a delimeter. The function should look like this:

```cpp
std::string implode(std::vector<std::string> words, char delimeter)
{
	// Code goes here...
	...
}
```

Example inputs and outputs for the function:
```cpp
std::string result = implode({"Hi", "Hello", "Ciao", "Ola", "Tjena", ' ');
```
```
Ouput: result = "Hi Hello Ciao Ola Tjena"
```
```cpp
std::string result = implode({"a", "b", "c", "d", "e", "f"}, ',');
```
```
Ouput: result = "a,b,c,d,e,f"
```
```cpp
std::string result = implode({"a", "b", "c", "d", "e", "f"}, 'z');
```
```
Ouput: result = "azbzczdzezf"
```
