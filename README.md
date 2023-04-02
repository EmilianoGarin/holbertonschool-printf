<br/>
<p align="center">
  <a href="https://github.com/EmilianoGarin/holbertonschool-printf">
    <img src="https://lh3.googleusercontent.com/MwBupbkjSOz5x_NdtkXmviWRTkP1SfeXOaJzlWGWjlnbD_OsMdFbhmoKkxzhBRhoGTTAjKghdPrxN5FA-PdpllFhudjJcs20cQ7axV4r3HHyQl0St4ng0wf2QQddPH11G8JAU2FtMUzr_cZtprNG2nI6uRMnc-0OHITs-lgF01fLzHB1exjHhxsvdhW4kp2hFyii-J_Om81hkFLDHDVI4adxxEI2hPD3JDyWLTRJz4RaFBlK-VAO_d1JcRf_BMCljMeHpTYjX5gwXQcpVSnA1w3TvIfsBuOCzkh17oyYHKaQNcd9WUKkP1I8_rUHtHtCZxaz_7f1kOVvIwd8wnKE3GwFn4L94x3RWeqweJXejzoWXtWQMt7zlnO26x8scLWF9623yQ3Az_0mucMCyu24Bj7WMes1L1I7AOgBEZ7GH6yrqacWVVfC5L81pbHcbnoq_eOSAtdqY_-UPKAByb5W7sLdgVm8L-h7oOjFO-Es3hbS6pxdnoD-RrDYQQxz1-qVWjU9zM1Mv51gKmpR-vC5S6LLWTKl_WMrGwdDqvHdXkghEr6wi_fz4qr7Gb-oOPCe4v_4GT5LH3zSXGWwo2DqDmThq5si1_CGTiwhJQiLe-YD7KyMFpleKHX9vC7jmjcQE1f70zhbDjsTNIYqblx67nCJGVxHmPOAz8W1RB0TZ8Nw5uZxUnNKjg6Oy7jjHGf9TE7GJg_pGNWbEg6GLxVG67SghMZPoWXpfjyfIVafCfwtQUW2bWVqpoQxqQY5I9K5cJA9cvb0EQnkaCqKLyLMJ5kDnwjiEVZunXw_Q3_kF7r7T3dkmBuyeUBsUJMiBghiKizbgdrnXXu9u9BGzcWP087t9OosiluAum3elMl737n_V70wjahH6T7nbsaO_hNMGcUHoar_O9bJO4Ts__k8PyoWQ7YkXuyE-hLYCr-sm0RM3j9a4uld_mXVbKCbzfLPjJKtw8BXwu5s5mPR9fjbdCoCQDgn9MtJzhGrYmy5ZnB3tRACs-CmIUpZ=w600-h120-s-no?authuser=0" alt="Logo" width="600" height="120">
  </a>

  <h3 align="center">_PRINTF</h3>

  <p align="center">
    _printf is the standard function in C, and in many programming languages, for printing format strings on the screen. It is a function that  takes an indefinite number of arguments. The parameter coast of a constant string called format, and a number of additional undefined arguments.
    <br/>
    <br/>
    <a href="https://github.com/EmilianoGarin/holbertonschool-printf"><strong>Explore the docs »</strong></a>
    <br/>
    <br/>
  </p>
</p>

