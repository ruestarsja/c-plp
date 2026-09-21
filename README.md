# A Tutorial of the C Programming Language

The C programming language is among the oldest programming languages still popular today, having been created in 1972 by Dennis Ritchie, largely for use in programming the Unix kernel. [1] While it once saw more diverse uses, it is still widely popular in low-level software, including operating systems, hardware drivers, and embedded systems. [1]

This tutorial will take you through the basics of the C language. It assumes familiarity with basic programming concepts, including variables, functions, if/else statements, loops, and the idea of data types. It is not meant to teach C as a first programming language.

## 0 Getting Started

**A note:** This section currently only provides instructions for Linux systems or for Windows systems via WSL. In the future I hope to expand this to include instructions for macOS as well as a native Windows setup; in the meantime, internet search is your friend. For macOS, as far as I can tell, you likely have a `gcc` command already installed (which is likely actually the Clang compiler, not GCC). For Windows, Visual Studio (not Visual Studio Code) should theoretically have a C toolkit, but I was not able to figure this out in the little time I put towards it.

### 0.1 Installing a Compiler

C is a *compiled* language. To run it, you will need to install an appropriate compiler. If you're on Linux, this should be incredibly easy. Your distro probably comes shipped with GCC (the GNU Compiler Collective); if it doesn't, it should be available in your package manager under the name `gcc` or similar. For Windows users, unless you want to figure out Visual Studio, I recommend installing the Windows Subsystem for Linux (WSL) and using/installing GCC through that. Here are the detailed steps:

1. Open PowerShell and run the command `wsl --install`. Follow any prompts. [2]

2. Start the subsystem by running `wsl`. 

3. Check whether GCC is installed by running `gcc --version`. If it prints out version information, you're all set! If it doesn't, run `sudo apt install gcc` to install it.

### 0.2 Installing an Editor

If C isn't your first programming language, you likely already have an editor or IDE that you like to use. Because we're using a command line compiler, it doesn't really matter what editor you use for writing your code -- use whatever you prefer. In case you're curious, I have a strong preference towards VSCodium (an open source fork of VSCode, minus all the Microsoft bloat).

### 0.3 Testing with Hello World

To test that your environment is set up correctly, we will try to run a simple Hello World program. Put the following code in a file titled "HelloWorld.c":

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```
*From [1]*

Ensure the file is saved, then in the terminal (in WSL if on Windows), navigate to the folder containing HelloWorld.c. Execute the command `gcc HelloWorld.c -o HelloWorld` -- we'll go over how it works later. If you check the folder, you should now see two files -- the original HelloWorld.c, plus one simply called "HelloWorld". Run the command `./HelloWorld` and you should see the string "hello, world" print to the terminal screen. Success!

## 1 Basics

### 1.1 Writing Comments

Before we start writing code, let's look at how to write comments. That way, we can put lots of comments in the code we write to help explain all of its parts.

C has both single- and multi-line comments with the following syntax [3]:

```c
// This is a single-line comment

/* This is
a multi-line
comment */
```

### 1.2 [TO BE WRITTEN]

## SOURCES

[1] https://en.wikipedia.org/wiki/C_(programming_language)

[2] https://learn.microsoft.com/en-us/windows/wsl/install

[3] https://www.w3schools.com/c/c_comments.php
