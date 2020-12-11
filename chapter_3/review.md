1. What is meant by the term _prompt_?
   
A prompt is a cue/instruction for the user

2. Which operator do you use to read into a variable?

`>>` or `<<` operator 

3. If you want the use to input an integer value into your program for a variable named number, what are two lines of code you could write to ask the user to do it and to input the value into your program?

```cpp
cout << "Please input an integer value (followed by enter):\n";
cin >> number; // assuming number has already been declared
```

4. What is \n called and what purpose does it serve?

`\n` is a newline. It places the cursor at the start of the next line.

5. What terminates input into a string?

Input into a string is terminated by whitespace, e.g. space, newline, tab

6. What terminates input into an integer?

Input into an integer is terminated by any non-numeric character

7. How would you write

    ```cpp
    cout << "Hello, ";
    cout << first_name;
    cout << "!\n";
    ```

    as a single line of code?

```cpp
cout << "Hello, " << first_name << "!\n";
```

8.  What is an object?

An object is some memory that holds a value of a given type

9.  What is a literal?

A literal is fixed, non-changing value

10. What kinds of literals are there?

Integer, double, character, string, and boolean are some examples

11. What is a variable?

A variable is a named object

12. What are the typical sizes for a char, an int and a double?

char – 1 byte, int – 4 bytes, double – 8 bytes

13. What measures do we use for the size of small entities in memory, such as ints and strings?

bits (not sure)

14. What is the difference between = and ==?

`=` is assignment, `==` is equal comparison

15. What is a definition?

A definition of a variable tells the compiler the type and size of the variable, and reserves space in memory for the variable

16. What is an initialization and how does it differ from an assignment?

Initialisation is to give a variable its initial value. Assignment is to give an initialised variable a new value.

17. What is string concatenation and how do you make it work in C++?

String concatenation concatenates (combines) two strings together. It is done with the `+` operator, i.e. `string1 + string2`.

18. Which of the follow are legal names in C++? If a name is not legal, why not?

    |     |     |     |
    | --- | --- | --- |
    | This_little_pig | This_1_is fine | 2_For_1_special |
    | latest thing | the_$12_method | _this_is_ok |
    | MiniMineMine | number | correct?|

|     |     |     |
| --- | --- | --- |
| *This_little_pig* | This_1_is fine | 2_For_1_special |
| latest thing | the_$12_method | *_this_is_ok* |
| *MiniMineMine* | *number* | correct? |

Legal names are bolded. The following names are not legal:
* `This_1_is fine` and `latest thing` are not legal as they contain a space
* `2_For_1_special` is not legal as it starts with a number (variable names can only start with letters)
* `the_$12_method` and `correct?` are not legal as they contain special characters (`$` and `?`)

19. Give five examples of legal names that you shouldn't use because they are likely to cause confusion.

* `f00` (easily confused with `foo`)
* `fl` (easily confused with `f1`)
* `smthwrd` (uncommon abbreviation)
* `nameS` (easily misspelled)
* `x1`, `x2` etc (no meaning)

20. What are some good rules for choosing names?

* Use meaningful names
* Use a suitable length
  * Not too long, e.g. `some_kind_of_really_long_variable_name_that_is_not_necessary`
  * Not too short, e.g. `i` (lacks meaning) unless used as a local variable or counter
* Separate words using underscores `first_second_third`
* All capital letters is reserved for macros
* Initial capital letters is reserved for self-defined types

21.  What is type safety and why is it important?

Type safety refers to only using an object according to the rules for its type. It is important as not following type safety can lead to unexpected code behaviour

22.  Why can conversion from double to int be a bad thing?

There may be a loss of precision/data. A double is contained in 8 bytes while an int is contained in 4 bytes. Converting from double to int can cause a loss of data when the data being converted requires more than 4 bytes, or contains floating point data.

23.  Define a rule to help decide if a conversion from one type to another is safe or unsafe.

When converting from type 1 to type 2, if type 1 is represented with more memory than type 2, the conversion is unsafe. Else, the conversion is safe.