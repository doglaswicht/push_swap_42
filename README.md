
# Push_Swap

![count](https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExMWM0Z3RicGp4ZmI1c3JwaW91YWZta2xsYzRkaDhydGhxbTN3MzFsZyZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/xT5LMINTLCSOGdIyEo/giphy.gif)

#### About the Project

Push_swap is a sorting algorithm challenge from 42 School.
The goal is to sort a stack of integers using only a limited set of operations — push, swap, rotate, and reverse rotate — while minimizing the total number of moves.
It’s a project that combines algorithmic logic, data structures, and optimization.
In my implementation, I used a combination of simple sorting for small stacks and a radix sort algorithm for larger data sets, ensuring both performance and code clarity.

#### What I Learned

This project was a deep dive into algorithmic thinking and problem decomposition.
I learned how to:

- Manipulate linked lists to simulate stacks in C.

- Analyze and improve algorithmic time complexity.

- Write efficient and readable C code that follows the 42 Norm.

- Handle input parsing, memory management, and error checking.

- Debug and test algorithms using visualizers and custom scripts.

#### Skills Developed

- C programming (modular design, pointers, memory handling)

- Algorithm design and optimization

- Data structures (stacks, linked lists, indexing)

- Problem-solving under constraints

- Makefile & Libft integration

```

├── Makefile
├── includes
│   └── push_swap.h
├── libft
│   ├── Makefile
│   ├── ft_atoi.c
│   ├── ft_bzero.c
│   ├── ft_calloc.c
│   ├── ft_convertion.c
│   ├── ft_isalnum.c
│   ├── ft_isalpha.c
│   ├── ft_isascii.c
│   ├── ft_isdigit.c
│   ├── ft_isprint.c
│   ├── ft_itoa.c
│   ├── ft_memchr.c
│   ├── ft_memcmp.c
│   ├── ft_memcpy.c
│   ├── ft_memmove.c
│   ├── ft_memset.c
│   ├── ft_printf.c
│   ├── ft_printf.h
│   ├── ft_putchar.c
│   ├── ft_putchar_fd.c
│   ├── ft_putendl_fd.c
│   ├── ft_puthex.c
│   ├── ft_putnbr.c
│   ├── ft_putnbr_fd.c
│   ├── ft_putnbr_unsigned.c
│   ├── ft_putptr.c
│   ├── ft_putstr.c
│   ├── ft_putstr_fd.c
│   ├── ft_split.c
│   ├── ft_strchr.c
│   ├── ft_strdup.c
│   ├── ft_striteri.c
│   ├── ft_strjoin.c
│   ├── ft_strlcat.c
│   ├── ft_strlcpy.c
│   ├── ft_strlen.c
│   ├── ft_strmapi.c
│   ├── ft_strncmp.c
│   ├── ft_strnstr.c
│   ├── ft_strrchr.c
│   ├── ft_strtrim.c
│   ├── ft_substr.c
│   ├── ft_tolower.c
│   ├── ft_toupper.c
│   └── libft.h
├── src
│   ├── instructions
│   │   ├── push.c
│   │   ├── reverse.c
│   │   ├── rotate.c
│   │   └── swap.c
│   ├── main.c
│   ├── radix.c
│   ├── simple.c
│   └── sort_3.c
└── utils
    ├── check_args.c
    ├── index.c
    ├── t_list.c
    ├── utils.c
    └── utils_2.c

```

### How to Run

#### Clone the repository
```
git clone https://github.com/yourusername/push_swap.git
cd push_swap
```

#### Compile the project

```
make
```

# Run an example
```
./push_swap 2 1 3 6 5 8

```