## Excercises 1

### 1.0: Star Staircase

Suggested reading: [`Loops`](../05-loops)

The task is to create a program that prints a staircase made out of stars (`*`). Each step of the staircase should contain one star less than the step below it. The program should prompt the user for how many steps the staircase should consist of.

Example interactions with the program:
```
Please write how many steps you want the staircase to have:
5
*
**
***
****
*****
```
```
Please write how many steps you want the staircase to have:
3
*
**
***
```
```
Please write how many steps you want the staircase to have:
8
*
**
***
****
*****
******
*******
********
```

### 1.1: Broken Star Staircase

Suggested reading: [`Logical operators and Branches`](../04-logical-operators-and-branches), [`Loops`](../05-loops)

The task is to extend the previous program into creating a flawed staircase. Besides prompting the user for the amount of steps the staircase should contain, the program should also prompt the user for which step of the staircase that should be broken. In the event that the broken step is out of bounds of the staircase, such as asking for the 8th step of a staircase with only 4 steps available to be broken, should print an error message instead.

Example interactions with the program:
```
Please write how many steps you want the staircase to have:
5
Please write which step you want to be broken:
4
*
**
***

*****
```
```
Please write how many steps you want the staircase to have:
7
Please write which step you want to be broken:
1

**
***
****
*****
******
*******
```
```
Please write how many steps you want the staircase to have:
4
Please write which step you want to be broken:
5
A staircase with 4 steps cannot have a broken step at number 5
```

### 2.0: Odd or Even

Suggested reading: [`Arithmetic operators`](../03-arithmetic-operators), [`Logical operators and Branches`](../04-logical-operators-and-branches)

The task is to write a program which, after prompting the user for a number, prints a message describing whether the number was Odd or Even.

Example interactions with the program:
```
Please write a number:
7
Odd
```
```
Please write a number:
2
Even
```
```
Please write a number:
0
Even
```

### 2.1: Odd or Even (with functions)

Suggested reading: [`Arithmetic operators`](../03-arithmetic-operators), [`Logical operators and Branches`](../04-logical-operators-and-branches), [`Functions`](06-functions)

Building upon the previous task, the program should work exactly as the previous program from the users point of view, but the code, but the internal logic should be modified slightly. You are now meant to write a function that should determine if an `int` is even. The function should look like this:

```cpp
bool isEven(int value)
{
	// Code goes here...
	...
}
```
