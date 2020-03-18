# PRINTF PROJECT IMPLEMENTATION IN C LANGUAGE
---
This project is about recreating our printf function, which belongs to a standard C language library. Its main function is to send a standard output according to the format, fomatting the past arguments and turning them into the arguments os a charracter string. For this project, the main function will be used as _printf to diffrentiate it from the original printf.
```
<img aling="center" src="https://i.ibb.co/8b7WG5d/printf.png" width="90%" />
```
##How to use it 🔧
Firts you have to add the holberton library. "holberton.h"

This library contains all the prototypes functions that you will need to execute the _printf function

###Prototype: int _printf(const char *format, ...);

Then compile just like that:
gcc -Wall Wextra -Werror -pedantic -Wno-format *.c holberton.h -o namefileExecutable

./"namefileExecutable"
```
##Test⚙️
Some examples of how to call the function _printf
To print a nomal string:
```
_printf("hello, world");
```
To print a nomal variable type char use %c:
```
_printf("I am a char:%c" variable);
```
To print a normal string whit a pointer to char use %s:
```
_printf("My name is:%s" pointer_to_char);
```
## Development environment 🛠️
This project has been tested on Ubuntu 14.06.6 LTS

* The tests are carried out in [virtualBox](https://www.virtualbox.com) 
* Development environment manager [vagrant](https://www.vagrantup.com)
```
##Authors✒️
* Javier Charria - student at Holberton School
* Oscar Info - student at Holberton School

