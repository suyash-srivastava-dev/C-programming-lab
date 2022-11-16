# Introduction

## Installation of C


### Windows

Install MinGW ( C compiler )
    
- Install all the packages from MinGW,
- Click the Installation menu and select Apply Changes.
- Press the Windows key and type environment. Click Edit the system environment variables in the search results.
- Click the Environment Variables… button.
- Select the "Path" option under "System variables" and click Edit…
- Click New.
- Type C:\MinGW\bin and click OK.
- check installation open cmd, 

        gcc -v


### Ubuntu


    sudo apt install g++
    sudo apt install build-essential
    g++ --version

## Install VS Code (editor for programming)

- Microsoft Store/ Web
- Extensions:
    - C/C++ (Microsoft)
    - Code Runner

#

# Introduction 

 Why is C language important

- Oracle is written in C
- Core libraries of android are written in C
- MysQL is written in C
- Almost every device driver is written in C
- Major part of web browser is written in C
- Unix operating system is developed in C

For students
- C is important to build programming skills
- C covers basic features of all programming language
- C is the most popular language for hardware dependent programming

History 
- Developer of C language : Dennis Ritchie
- In 1972
- At AT & T's Bell LABs, USA
- Co-developer of UNIX operating system.

#
## Compilation
~~~~
Source Code --> Compilation --> Machine Code
Written in C                    011010110....
~~~~

## Hello World

[hello.c](/Lab1/hello.c)

~~~~c
#include <stdio.h> 

int main() 
{
    printf("Hello, World!\n");
    return 0;
}

~~~~
Execute hello.c with intermediate files 

    gcc -Wall -save-temps hello.c -o ./execution/hello 

Steps of Compilation:

![Alt](/Lab1/helloWorldExecution.png "Title")

- Step 1
 : is preprocessing of header files, all the statements starting with # (hash symbol) and comments are replaced/removed during the pre-processing with the help of a pre-processor. It generates an intermediate file with .i file extension i.e. a hello.i file.
- Step 2
 : is a compilation of hello.i file. Compiler software translates the hello.i file to hello.s with assembly level instructions (low-level code).
- Step 3
 :  assembly-level code instructions are converted into machine-understandable code (binary/hexadecimal form) by the assembler. The file generated is known as the object file with an extension of .obj/.o i.e. hello.obj/hello.o file.
- Step 4
 :  Linker is used to link the library files with the object file to define the unknown statements. It generates an executable file with .exe/.out extension i.e. a hello.exe/hello.out file.

#
## Character Set

- Alphabets: which includes both uppercase and lowercase characters. ASCII code of uppercase characters is in the range [65, 90] whereas ASCII code of lowercase characters is in the range [97, 122]. Eg: A, B, a, b etc.

- Digits: Includes digits from 0 to 9 (inclusive). ASCII code of digits is in the range [48, 57]. Eg: 0, 1, 2 etc.

- Punctuation/Special Characters: The default C locale classifies the below characters as punctuation characters.

[characterList.c](/Lab1/charactersList/characters.c)

| Character |	ASCII	|Detail |
|-----------|------------|---------|
|!	|33	|Exclamation mark, exclamation point, or bang.|
|"	|34	|Quote, quotation mark, or inverted commas.|
|#	|35	|Octothorpe, number, pound, sharp, or hash.|
|$	|36	|Dollar sign or generic currency.|
|%	|37	|Percent.|
|&	|38	|Ampersand, epershand, or and symbol.|
|'	|39	|Apostrophe or single quote.|
|(	|40	|Open or left parenthesis.|
|)	|41	|Close or right parenthesis.|
|*	|42	|Asterisk, mathematical multiplication symbol, and sometimes referred to as a star.|
|+	|43	|Plus.|
|,	|44	|Comma.|
|-	|45	|Hyphen, minus, or dash.|
|.	|46	|Period, dot, or full stop.|
|/	|47	|Forward slash, solidus, virgule, whack, and mathematical division symbol.|
|:	|58	|Colon.|
|;	|59	|Semicolon.|
|<	|60	|Less than or angle brackets.|
|=	|61	|Equal.|
|>	|62	|Greater than or angle brackets.|
|?	|63	|Question mark.|
|@	|64	|Ampersat, arobase, asperand, at, or at sym|bol.
|[	|91	|Open bracket.|
|\	|92	|Backslash or reverse solidus.|
|]	|93	|Closed bracket.|
|^	|94	|Caret or circumflex.|
|_	|95	|Underscore.|
|'	|96	|Acute, backquote, backtick, grave, grave accent, left quote, open quote, or a push.|
|{	|123	|Open brace, squiggly brackets, or curly bracket.|
|}	|125	|Close brace, squiggly brackets, or curly bracket.|
|~	|126	|Tilde.|




- Control Character Set: These characters range from ASCII code 0 to 31 (inclusive) and 127th character. They are visually absent, but they do affect the program in different ways.

|Character	|ASCII	|Detail|
|--|--|--|
|\<space\>|	32|	space| (SPC)|
|\t	|9	|horizontal tab (TAB)|
|\n	|10	|newline (LF)|
|\v	|11	|vertical tab (VT)|
|\f	|12	|feed (FF)|
|\r	|13	|carriage return (CR)|

#

## Input & Output in C

- Input refers to feeding data into the program, and Output refers to getting data out of the program. Input and Output in C are done using the Standard Input/Output library, which we could include in the program using stdio.h header file consists of Input and Output functions in C like scanf() for input and printf() for output. 

- For taking input in C, we use the built-in function of the C scanf(). scanf() method reads the input from standard input stream stdin and scans that input as per the type specified.
    ~~~~c
    scanf(“%A”, &variableOfAType);  
    ~~~~

  Where %A defines format specifier in C, it helps the compiler identify the data type of variable we are going to output.

     |Data type	|value of A|
    |--------|-----|
    |int	|%d|
    |float	|%f|
    |char	|%c|
    |long	|%l or %ld|
    |double	|%lf|

-   ~~~~c
    Integer: 
    Input: scanf("%d", & intVariable);
    Output: printf("%d", intVariable);

    Float: 
    Input: scanf("%f", & floatVariable);
    Output: printf("%f", floatVariable);

    Character: 
    Input: scanf("%c", & charVariable);
    Output: printf("%c", charVariable);
    ~~~~

[inputOutput.c](/Lab1/inputAndOutput/io.c)

