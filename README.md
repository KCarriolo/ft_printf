<div align="center">
  <img src="https://user-images.githubusercontent.com/98427284/175838265-59e18bf3-b8b3-46d3-8b3e-1f7ce4b2e9a7.png" height="150" width="150">

</div>

<h1 align="center">
  42 Cursus' Printf

</h1>

<p align="center">No fancy words, just straighforward recreate the printf function.<br>This is one of those projects where the proposal is simple, but the execution....</p>

---

A small description of the required conversion:
<i>
- `%c` print a single character ([`ft_sputchar.c`](ft_sputchar.c)).
- `%s` print a NULL terminated string of characters ([`ft_sputstr.c`](ft_sputstr.c)).
- `%p` The void * argument is printed in hexadecimal ([`ft_putptr.c`](ft_putptr.c)).
- `%d` print a base 10 number ([`ft_sputnbr.c`](ft_sputnbr.c)).
- `%i` same as %d ([`ft_sputnbr.c`](ft_sputnbr.c)).
- `%u` print an unsigned int in base 10 number ([`ft_sputunbr.c`](ft_sputunbr.c)).
- `%x` print a number in hexadecimal (base 16) ([`ft_puthex.c`](ft_puthex.c)).
- `%%` print a percent sign.</i>

## Source files

### Main files
- [`ft_printf.c`](ft_printf.c)
- [`ft_printf.h`](ft_printf.h)

### Conversions
- [`ft_sputchar.c`](ft_sputchar.c)
- [`ft_sputstr.c`](ft_sputstr.c)
- [`ft_putptr.c`](ft_putptr.c)
- [`ft_sputnbr.c`](ft_sputnbr.c)
- [`ft_sputunbr.c`](ft_sputunbr.c)
- [`ft_puthex.c`](ft_putthex.c)

## Installation
Clone the repository and run make to generate the static library file(libftprintf.a), copy that file to your local folder and compile with your files.

Steps:
```sh
git clone https://github.com/KCarriolo/ft_printf.git && cd ft_printf && make && <cp libftprintf.a to your project folder and compile with your files>
```

## ✨Author✨

🧔 **Kevin Carriolo**
- Github: <a href="https://github.com/KCarriolo" target="_blank">@KCarriolo</a>
- LinkedIn: <a href="https://www.linkedin.com/in/kevin-carriolo/" target="_blank">@Kevin Carriolo</a>