![Contributors](https://img.shields.io/github/contributors/EmilianoGarin/holbertonschool-printf?color=dark-green) 

## Table Of Contents

* [About the Project](#about-the-project)
* [Getting Started](#getting-started)
* [Files](#files)
* [Resources](#resources)

<details>
  <summary><h1>About the Project</h1></summary>
This is the first group project, carried out by Holberton students. 
  
  The goal of this assignment is to recreate the printf function, a basic version of the standard function. 
  
  It also encourages group and team work with a randomly assigned partner.
  <details>
    <summary><h2>Requirements</h2></summary>
    
    
General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project
<h3>GitHub</h3>
There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

<h3>More Info</h3>
Authorized functions and macros

* ```write (man 2 write)```
* ```malloc (man 3 malloc)```
* ```free (man 3 free)```
* ``` va_start (man 3 va_start)```
* ```va_end (man 3 va_end)```
* ```va_copy (man 3 va_copy)```
* ```va_arg (man 3 va_arg)```

<h3>Compilation</h3>

* Your code will be compiled this way:

<code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c</code>

* As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
* Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:
```c
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
```
* We strongly encourage you to work all together on a set of tests
* If the task does not specify what to do with an edge case, do the same as printf
</details>
</details>

<details>
  <summary><h1>Getting Started</h1></summary>
<details>
  <summary><h2>Usage</h2></summary>
  <details>
    <summary><h3 align="center">Flowchart</h3></summary>
    <img alt="_printf flowchart" src="https://lh3.googleusercontent.com/m35spL0PRHPwaJ2EB2gyYsqTKERjbDEYEwtGi6eSOyq5eumBvrFAEq9DV0gwm3m3pdew6U8ClGUtaMV3LrqAJxcLsJi2CpBWliJBYzwJt3f8XCHebLLt43o3MEWYFfPj2h8xxn4EUjtQcilA_DF1swfLwVPs32Cn1Us07KA4TBbTimOQ6ykS1lmgMlkGcbcC3YQiW9bSp63qbTwIb-9cyAQ1xNJZwNTroVQOUt2XyHG_1YhaToS6YTAHL2Cg98d5_jRloa6iqSoEYKDDb7zyj2ybope8ttMA2WJt5pjIJH_itwbMjL8yqlMeMbIPhTFTC4MtU5V9WlYazvub-cdLRpyCR_9cJCqSfM4W2WyLgRyUT2YtvTsZowZXGY8MtC_bWvgRtQ9EGnbEi0R_HX7qgPkllhvBbLrGiViVdLJvywAo7icpxOVl9xHwW6pNH9lbWkXNnrHZbVxKyXls0mWCFTa6O072f0JBUcTAR4f-1tWsHJb4mCWzyufaaRjXYcq0gD28kerT01dIb5fwrZlmHHiCMHvXau1dwqF143BmcWsfkVlOTATQvXAa-3s0kYTq47lj1IHVHIpMysj3JSPAqjN71uqKsqvkwCHI1P569mjdVOSWreVrNi6eUxX2YzMsR1ybTX0BLLIHt1sgeSJEdX8iqwvnq3SfRq8iGqCjQKTLzmhrKH3qU0S5Y2SOK00QKSK5OzH1NXfKAz6UIrWfVb7L5wwJfNRRLyuZaCU2Jm0oQvvmVJih302BG6Ea7VUa7Q2Lln4OtstgfRIy6usZyGNFO6AdYC8LzkEniq4pJkR5zWX-KzCuZjmyuxTWTh2ejDTImFVKXLSu9QFovYPXbpMlZ4vIKo2erTEDGJZcadNq1dpAW6xbWTaOlu5-FmrpHTY_8XEoayFUnMBUlCAhNOSpGBegOtOrq8XQ0yH4BeBZtSM-bMO0WBdha3-82YGSmCWuoCopyj_9_42SXRcrvpUIeABs_Rn0H6dS63zBXTMC7Xtt4522ivvd=w375-h797-s-no?authuser=0">
  </details>
What this function does is to go through the format constant character by character, and according to the character it finds, it evaluates and performs a function.
<br>
To be more specific, the format string includes the text to be printed literally and as it proceeds, it will check if the current character is a '%', when it finds this format indicator, in case the next character is a format specifier, it replaces it with the text obtained from the added parameters, in case it is another '%', it simply prints that '%', if it is neither a format type nor a '%', it simply prints the % followed by the character after that '%'.

<h3>Example</h3>

Input:
```c
int main()
{
	_printf("%s\n", "This is an example.");
	return(0);
}
```
Output:
```
This is an example.
```

<h3>Format Specifier</h3>

The symbol '%' denotes the beginning of the formatting mark.

If several indicators are pickled in the format constant string, the values are included in the same order in which they appear.
As shown in the following example:

Input:
```c
int main()
{
  _printf("Name: %s, Gender: %c, Age: %d.\n", "Robert", 'M', 20);
  return (0);
}
```
Output:
```
Name: Robert, Gender: M, Age: 20.
```

<h3>Syntax</h3>

```
 _printf("%[format]", type);
```
<details>
<summary align="center" ><h1width="50">Format types</h1></summary>
  <table align="center" width="50">
	<tr>
    <th>FORMAT TYPES</th>
    <th>DESCRIPTION</th>
  </tr>
  <tr>
    <td>%c</td>
    <td>Prints the corresponding ASCII character</td>
  </tr>
  <tr>
    <td>%s</td>
    <td>Character string (ending in '\n')</td>
  </tr>
  <tr>
    <td>%d, %i</td>
    <td>Signed decimal conversion of an integer</td>
  </tr>
</table>
</details>
</details>
    </details>
<details>
  <summary><h1>Files</h1></summary>
  <h2>Index</h2>
  
  1. [_printf.c](#_printf.c)
  2. [main.h](#main.h)
  3. [functions.c](#functions.c)
  4. [functions_2.c](#functions.c)
  5. [man_3_printf](#man_3_printf)
  
  <a name="_printf.c"></a>
  <h3><a href="https://github.com/EmilianoGarin/holbertonschool-printf/blob/master/_printf.c">_printf.c</a></h3>
  
  This file contains the main code of the _printf function.
  That code is responsible for searching the character '%' in the provided parameters. If it finds it, it checks whether the next character is a format specifier. If it is, it executes the rest of the code. If it is 'NULL', it returns -1 and finishes.
  
  <a name="main.h"></a>
  <h3><a href="https://github.com/EmilianoGarin/holbertonschool-printf/blob/master/main.h">main.h</a></h3>
  
  This file has all the macros headers used by the functions, function prototypes and structure.
  
 ```c
  /**
 * struct printf - printf struct
 * @name: Is a char
 * @print: Is a pointer
 */
typedef struct printf
{
	char name;
	int (*print)(va_list ap);
} pr;
 ```
  <a name="functions.c"></a>
  <h3><a href="https://github.com/EmilianoGarin/holbertonschool-printf/blob/master/functions.c">functions.c</a></h3>
  
  This file contains almost all the functions used by the _printf file to perform the necessary actions when finding a format specifier.
  
  <a name="functions_2.c"></a>
  <h3><a href="https://github.com/EmilianoGarin/holbertonschool-printf/blob/master/functions_2.c">functions_2.c</a></h3>
  
  This file contains the _putchar function, because we couldn't add more functions to the 'functions.c' file due to the Betty Coding Style guidelines.
  
  <a name="man_3_printf"></a>
  <h3><a href="https://github.com/EmilianoGarin/holbertonschool-printf/blob/master/man_3_printf">man_3_printf</a></h3>
  
  * _printf function manual page.
  * To view the man page, enter:
  
  ```
  man _printf
  ```
</details>
<details>
  <summary><h1>Resources</h1></summary>
  
  * <a href="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230402%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230402T190913Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=d790f5f554ca467bde78b2bdea00696fb975b6881076cfc28f58acecc569879c" target="blank">Secret of Printf</a>
  * <a href="https://intranet.hbtn.io/concepts/881" target="blank">Approaching a Project</a>
  * <a href="https://intranet.hbtn.io/concepts/893" target="blank">Group project</a>
  * <a href="https://intranet.hbtn.io/concepts/894" target="blank">Pair programming - How to</a>
  * <a href="https://intranet.hbtn.io/concepts/895" target="blank">Flowcharts</a>
</details>
<footer>
  <p align="center">Authors</p>
  <p align="center"><a href="https://github.com/Raguerrebere17" target="blank">Robert Aguerrebere</a></p>
  <p align="center"><a href="https://github.com/EmilianoGarin" target="blank">Emiliano Garin</a></p>
