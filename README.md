# 0x19. C - Stacks, Queues - LIFO, FIFO

## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Monty byte code files
Files containing Monty byte codes usually have the `.m` extension. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

## Usage
```bash
./monty <file>
```

## Opcodes

| Opcode | Description |
|--------|-------------|
| `push` | Pushes an element to the stack |
| `pall` | Prints all the values on the stack |
| `pint` | Prints the value at the top of the stack |
| `pop`  | Removes the top element of the stack |
| `swap` | Swaps the top two elements of the stack |
| `add`  | Adds the top two elements of the stack |
| `nop`  | Doesn't do anything |
| `div`  | Divides the second top element by the top element |
| `mul`  | Multiplies the second top element with the top element |

## Files

| File | Description |
|------|-------------|
| `monty.h` | Header file with structs and prototypes |
| `main.c` | Entry point, file reading and line parsing |
| `execute.c` | Opcode dispatcher |
| `stack_helpers.c` | Stack utility functions |
| `opcodes_1.c` | push, pall, pint, pop |
| `opcodes_2.c` | swap, add, nop |
| `opcodes_3.c` | div, mul |

## Author
Kingsley
