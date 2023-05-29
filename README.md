
# Memory Workshop

When we code, we necessarily need a concept. This concept is universal in computer programming...

This notion is necessary for any software, it is the memory.

You may not know it but until now in C, you have often used the memory of your computer when you were developing your program.

Let's see this :)

## Example

```c
int main(void)
{
    int i = 42;

    return 0;
}
```

In this example, memory is used in two different ways.

You should know that the `main` function occupies a space in the memory of your program.

In the same way, the integer `i` occupies a space in the memory assigned to your program.

## Some more details...

I have been talking about « the memory of your program » for some time now, but it is important, `of course`, to clarify what I am saying.

Obviously, when you code a program and you use memory in any way, the memory that is made available is not exactly the memory that is constantly used by your computer.

It is a `virtual memory` allocated to your program.
# Exercices

## 1. Malloc function

The most simple exercice, the glibc's malloc function.
You know it, you've used it a lot but I think you should delve a little deeper into it.

So first, `man 3 malloc` :) (no joke).

Then, create a malloced string containing `"Hello World!"`.

## 2. What are the heap and the stack ?

As explained earlier, your programs have a virtual memory, but this memory is separated into several parts.

Each of these parts is used to store specific types of variables.

The most famous (not really but why not), are the `Heap` and the `Stack`.

Find out more about this topic here: https://www.freecodecamp.org/news/understand-your-programs-memory-92431fa8c6b/

## 3. How can malloc give me space 🤔
Of course, the `void *malloc(size_t size);` is a glibc function, so in order to give you the space you need it will have to use a system call (a function provided by the Kernel).
To do that, it will use the sbrk system call.

I think it's a good idea to start reading the man 2 sbrk (do you know why not man 3 ? 🤔)
When this will be done, it's possible for you to start the creation of you're `my_malloc()` function.

Let's do that ! 🥳

(if `malloc` fails to allocate memory, what does it return?)

## 4. Have you heard about the malloc's meta-data.

<img width="1607" alt="meta" src="https://github.com/legolas-tek/Memory_Workshop/assets/75589941/4bae0483-b65f-4712-aa2a-4697081638e6">

This is how the malloc's meta-data works, in order to give malloc every informations he need he will stock some good informations.

What information do you think malloc needs ? Personally I think it would be a good thing to know what's `size` the current block, maybe the addresse `next` of the next block
and the information `free` status...

A `struct` should be good to stock those informations nah ?

The linked list of those struct will represent you're special heap :).

## 5. How malloc know where to place you're demand ?

Malloc need's to find a freed place, if you did the exercise 4, and if you know how linked list works, you can find a empty place in your heap!

## 6. Try to increase place!

If you can't find place in heap, you have to increase the size of the heap!

## 7. And malloc time!

```c
if (heap)
	// find place

	// if (find place)
		// set data
	// else
		// increase heap
else
	// increase heap
```

## Authors

- [@JeremyElalouf](https://www.github.com/jeremyelalouf)
- [@YunseLee](https://github.com/yunse-lee-EPITECH)
