# Math-inc: 
A terminal C program for computing quadratic functions.

<h3>Usage:</h3>

```console
foo@bar:~$ ./main atribute1 atrribute2 attribute3
```

<h3>Example:</h3>

> 2x² + 4x + 144

```console
foo@bar:~$ ./main 2 4 144
```

<p>Output:</p>

If the equation is possible, two answer roots appear:

```console
foo@bar:~$
Root-1: Answer 1
Root-2: Answer 2
```

if the delta equals zero:

```console
foo@bar:~$
Root: Answer
```

If the equations isn't possible:

```console
foo@bar:~$ 
No real roots!
```

<h1>Tutorial to compile source code </h1>

<h3>To compile the .c file:</h3>

```console 
gcc -o main main.c
```

<h3>To run in bash shell and others:</h3>

```console 
foo@bar:~$ ./main 2 4 144
```

<h3>To run in standard windows cmd:</h3>

```console 
C:\Users\user>start main 2 4 144
```
