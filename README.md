# libft
### About

Libft is the first project at 42, designed to build a strong foundation in C programming. In this project, I recreated many of the standard C library functions from scratch, ultimately creating a personal library. This project is crucial because this library will be used in future assignments throughout the 42 curriculum.

For 42 students: tackling this project on your own is highly recommended. Writing and testing your code thoroughly will help you truly understand the underlying concepts. If you've completed the piscine, you should be prepared to approach this project with patience and precision.

# How to Use
## Compilation

**1** **.** Clone the repository:
```bash
git clone git@github.com:ossamatouayri/libft.git
```
**2** **.** Enter the project directory and run make:
```bash
cd libft/libft
make
```
**3** **.** To use in your code, include the library header:
```bash
#include "libft.h"
```
## Makefile Rules
* **make** - Compile mandatory libft files.
* **make** bonus - Compile bonus libft files.
* **make all** - Compile all mandatory libft Part .
* **make clean** - Remove all object (.o) files.
* **make fclean** - Remove all object files and the compiled library (.a).
* **make re** - Execute fclean and then all.

## Mandatory Functions
Libft includes 34 essential functions covering character, string, and memory manipulation, which are required for a grade of 100.

### ● Character Check and Manipulation
 `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_toupper`, `ft_tolower`
### ● String Manipulation
  `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
### ● Memory Manipulation
 `ft_calloc`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_strdup`
### ● Numeric Manipulation
  `ft_atoi`, `ft_itoa`
### ● File Descriptor Writing
 `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
## Bonus Functions
The 9 bonus functions, focused on list manipulation, add up to 25 additional points, bringing the project score to 125 if all functions are implemented accurately.

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`
## Norminette
### At 42, each project must follow the Norm standard:

##### ● No for, do...while, switch, case, goto, ternary operators, or variable-length arrays.
##### ● Functions are limited to 25 lines (excluding braces).
##### ● Lines should be a maximum of 80 columns, including comments.
##### ● Functions may take a maximum of 4 named parameters.
##### ● Assignments and declarations cannot be in the same line (except static variables).
##### ● No more than 5 variables per function.
##### ● And more...
