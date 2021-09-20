## Structs

A `struct` is a way to design your own type of data, by combining various other already existing datatypes. For instance, you might wish to represent a `Person` in some way. A `Person` could have a `firstName` and a `lastName` represented as `std::string`s, as well as an `age`, represented as an `ìnt`. These different components are commonly called *members* of the `struct`. A `struct` designed like the description above would look like this in C++:

```cpp
struct Person 
{
	std::string firstName;
	std::string lastName;
	int age;
};
```

In order to use a `struct`, you may need to specify which one of the different members you wish to work with:
```cpp
Person person;
person.firstName = "James";
person.lastName = "Bond";
person.age = 37;

std::cout << "The name is " << person.lastName ". " << person.firstName << " " << person.lastName << std::endl;
```

Everything you can do with a regular type, you can also do with the `struct`s you design. This includes:

Returning it from a function:
```
Person createPerson();
```

Passing it into a function:
```
bool isAdult(Person person);
```

Creating an `std::vector` of `Person`s:
```
std::vector<Person> persons;
Person person;
person.firstName = "Victor";
persons.push_back(person);
```

## Member functions

`struct`s can also be supplied with member functions. This is an alternative way to write functions that perform different operations with the given `struct`. An example of how to write such a function is as follows:

```cpp
#include <iostream>

struct Person
{
	int age;

	// Forward declaring the function
	bool isAdult();
};

// Function definition
bool Person::isAdult()
{
	// Code within the function can reach data owned by the `Person` `struct`
	return age >= 18;
}

int main()
{
	Person person;
	person.age = 24;

	// Example of calling the member function
	if(person.isAdult())
	{
		std::cout << "The person is an adult!\n";
	}
	else
	{
		std::cout << "The person is underage.\n";
	}
}
```
